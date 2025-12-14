/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] = var_0;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_15 = (min(var_15, ((((var_11 & var_2) ? 11194 : var_12)))));
                        var_16 |= 4206604617023321685;

                        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            var_17 = (~var_5);
                            var_18 = var_8;
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            arr_17 [7] [i_0] [7] [i_3] [i_3] = var_1;
                            arr_18 [i_0] = (2178941352 < 4032);
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_19 = 4206604617023321685;
                            var_20 -= var_13;
                            var_21 *= var_5;
                            var_22 = (~var_7);
                            var_23 *= (((var_1 % var_2) ? var_4 : ((var_2 ? var_11 : var_9))));
                        }
                        var_24 |= (((((14240139456686229931 ? var_4 : 139))) ? (var_14 / -1535389472229502057) : -1535389472229502057));
                        arr_21 [i_2] [i_0] [i_2] [i_0] [i_2] [i_2] = 42;
                    }
                }
            }
            var_25 = var_10;

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_26 += (29063 + 4206604617023321685);
                var_27 |= ((var_2 >> ((((var_14 ? var_13 : -1535389472229502057)) - 3854895859))));
                var_28 = var_3;
                var_29 = (~1535389472229502057);
            }
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_33 [i_0] [14] [13] [i_0] [i_0] [i_0] = ((65210 ? ((var_2 ? 736454127 : var_0)) : (var_12 < var_5)));
                            var_30 = ((var_8 ? 4206604617023321685 : var_8));
                        }
                    }
                }
                arr_34 [i_0] = (var_1 / var_8);
            }

            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                arr_38 [i_0] [i_0] [i_0] = ((var_14 ? -326 : ((var_9 ? var_10 : var_14))));

                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    arr_41 [i_0] [i_0] [i_0] [i_12] = var_2;
                    arr_42 [i_0] [i_0] = var_0;
                }
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    var_31 = ((var_7 / ((4206604617023321685 ? var_2 : var_7))));

                    for (int i_14 = 4; i_14 < 20;i_14 += 1)
                    {
                        var_32 = (min(var_32, var_11));
                        var_33 = (min(var_33, (var_6 ^ var_10)));
                        var_34 = (min(var_34, var_9));
                    }
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        var_35 = (1535389472229502056 <= 1);
                        arr_51 [i_0] [i_1] [i_11] [i_1] [i_0] = 32767;
                        arr_52 [i_0] [i_0] [i_11] [i_13] [i_0] = (~var_2);
                    }
                    arr_53 [i_13] [i_1] [7] [i_13] [i_0] [7] = ((((((var_11 + 2147483647) >> (var_6 - 1379093552)))) ? (var_1 % 1535389472229502056) : var_5));
                }
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    var_36 += ((var_2 ? var_6 : var_5));
                    arr_57 [i_0] [i_1] [i_0] [i_11] [12] = var_5;
                }
            }
        }
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            var_37 ^= var_1;

            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                var_38 = (1 < var_9);
                var_39 = ((~((var_4 | (~var_12)))));
            }
            arr_66 [i_0] [i_17] = var_13;
            var_40 = (((30996 != var_2) / (max(var_6, var_14))));
        }
        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            var_41 = (-32767 - 1);
            arr_69 [17] [i_0] = (((((((var_10 << (var_4 - 213))) >> (((var_10 << 0) - 97))))) ? (((min((var_10 || 57), 238)))) : var_1));
            var_42 = (((((-(var_11 + var_1)))) ? 57 : (15107431829718302841 + 1)));
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    {
                        arr_75 [i_20] [i_0] = ((((-((var_10 ? var_12 : 30235))))) || (((((min(15298753772999340357, 14240139456686229930))) ? (!var_11) : (var_13 <= 1)))));
                        var_43 -= 32767;
                    }
                }
            }
        }
        for (int i_22 = 0; i_22 < 23;i_22 += 1)
        {
            /* LoopNest 3 */
            for (int i_23 = 0; i_23 < 23;i_23 += 1)
            {
                for (int i_24 = 1; i_24 < 1;i_24 += 1)
                {
                    for (int i_25 = 4; i_25 < 22;i_25 += 1)
                    {
                        {
                            var_44 = ((((((var_14 ? var_9 : var_5)) < 32767)) ? (max((min(var_13, var_3)), var_11)) : (((var_7 ? (var_2 - var_8) : (var_4 + var_5))))));
                            var_45 = (max(var_45, (((-(max(var_12, (max(var_9, var_13)))))))));
                        }
                    }
                }
            }
            arr_84 [i_0] [i_0] [9] = (max((((((30996 ? 1662317697 : var_8))) - var_0)), var_6));

            for (int i_26 = 0; i_26 < 23;i_26 += 1) /* same iter space */
            {
                var_46 *= (((max(var_3, (min(var_14, var_0))))) && (var_2 | 40578));
                var_47 = 31;
                var_48 = ((-(~1)));
            }
            /* vectorizable */
            for (int i_27 = 0; i_27 < 23;i_27 += 1) /* same iter space */
            {
                var_49 = var_14;
                var_50 |= var_9;
                var_51 = (var_12 / var_6);
                var_52 ^= var_14;
            }
        }
        var_53 = ((((((0 - var_2) | var_11))) ? (((((var_10 ? var_12 : 24957)) % var_2))) : var_13));
        arr_90 [i_0] [i_0] = var_6;
    }
    for (int i_28 = 0; i_28 < 13;i_28 += 1)
    {
        var_54 = ((min(((var_9 ? var_11 : var_0)), var_4)));
        var_55 = var_11;
    }
    /* vectorizable */
    for (int i_29 = 0; i_29 < 16;i_29 += 1)
    {

        for (int i_30 = 0; i_30 < 16;i_30 += 1)
        {
            arr_101 [i_30] = ((var_9 ? var_3 : 179));
            /* LoopNest 2 */
            for (int i_31 = 0; i_31 < 16;i_31 += 1)
            {
                for (int i_32 = 1; i_32 < 1;i_32 += 1)
                {
                    {
                        var_56 = -var_14;
                        var_57 = var_14;
                        arr_106 [i_29] [i_30] [i_31] [i_29] = var_9;
                    }
                }
            }
            var_58 = (~var_12);
        }
        var_59 = ((0 ? -var_2 : -var_2));
    }
    /* vectorizable */
    for (int i_33 = 0; i_33 < 14;i_33 += 1)
    {
        arr_109 [i_33] = var_12;
        var_60 -= (((-58 ? 2147483647 : 1)));
    }
    /* LoopNest 2 */
    for (int i_34 = 2; i_34 < 7;i_34 += 1)
    {
        for (int i_35 = 0; i_35 < 10;i_35 += 1)
        {
            {
                arr_114 [i_34 + 2] [1] [i_34 + 2] = (((var_11 - var_11) ? ((var_11 ? -111 : (max(var_13, var_9)))) : var_4));
                var_61 = ((0 & (((((var_8 ? var_9 : 25050))) ? var_1 : (((min(24957, var_12))))))));
                var_62 += ((((!(((25050 ? 22620 : -80))))) || (var_8 != -var_10)));
                arr_115 [i_34 + 2] [i_34 + 2] [i_35] = var_7;
                var_63 += var_13;
            }
        }
    }
    var_64 = (((var_14 ? var_9 : 224)));
    #pragma endscop
}
