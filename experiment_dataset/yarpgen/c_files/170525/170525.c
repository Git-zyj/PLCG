/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_20 = var_14;
                    var_21 = (min(var_21, ((min((min((arr_0 [i_1] [i_2]), (arr_4 [i_1] [i_1]))), (arr_2 [i_1] [i_2 + 2]))))));
                    arr_6 [i_0] [i_1] [i_0] = 1;
                }
                arr_7 [i_0] = (min((~88), (((arr_5 [i_0] [i_0]) >> (arr_5 [i_0] [i_0])))));
            }
        }
    }
    var_22 = (max(var_22, (!var_19)));
    var_23 = var_14;

    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        arr_11 [13] = (~1);
        var_24 = (!var_4);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_25 = (min(var_25, (!var_15)));
                        var_26 = ((1 * (arr_15 [i_3 - 1] [2] [i_3 + 2])));
                        var_27 = (min(var_27, ((((arr_4 [20] [20]) >> (var_9 + 1754043519))))));
                        arr_18 [i_4] [1] = (~var_0);
                    }
                }
            }
        }
        var_28 = var_15;
        arr_19 [i_3] = ((1 ? var_13 : (arr_17 [i_3])));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_29 = ((((((((var_2 ? var_13 : (arr_3 [i_7] [i_7] [13])))) ? (!26505) : (min(var_12, var_12))))) ? ((max(((var_15 ^ (arr_1 [i_7]))), ((~(arr_3 [8] [8] [8])))))) : (min((arr_21 [i_7]), var_12))));
        var_30 = (((-106 ? 5266912968989014813 : 0)));
        var_31 = (min((((arr_0 [i_7] [i_7]) ? var_12 : 2251799813685247)), (arr_3 [i_7] [i_7] [i_7])));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            arr_28 [i_8] = var_5;
            var_32 += (!8546252990535657454);
        }
        for (int i_10 = 3; i_10 < 20;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        arr_37 [i_8] [i_8] [i_11] [6] [i_8] [i_10] &= -22715;
                        arr_38 [i_10] [i_11] [i_10 - 1] [i_10] = ((var_2 == ((+(((arr_32 [i_12] [i_10 - 3]) ? var_13 : var_9))))));
                    }
                }
            }
            var_33 = (min(var_16, (((1790121785 << 1) ? (!var_3) : (((arr_23 [i_8] [i_8]) ? 0 : var_4))))));
            var_34 = var_3;
            arr_39 [i_10] [i_10] = (max(-1, -8));
            arr_40 [i_8] [i_10] = (max((2289293558 || 44), (arr_24 [i_8])));
        }

        /* vectorizable */
        for (int i_13 = 1; i_13 < 1;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        var_35 = (((var_17 + var_5) & (((var_6 ? var_2 : var_9)))));
                        var_36 = ((22698 & (arr_42 [i_8] [i_13 - 1])));
                        var_37 = ((-61 ? 14 : 1));
                        var_38 &= var_1;
                    }
                }
            }
            arr_49 [i_8] = ((31906 ? 8 : 1));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            var_39 = ((-(-32643 > 3181201454)));
            arr_53 [i_8] [i_8] = arr_31 [18] [i_8];
            arr_54 [i_8] [i_8] = var_17;
        }
        for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
        {
            arr_57 [16] = (53319 % 1113765842);
            /* LoopNest 3 */
            for (int i_18 = 1; i_18 < 21;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 0;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 21;i_20 += 1)
                    {
                        {
                            var_40 += (((-245 ? var_17 : (128 + 136))));
                            var_41 = ((~((((var_2 ? var_10 : 2510603677))))));
                            arr_65 [i_8] [i_17] [i_18 + 1] [i_19] [i_20] = ((~(125 - 1)));
                        }
                    }
                }
            }
            arr_66 [i_8] [15] [20] = ((-(((arr_34 [i_8] [i_8] [i_17] [i_8]) - (arr_34 [i_8] [i_8] [i_8] [i_8])))));

            for (int i_21 = 2; i_21 < 20;i_21 += 1)
            {
                var_42 = (min((arr_47 [i_8] [i_8] [5]), (max((!2579078407), (min((arr_36 [8] [i_21] [14] [i_21] [14] [i_17]), var_6))))));
                arr_69 [i_8] [i_17] [13] [i_21] = (((arr_34 [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_17]) ? (min(19, 2005673738)) : var_7));
                arr_70 [i_21] [i_21] [i_21 + 1] = ((+((max((arr_52 [i_21 - 1]), (arr_35 [i_21 + 1] [i_21 + 1] [i_21 + 2] [i_17]))))));
                arr_71 [13] [i_21 + 1] = (max(1, (arr_36 [i_8] [i_21] [i_8] [i_8] [i_8] [6])));
            }
            /* vectorizable */
            for (int i_22 = 0; i_22 < 22;i_22 += 1)
            {
                var_43 = (((arr_42 [i_22] [1]) - var_3));
                arr_75 [3] [3] [i_8] = (!var_3);

                for (int i_23 = 0; i_23 < 22;i_23 += 1)
                {
                    var_44 = (((((-(arr_46 [i_17] [i_17])))) ? (!-18) : ((8143592486366443559 ? 4194048 : 1))));
                    var_45 = (arr_78 [i_8] [i_8] [i_8] [i_8]);
                    arr_79 [i_8] [i_8] [i_8] [i_23] [i_8] = (((arr_22 [i_23] [i_17]) ? (arr_22 [i_22] [i_17]) : (arr_22 [6] [i_22])));
                }
                for (int i_24 = 4; i_24 < 21;i_24 += 1) /* same iter space */
                {
                    var_46 = ((!(((47 ? 1455488346429239794 : var_17)))));
                    var_47 = ((!(arr_24 [i_22])));
                    arr_82 [1] [1] [1] [i_24 - 3] [i_24 - 4] [11] = arr_42 [i_17] [i_17];
                }
                for (int i_25 = 4; i_25 < 21;i_25 += 1) /* same iter space */
                {
                    var_48 = (((arr_60 [16] [16] [i_25] [i_25 + 1] [i_25] [i_25]) ? (arr_60 [i_25] [i_22] [i_22] [i_17] [i_8] [i_8]) : (arr_60 [i_25 - 3] [i_8] [i_22] [i_25 - 2] [i_25] [i_25 - 1])));
                    arr_86 [1] [i_25] [i_22] [i_25] = (!3);
                }
                for (int i_26 = 4; i_26 < 21;i_26 += 1) /* same iter space */
                {
                    var_49 = 2862806474;
                    arr_90 [i_26] [i_17] = var_8;
                }
                var_50 = ((0 ? (arr_84 [i_22] [i_22] [i_22] [13] [4] [i_8]) : var_10));
            }

            /* vectorizable */
            for (int i_27 = 3; i_27 < 19;i_27 += 1)
            {
                arr_94 [i_27] = (arr_62 [i_8] [i_8]);
                var_51 += ((~(arr_36 [14] [i_17] [14] [i_27 + 3] [i_27] [i_27])));
            }
            for (int i_28 = 0; i_28 < 22;i_28 += 1)
            {
                var_52 = -54;
                arr_97 [i_8] [i_17] [i_28] = (((min(var_13, var_19)) & (((125 ? (arr_72 [i_8]) : (!var_2))))));
            }
        }
        /* vectorizable */
        for (int i_29 = 0; i_29 < 22;i_29 += 1) /* same iter space */
        {
            arr_102 [i_8] = (arr_50 [i_8] [i_29]);
            var_53 = (!var_11);
            var_54 = (((arr_52 [i_8]) / ((209590675 ? (arr_43 [i_8] [i_8] [i_29]) : 16940062468671740895))));
        }
        var_55 = ((!(!-var_11)));
    }
    #pragma endscop
}
