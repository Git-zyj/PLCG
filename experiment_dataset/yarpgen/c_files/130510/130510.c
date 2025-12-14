/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 ^= var_5;
        var_17 = (max(var_17, (arr_3 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : var_5)) != (((-(arr_3 [i_0])))))))));
                    var_19 -= (min((arr_7 [i_2] [i_0] [i_0]), (arr_3 [i_2])));
                    var_20 = ((((((arr_2 [i_1]) ? (arr_0 [i_0]) : (arr_4 [i_1])))) ? (min((arr_2 [i_0]), var_5)) : 1));
                }
            }
        }
        var_21 = ((234 ? ((min((arr_1 [i_0]), (arr_1 [i_0])))) : ((max(32767, 21)))));
        arr_8 [i_0] [20] = ((((min((arr_5 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (arr_5 [i_0] [i_0] [i_0]) : ((-(arr_5 [9] [i_0] [i_0])))));
    }
    var_22 = (max(var_22, var_4));
    #pragma endscop
}
