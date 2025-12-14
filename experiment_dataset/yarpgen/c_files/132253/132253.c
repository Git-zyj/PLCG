/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((7289826322988295866 == 74) ? 11331122485125082781 : var_0);

    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, ((max(((~(~11331122485125082771))), var_10)))));
        arr_4 [i_0] [i_0 - 1] = (1395371013 & (min(5640238932068355651, 18446744073709551615)));
        arr_5 [i_0] = (!var_6);
        var_16 |= (((var_4 != var_11) < ((10253 & ((var_7 ? var_8 : var_11))))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (((min((((1643778486 ? -1428373947 : var_3))), (var_9 & var_0)))) ? ((var_10 ? 1535663127 : var_8)) : ((~(var_13 > 1428373946))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_21 [i_1] [i_3] [i_4] [i_5] = var_8;
                            var_17 = (min(5640238932068355668, 12806505141641195983));
                            arr_22 [i_1] [2] [i_2] [i_4] [i_1] |= ((((376800572 ? var_5 : var_11)) + 100));
                        }
                    }
                }
            }
            var_18 = (max(var_18, ((var_1 ? ((((var_12 % var_3) ? (~var_8) : var_13))) : -8470527801994503797))));
            var_19 = (min(var_19, ((max(((((!1073741824) * var_2))), ((((19889 ? -6756525448005168512 : 6237607520638884629)) & (((var_0 ? var_13 : var_13))))))))));
            var_20 &= (!19741);
        }
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_30 [i_1 - 3] [i_1] [i_1 - 1] [9] [i_1] [i_1 - 2] = ((((var_11 ? var_7 : var_9))));
                        var_21 = (min(-32755, (max((min(var_11, var_3)), (var_5 | var_6)))));
                        var_22 = (((!var_0) ? ((((max(var_11, -1311335371))) ? 7115621588584468835 : 63)) : (((var_9 ? 6237607520638884629 : var_5)))));
                    }
                }
            }
            var_23 = ((!((min(var_4, var_13)))));
        }
        arr_31 [i_1] = ((1428373944 ? var_6 : (max(var_7, ((var_13 ? var_5 : var_12))))));
    }
    var_24 = (-2736925777430148857 == 6237607520638884629);
    #pragma endscop
}
