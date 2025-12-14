/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((max(var_3, 9)))), ((((max(-4843391028868537901, (-2147483647 - 1)))) ? ((1 ? 15068 : 0)) : (var_10 || 1699764368781630011)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = var_7;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_19 -= -50479;
                        var_20 = (max(var_20, var_1));
                        arr_11 [23] [22] [i_2] [6] [i_2] [i_2] = ((((var_8 ? -3595270271320478697 : -1699764368781630012))) || (((var_10 ? var_1 : var_4))));

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_21 = (((((-4843391028868537886 ? 1417425724106783048 : 15082))) ? var_0 : (~var_16)));
                            arr_14 [i_4] [i_3] [13] [i_2] [i_2] [16] [i_0] = ((var_12 ? ((var_1 ? var_4 : 44)) : (~var_16)));
                            arr_15 [i_0] [20] [20] [i_3] [i_4] = ((-((var_12 ? var_11 : var_15))));
                            var_22 = ((~(!var_1)));
                        }
                    }
                    var_23 -= ((-(((arr_9 [i_0] [i_0] [1]) ? 1 : (arr_2 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
