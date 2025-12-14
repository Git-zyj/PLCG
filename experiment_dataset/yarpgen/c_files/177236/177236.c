/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (min(var_15, ((((arr_2 [i_0]) ? (min(1, var_7)) : 1)))));
        var_16 = (((min((arr_0 [i_0]), (arr_0 [16])))) ? ((-27 ? (arr_2 [i_0]) : (arr_2 [i_0]))) : ((((((var_14 <= (arr_1 [i_0] [i_0])))) << ((((arr_0 [i_0]) && (arr_2 [i_0]))))))));
        var_17 = (max(var_17, ((((((-(((arr_2 [5]) ? var_7 : var_11))))) ? -25522 : (arr_1 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_18 = 1;
                        var_19 = (max(var_19, (-33 * -1)));
                        var_20 = var_13;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_12 [1] [i_4] = (-(((((var_11 ? 1649530498208322087 : -792114783))) ? -var_8 : (((arr_4 [i_4] [i_4]) ? 11940988612976909571 : var_6)))));
        var_21 = 2147483647;
        var_22 = 1;
        var_23 = (max(var_23, ((min((((((var_10 + (arr_10 [i_4])))) ? ((var_14 ? var_10 : -27)) : -var_10)), (~-var_3))))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_17 [i_5] = (((((-2147483647 - 1) ? 12503169736889430327 : (arr_5 [i_5] [i_5] [i_5])))) ? (var_2 / var_7) : (arr_5 [i_5] [i_5] [i_5]));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                {
                    var_24 |= (min((min(0, (6505755460732642045 * 24990))), (arr_21 [i_7] [i_5])));
                    var_25 ^= (arr_19 [i_5] [i_6] [i_7]);
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_26 = (max(var_26, var_9));
                                arr_29 [i_9] [i_9] [i_5] [i_6] [i_6] [i_5] = ((-((((arr_7 [i_8 + 2] [i_8] [1] [i_7 + 2]) < var_5)))));
                            }
                        }
                    }
                    arr_30 [i_5] [i_6] [i_7] = (((((((arr_2 [0]) ? (arr_0 [i_5]) : var_13)) == ((var_12 ? var_2 : -27)))) ? ((min(var_2, (((var_4 << (6505755460732642044 - 6505755460732642043))))))) : ((((var_12 ? 6505755460732642045 : 267655874)) - (((min(var_11, (arr_20 [i_5] [i_5])))))))));
                }
            }
        }
        var_27 = (max(var_27, ((((((((arr_15 [i_5]) && var_5)))) | (((((var_13 ? var_13 : var_11))) ? var_9 : (-9223372036854775807 - 1))))))));
    }
    var_28 = (((0 * ((var_2 ? -1959132518 : 11940988612976909570)))));
    var_29 |= (min(((((((var_4 ? var_0 : var_6))) ? 1073741823 : var_6))), 6853681437359562154));
    var_30 = var_14;
    var_31 = (min(var_4, (~var_12)));
    #pragma endscop
}
