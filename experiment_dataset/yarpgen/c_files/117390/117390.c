/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (min(((var_14 * ((min(var_14, var_1))))), var_9));
    var_17 = ((115 ? (((max(-25906, 26228)))) : (max((min(3782296803666294967, var_8)), (((var_12 ? 0 : var_6)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 &= (arr_3 [i_0]);
                    arr_8 [4] [i_1 - 2] [0] [4] &= 4294967284;
                    var_19 = (min(var_19, ((((((+((min((arr_2 [2]), var_9)))))) ? (arr_5 [i_0 + 3] [9] [i_0]) : 26253)))));
                    arr_9 [6] [i_1] [i_0] = (max(748400770, var_5));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        arr_14 [i_3 - 1] [i_3] = ((!(arr_10 [i_3 + 1])));
        var_20 *= ((max((!26817), ((32767 ? var_7 : var_0)))));
    }
    #pragma endscop
}
