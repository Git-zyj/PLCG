/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (min(33554400, 255));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 -= 0;
        arr_2 [i_0] = (--233);
        var_18 = (((min(0, 288230376151711743)) ^ 255));
        var_19 = (max(var_19, ((((((221 + (32767 - var_0)))) ? (min(233, var_14)) : 0)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_20 = (1733900246 >= 233);
            arr_9 [i_2] = (70368744177663 && 255);
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {
                        var_21 = ((!(2670269147 & 1)));
                        var_22 = var_14;
                        arr_17 [i_4] [i_3 + 1] [i_2 + 1] [1] [i_1] = var_15;
                        var_23 = 70368744177663;
                        var_24 = (((~33554405) % 178));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_25 |= (-4384253516897964751 & 2683379709);
                        var_26 = ((((179 ? var_11 : -58)) << (-114 + 117)));
                        var_27 = 221;
                        var_28 = (77 % var_15);
                        var_29 = (0 * 3202054517);
                    }
                }
            }
        }
        var_30 ^= 18333084643007374345;
        var_31 = (((-101 ? 5 : 238)));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_32 &= (1 | 9);
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        var_33 = 18446744073709551608;

                        for (int i_11 = 2; i_11 < 11;i_11 += 1)
                        {
                            var_34 = (-58 < var_5);
                            var_35 = (1 != (-32767 - 1));
                            var_36 = (!120);
                        }
                        for (int i_12 = 1; i_12 < 9;i_12 += 1)
                        {
                            var_37 = ((93 ? 1 : var_12));
                            var_38 = ((var_6 ? 1 : -27192));
                            var_39 = ((22 ? 65513 : 65513));
                            var_40 = (-32764 / 65);
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_41 = ((127 ? 23 : 255));
                            var_42 = ((1 ? 0 : (-2147483647 - 1)));
                            var_43 -= (((var_11 & 17580842113684467805) & (((268435424 ? var_7 : 4239070982)))));
                            var_44 = (max(var_44, var_4));
                        }
                        var_45 = var_10;
                        var_46 &= (((((var_10 ? 94 : var_8))) && (~var_8)));
                        var_47 = 1;
                    }
                }
            }
        }
    }
    var_48 = (1 >= 255);
    var_49 = ((var_9 ? (max(4294967295, 255)) : (((((26 || 1032868349) < (max(var_4, var_4))))))));
    #pragma endscop
}
