/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_13 [i_1] [i_0] [i_0] [i_0] = (max((arr_1 [i_1]), ((+((((arr_10 [i_1] [i_1] [i_1] [i_1]) != 1)))))));
                        arr_14 [i_1] [i_0] [i_0] [i_0] [i_1] = (((((18446744073709551615 ? 1684102218 : 65520))) ? ((1235674741924758115 * (arr_11 [i_0] [i_0] [i_1]))) : (arr_11 [i_0] [i_0] [i_1])));
                        arr_15 [i_1] [i_1] = -var_3;
                    }
                }
            }
        }
        var_19 = (~(-767736065 <= var_14));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    arr_20 [i_0] [i_0] [i_5] = (max(((var_0 - (arr_3 [i_4] [i_5]))), ((((arr_3 [i_4] [i_0]) * 8)))));
                    var_20 *= (((max((arr_12 [i_0] [i_4] [i_0] [i_4]), (~52))) % ((max(((max(var_2, var_14))), (arr_1 [i_4]))))));
                    var_21 = ((-23232 ? ((((((arr_16 [i_0] [i_0]) ? 26779 : -1))) ? (arr_8 [i_5] [i_5] [i_5] [i_5]) : (2047 + -4998417631842270908))) : 2669218044));
                    arr_21 [i_0] [i_0] [i_0] [i_0] = 0;
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_6] [i_5] = (((((((arr_24 [i_0] [i_6] [i_0]) ? 60 : 16486469905179204651)) / (((65535 ? var_6 : var_16))))) - (((-(((arr_6 [i_0] [i_6 - 3]) ? 1 : var_8)))))));
                                var_22 = var_0;
                                var_23 = (((!var_16) && ((max((arr_25 [i_6 + 1] [i_6 - 2] [i_6] [i_6 - 3]), 7)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((var_11 ? 57294 : var_10));
    #pragma endscop
}
