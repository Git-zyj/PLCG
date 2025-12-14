/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_7;
    var_13 = (!var_7);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 *= ((+(((((0 ? (arr_1 [i_0]) : (arr_1 [2])))) ? ((var_8 ? var_5 : (arr_1 [15]))) : 947507759))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_2] = (min((((~((var_5 | (arr_6 [1] [1] [i_2] [i_3])))))), (arr_8 [i_2] [i_2] [2] [i_0] [i_0])));
                        arr_10 [5] [i_1] [17] [i_1] [1] = (arr_0 [i_1 - 1]);
                    }
                    arr_11 [i_1] [i_2] = ((var_7 > (((((33 ? var_9 : 1950))) ? (max(1610612736, (arr_1 [7]))) : 30104))));
                    var_15 -= (!var_7);
                }
            }
        }
    }
    var_16 |= var_11;

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_14 [i_4] = 10007;
        arr_15 [1] = max(((98 ? (((min(var_7, var_5)))) : ((var_2 ? 7317949573318817047 : (arr_13 [i_4]))))), ((((var_6 & (arr_13 [i_4]))))));
        var_17 *= ((!(arr_12 [i_4] [i_4])));
        var_18 = (!2328880949714610708);
    }
    #pragma endscop
}
