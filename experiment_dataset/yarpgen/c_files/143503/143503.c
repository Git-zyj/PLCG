/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_1 [i_0] [i_0 - 4])));
        var_11 = (min(var_11, (((arr_1 [i_0 - 1] [i_0 - 1]) == 65535))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = 3;

                    for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_13 = (max(var_13, (arr_13 [i_0 - 3] [i_3 + 1])));
                        var_14 = (max(var_14, -10));
                    }
                    for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_15 = (max(var_15, var_8));
                        var_16 -= ((!(var_5 == 1)));
                        var_17 = (max(var_17, (((~(0 > -57627580))))));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            var_18 = (-127 - 1);
                            var_19 = (~8191);
                            var_20 -= (((((arr_17 [i_2] [i_1] [i_0]) + 2147483647)) << (var_9 - 189)));
                        }
                        var_21 = (arr_9 [i_0] [i_5]);
                    }
                }
            }
        }
        var_22 = (min(var_22, ((((arr_4 [i_0] [i_0 - 4]) <= var_0)))));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        arr_26 [i_7] = (max((~3274389705092038519), -107));
        arr_27 [i_7] = 9223372036854775807;
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 7;i_8 += 1)
    {
        var_23 = 9223372036854775806;
        var_24 = var_4;
    }
    var_25 = (max(var_25, (((((((var_9 ? var_3 : var_10)) + var_9)) > (((var_1 ? -85 : var_2))))))));
    var_26 = (min(((-(min(65533, var_0)))), (~1)));
    #pragma endscop
}
