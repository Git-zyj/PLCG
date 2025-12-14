/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_14 = (max(var_14, var_11));
        arr_2 [i_0] [i_0] = (-1 * 32767);
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = (max(var_15, (var_3 | var_11)));
        var_16 = (max(var_16, var_7));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_17 = var_13;
            var_18 ^= var_13;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {
                        var_19 = (max(var_19, var_9));
                        var_20 = var_1;
                    }
                }
            }

            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                arr_16 [i_1] [i_2] [i_2] = var_12;
                var_21 = (max(var_21, var_1));
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
            {
                var_22 = (max(var_22, (var_0 - var_11)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        {
                            var_23 = (((((var_6 & var_1) % var_13)) / (22 + var_3)));
                            var_24 = var_4;
                            var_25 = (max(var_25, ((((((var_3 >> (((var_10 | var_0) - 8043133575839275263))))) || (91 != 6917529027641081856))))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
            {
                var_26 = (((var_4 > var_11) + var_10));
                arr_29 [i_1] [i_2] = (var_8 >= var_12);
                arr_30 [i_1] [i_1] [i_1] = (1 - -36);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 9;i_11 += 1)
                    {
                        {
                            var_27 = (var_0 + var_1);
                            var_28 = (max(var_28, (-6213751319134170577 != var_13)));
                        }
                    }
                }
            }
        }
    }
    var_29 |= var_8;
    var_30 = (((var_9 >> (var_12 - 1371370801))));
    var_31 = (var_3 != var_1);
    #pragma endscop
}
