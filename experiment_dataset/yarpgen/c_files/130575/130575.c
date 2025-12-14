/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(var_6, var_11))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = ((var_16 == ((13832 ? -7152539406905448566 : -20602))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = ((-20602 ? -20602 : 51110));
                                var_21 = 13832;
                            }
                        }
                    }
                }
            }
        }
        var_22 = ((((var_0 ? var_8 : -2119209933)) > (11551 == 25778)));
        var_23 = (-13813 % 4294967295);
        arr_14 [i_0] = (((-11551 ? -22017 : 30423)));
        arr_15 [i_0] [6] = (arr_0 [i_0]);
    }
    var_24 &= (((((var_16 ? 2047 : var_13)) * (((max(var_4, (-127 - 1))))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_25 -= -24798;
                        arr_29 [i_6] = ((var_6 ? var_14 : -1414615056));
                        var_26 = ((((((25778 ? -22 : -28949)) + 2147483647)) << ((((((4294965248 ? -20602 : 28965)) + 20615)) - 13))));
                        arr_30 [i_6] [i_6] [i_8] [i_8] = ((0 == (arr_23 [i_5] [i_5] [i_5])));
                        var_27 = (var_4 || var_15);
                    }
                    var_28 = (((arr_22 [i_7] [i_6] [i_6] [i_5]) ? (arr_17 [i_6 + 1] [i_6 + 2]) : ((var_15 ? 99257483 : var_12))));
                    arr_31 [i_5] [i_5] [i_6] = var_0;
                }
            }
        }
    }
    #pragma endscop
}
