/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_7 [7] [0] [i_0] = (!((max(((7051 ? -690906038 : -690906060)), (((-690906025 && (arr_0 [1] [6]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 ^= (((-690906038 + -205420403) && -13790));
                                arr_14 [i_0] [8] [i_0] [i_3] [i_0 - 1] &= 3836894873;
                                arr_15 [i_4 - 1] [i_0] [i_2] [i_0] [i_0] = ((((max((arr_8 [4] [i_1] [i_2] [i_4]), ((var_6 ? (arr_0 [i_1] [i_2]) : 178))))) ? ((-690906052 ? ((321691240 ? var_10 : (arr_11 [i_0] [i_0 - 1]))) : (((min(var_14, (arr_4 [i_2]))))))) : (min(((max(49539, 3373))), (min(4789181655058150952, (arr_4 [i_0])))))));
                                var_17 = (max(var_0, (((!(((13794 ? 690906019 : (arr_4 [i_4])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_21 [i_5] &= 1349842247;
                                arr_22 [i_0] [i_5] [0] [i_0] = ((((((80 + 1855990788) ? (~var_2) : ((var_7 ? var_3 : var_3))))) ? (arr_6 [i_0 - 1] [i_0 - 1]) : (((!(((1 ? -13761 : (arr_2 [i_6])))))))));
                                arr_23 [i_0] [i_1] [i_2] [i_2] [i_5] [i_0] = ((((!((((arr_17 [i_1] [i_5] [i_6]) ? (arr_20 [i_0 + 1] [i_1] [i_2] [i_5] [i_6]) : 2438976485))))) ? (((max(((min(108, var_14))), (arr_6 [i_0 - 1] [i_0 - 1]))))) : (arr_10 [i_0] [i_1] [i_0] [i_5])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                {
                    arr_26 [2] [2] [i_0] [i_7] = (((arr_0 [i_7] [i_1]) >= 321691256));
                    var_18 = (min(var_18, 2811834939));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                {
                    arr_29 [i_0] [i_0] [i_8] [1] = 16741;
                    arr_30 [8] [i_0] [8] = 108;
                    arr_31 [3] [9] [i_0] [i_8] = (var_13 ? 690906060 : (((arr_4 [i_0 - 1]) ? var_0 : 4859)));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 8;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_19 ^= (((!var_11) == (8991265438772744399 || -1349842257)));
                                arr_38 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [8] = (arr_25 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]);
                                var_20 = 1;
                                arr_39 [i_0] [i_1] [7] [i_9] [i_10] = var_4;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 8;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 9;i_12 += 1)
                        {
                            {
                                arr_45 [1] [i_1] [i_8] [i_0] = (arr_11 [i_0] [8]);
                                arr_46 [i_0] [0] [i_8] [i_8] [i_8] [i_8] = ((3362460087 ^ (arr_44 [i_12 + 1] [i_11 - 3] [i_0 + 2])));
                            }
                        }
                    }
                }
                arr_47 [i_0] [i_0] = (max(var_12, var_15));
            }
        }
    }

    for (int i_13 = 1; i_13 < 18;i_13 += 1)
    {
        arr_50 [i_13] = (min((arr_48 [i_13 - 1]), (min(1, -7634532963652572465))));
        arr_51 [i_13] = (min(((((((~(arr_49 [i_13 - 1] [i_13])))) ? var_4 : ((-(arr_48 [i_13])))))), (((((~(arr_49 [i_13 + 2] [i_13 - 1])))) ? (((var_11 ? 160 : 690906040))) : (min((arr_49 [4] [4]), var_0))))));
        var_21 = (max(var_21, -87));
        arr_52 [i_13] [i_13] = (max(1847145758500014993, -56394));
    }
    for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
    {
        var_22 = max((((arr_54 [i_14]) << var_14)), var_15);
        arr_55 [i_14] [i_14] = (-(((arr_54 [i_14]) ? (arr_54 [i_14]) : ((max(var_6, var_4))))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (((-((-1349842257 ? 3191252113760810848 : var_3)))))));
        arr_59 [i_15] [i_15] = ((((var_9 ? 261974518321139467 : 690906050)) <= ((((arr_53 [i_15] [11]) ? (arr_58 [i_15] [i_15]) : var_4)))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
    {
        arr_63 [i_16] = (((arr_58 [i_16] [i_16]) || (((-7 ? 3560559991 : 3362460087)))));
        arr_64 [i_16] [i_16] = (-2068955467 && var_10);
    }
    #pragma endscop
}
