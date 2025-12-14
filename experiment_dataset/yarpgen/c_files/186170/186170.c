/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (18446744073709551615 ? (arr_0 [i_0 - 1] [i_0 + 1]) : 2);
        arr_3 [i_0] &= 9223372036854775807;
        var_11 = (max(var_11, 16751));
        var_12 *= ((~(~var_3)));
        arr_4 [i_0] &= ((-1332390245 || (var_6 || 32768)));
    }
    var_13 = (((var_2 / (~2554548870))));
    var_14 = (475651717 & -6);
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_15 [i_1] [i_3] [i_3] = ((-(arr_11 [i_1] [i_1] [i_1])));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_18 [i_3] [i_2] = ((!((max(var_6, var_10)))));
                        arr_19 [i_1] [1] [1] [i_1] = (((~(-9223372036854775795 <= 9223372036854775791))));
                        var_15 = 50;
                        arr_20 [i_1] [i_1] [11] [i_3] [i_1] [i_4] = (((((-114 ? (!4165673999) : -382750429))) ? 8892528122719586575 : -2147483626));
                        var_16 = ((!(((3182195516 ? 969986587 : 232)))));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_17 &= (~1);
                        var_18 += (246 & var_9);
                        var_19 = (max(-3902744647, -123828141));
                        var_20 = (((~var_9) || -14847));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        arr_28 [i_1] [i_1] = (arr_14 [i_6] [i_6] [i_6] [i_6 - 1]);
                        arr_29 [i_6 + 1] [9] [9] [i_2] [i_2] [i_1] = 4294934528;
                        var_21 = -20343;
                    }
                    var_22 = 14443;

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, ((((min(var_5, var_6)))))));
                            var_24 += 1;
                            var_25 = ((~(~403011792149472012)));
                            var_26 = 15493;
                        }
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            arr_40 [12] [12] [i_3] [i_3] [i_7] = ((var_8 ? -var_7 : -var_1));
                            var_27 = (max(var_27, 0));
                            var_28 = ((((((arr_11 [i_2] [i_2] [12]) == 40896))) % (~44)));
                            arr_41 [i_1] [i_1] [i_1] [i_7] [i_7] = var_8;
                            arr_42 [i_1] [i_2] [i_3] [i_7] [i_1] = (!-21686);
                        }
                        var_29 = (~-4);

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            var_30 = (max(var_30, (((~(((arr_32 [i_2 - 2] [i_2] [i_2 - 4] [i_2 - 3]) | 807558640)))))));
                            arr_47 [i_10] [i_7] [i_7] [i_2] [i_1] = (((arr_17 [i_10] [i_1] [i_3] [i_2 + 3] [i_1] [i_1]) ? (!-108969366131514368) : (((!((1023329058 && (arr_37 [i_1] [i_2] [i_3] [i_7] [i_10]))))))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        arr_50 [i_1] [5] [i_2] [i_3] [i_3] [i_11] = var_3;
                        var_31 = 21939;
                    }
                }
            }
        }
    }
    #pragma endscop
}
