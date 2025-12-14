/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((min(var_6, var_8)))));
    var_14 = 71;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = (var_3 | var_6);
                                var_16 *= (arr_2 [i_0] [i_3] [i_3]);
                                var_17 = var_6;
                            }
                        }
                    }
                    arr_11 [i_1] [i_1] = (var_0 % var_12);
                    arr_12 [i_0] [i_0] [i_1] = ((!((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) + (arr_1 [i_2 + 1] [i_1]))))));
                    arr_13 [i_1] [i_0] [i_1] = ((!(arr_6 [i_0] [i_1] [i_1])));
                    arr_14 [i_1] [i_1] [i_1] = var_4;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                {
                    var_18 = var_4;
                    arr_22 [i_0] [i_0] [i_5] [i_0] = (arr_10 [i_0] [i_5] [i_6 + 3] [i_0]);
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_5] = ((!(-32767 - 1)));
                                var_19 = (max(var_19, (((!(arr_5 [i_0] [i_0]))))));
                            }
                        }
                    }
                    arr_29 [i_6] [i_6] [i_5] = (arr_4 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_38 [i_10] = (((~(arr_17 [i_0] [i_9]))));
                        var_20 = (min(var_20, -var_12));
                        var_21 = (((((arr_7 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 + 2]) + 2147483647)) >> (((arr_7 [i_11 + 1] [i_11 + 2] [i_11 + 2] [i_11 + 2]) + 298820832))));
                        arr_39 [i_11] [i_10] [i_10] [i_0] = 4294967290;
                        var_22 = arr_27 [i_0] [i_9] [i_10] [i_10] [i_11];
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {
        var_23 = (min(((((min((arr_8 [i_12] [i_12] [i_12] [i_12]), -6095942774146308961))) || (31270 || 1555146357))), 1));
        arr_42 [i_12] [i_12] = 6729530231248415212;
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
    {
        var_24 = -2855810653336975135;
        arr_47 [i_13] [i_13] = (min((~var_12), ((1792 ? 7495382063944884449 : 2404036076149337416))));
        arr_48 [i_13] = 55;
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            var_25 = (min(var_25, (32 + var_5)));
            var_26 = var_6;
        }
        for (int i_16 = 4; i_16 < 16;i_16 += 1)
        {
            var_27 = var_0;
            /* LoopNest 3 */
            for (int i_17 = 1; i_17 < 16;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            arr_67 [i_14] [i_14] = var_12;
                            var_28 = (max(var_28, var_3));
                        }
                    }
                }
            }
            arr_68 [i_14] = (var_7 % var_9);
        }
        for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
        {
            var_29 = var_9;
            var_30 ^= (arr_53 [6] [i_14] [i_20]);
            arr_72 [i_14] [i_14] [i_20] = (((((128 << (var_4 - 5379390848747574697)))) ? var_0 : -2131897855));
            arr_73 [i_14] [i_14] [i_14] = var_0;
        }
        for (int i_21 = 0; i_21 < 18;i_21 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 18;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 18;i_23 += 1)
                {
                    {
                        arr_82 [i_14] = (arr_45 [i_22] [i_21]);
                        var_31 = (arr_30 [i_14] [i_21] [i_21]);
                        var_32 = ((10582286308092580919 && (arr_79 [i_14] [i_22])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 18;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 1;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 18;i_26 += 1)
                    {
                        {
                            var_33 = (arr_2 [i_14] [i_14] [i_24]);
                            arr_90 [i_14] [i_14] [i_14] [i_14] [i_14] = ((((((arr_87 [i_14] [i_14] [i_26] [i_14] [i_14] [i_14]) & var_1))) ? (arr_84 [i_26] [i_26] [i_26] [i_26]) : -8789202435656962242));
                        }
                    }
                }
            }
        }
        var_34 = 14866943036282413509;
    }
    var_35 = var_9;
    #pragma endscop
}
