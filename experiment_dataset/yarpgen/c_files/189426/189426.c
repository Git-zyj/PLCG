/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_7 + var_11) ? ((1 - (max(var_2, var_16)))) : ((((var_13 | var_15) | ((var_8 ? 4294967295 : var_18)))))));
    var_20 |= ((!var_8) >= (((!var_5) >> ((1 ? var_2 : var_6)))));
    var_21 += var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_22 &= var_4;
                        arr_11 [i_0] [i_0] [i_0] [i_0] = (~var_7);
                        var_23 = (((((var_2 ? ((min(var_8, var_2))) : (var_12 / var_14)))) ? (((((min(var_16, var_4))) ? var_8 : var_10))) : ((5 ? (!var_17) : ((var_0 ? var_16 : var_10))))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_1] [i_2] [8] = (7 && -var_1);
                        arr_16 [i_1] [11] = ((var_16 ? (var_16 - 4294967290) : (~var_17)));
                        var_24 = (((max(-var_18, var_7)) % -1));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_20 [i_0] [i_5] [i_0 + 3] [i_0 + 3] = (((((((var_8 ? 256 : var_4))) ? ((var_11 ? var_9 : 22)) : (var_11 & var_11))) >> ((((var_15 ? var_2 : var_9)) >> (var_13 + 28718)))));
                        arr_21 [i_2 + 1] [i_5] [i_2 + 1] [i_5] [i_1] = (((4089142853 ? 1 : 4294967293)));
                        var_25 = ((var_9 ? (min(0, var_8)) : -var_8));
                    }
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        var_26 &= var_6;
                        var_27 = var_13;

                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_28 = ((-((var_4 ? var_3 : 4294967280))));
                            var_29 -= var_13;
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_30 = var_15;
                            arr_29 [i_0] [i_1] [i_2] [i_2] [13] = (((((var_9 ? 0 : (var_15 - var_14)))) ? var_6 : (((-(!var_17))))));
                        }
                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            var_31 = ((30089 ? ((((((var_9 ? var_3 : var_2))) ? var_5 : (var_2 ^ -125)))) : var_15));
                            arr_32 [i_6] [i_1] [i_1] [i_1] [i_9] = ((((((((16 ? var_18 : var_9))) ? (((var_18 ? 16 : var_8))) : ((0 ? var_13 : var_15))))) ? var_17 : (!30094)));
                            var_32 &= var_7;
                        }
                    }
                    var_33 = (((var_16 / var_14) / var_4));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_38 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 3] [10] = ((!((max(((var_3 ? var_14 : var_13)), (18 ^ 59))))));
                                arr_39 [i_0] [i_0] [i_0] [i_0] [i_11 + 1] |= ((((var_3 ? var_15 : var_1)) + -var_13));
                                var_34 += (max(7080, (~62)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 += var_7;
    #pragma endscop
}
