/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((1546862736 ? 59204 : 102)))) ? var_6 : (-35279499 && var_3)));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_21 &= min((arr_0 [18] [i_0]), ((-(((arr_1 [i_0]) * (arr_2 [0]))))));
        var_22 = (min(var_22, ((((((((var_3 ? 90 : var_4))) ? -18844 : ((max(63, 56))))) > (((!(arr_0 [4] [i_0 - 4])))))))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_23 &= arr_9 [i_1] [i_2] [i_2];
                    var_24 += var_9;
                    arr_11 [i_1] [i_1] [i_1 + 2] [i_1] = 0;
                }
            }
        }
        arr_12 [i_1] = (-(!var_1));
        var_25 -= ((((((arr_3 [i_1] [i_1 - 1]) - (arr_3 [i_1 - 1] [i_1 - 1])))) ? (((arr_10 [i_1 + 1] [8] [i_1 - 1]) ? (arr_5 [i_1]) : (arr_3 [i_1 + 1] [i_1 - 1]))) : ((4294967295 ? 29566 : 0))));
        var_26 = 63;
    }
    var_27 = (max(var_27, ((max(var_6, 55)))));
    #pragma endscop
}
