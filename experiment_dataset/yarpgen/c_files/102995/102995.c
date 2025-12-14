/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 ^= (~((~(~275165752))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_21 = (max(((var_17 ? (arr_1 [i_2 - 3]) : (arr_3 [i_0] [i_1] [i_2]))), ((var_7 ? 244 : (arr_1 [i_0])))));
                            var_22 = (max(var_22, var_3));
                        }
                    }
                }
                arr_9 [i_0] = (241 == 0);
                arr_10 [i_0] = (((!186) ? (arr_1 [i_1]) : (!3594146366)));

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_23 = ((((~(~var_16)))) ^ (arr_2 [i_4] [i_1]));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_24 = (min(var_24, var_9));
                                arr_18 [13] [i_5] [i_4] [13] [i_4] [i_0] [i_0] = -3008613753879135563;
                                var_25 = (max(10695639087438521546, 245));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_4] = (((((var_16 ? (arr_16 [i_4]) : var_15))) ? (!1462351957) : ((min(var_10, var_16)))));
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_22 [i_7] [i_1] [0] = (arr_16 [i_1]);
                    var_26 = ((~(~var_16)));
                }
            }
        }
    }
    var_27 = var_15;
    var_28 = (((var_7 * (11 / 1462351957))));
    var_29 = 0;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 17;i_9 += 1)
        {
            {
                var_30 = ((!(10258952893100875098 >= 8187791180608676517)));

                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_31 = (min(var_31, 14724585466193725439));
                                arr_37 [i_8] [i_12] [i_11] = var_9;
                            }
                        }
                    }
                    arr_38 [i_8] [i_8] [i_9] [i_10] &= (((!10695639087438521557) >> ((var_10 ? (!111) : var_4))));
                }
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    var_32 = (((((~((max(11, 21)))))) || var_13));
                    var_33 = (((arr_31 [i_13] [i_9] [i_9 + 3] [i_8]) - (var_12 * var_3)));
                    var_34 += ((min(((2 ? 3160433047 : 63)), var_5)));
                }
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            {
                                var_35 = (max(var_35, var_18));
                                var_36 = (max(-var_19, 192));
                            }
                        }
                    }
                    arr_49 [i_9] [i_9] = (max((min(11062440835476309495, var_5)), (((((max(var_0, (arr_5 [11] [i_9] [i_14] [i_14])))) ? (14724585466193725456 || 241) : 240)))));
                    arr_50 [i_9] = ((-(arr_34 [i_9 + 2] [i_9 + 2] [i_9 + 3] [i_14])));
                }
                var_37 = 241;

                /* vectorizable */
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    arr_54 [i_17] [i_9] [i_9] [i_8] = (arr_3 [i_17] [i_9] [i_8]);

                    for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
                    {
                        var_38 = (arr_46 [i_8] [i_9] [i_18] [i_18] [6] [i_9]);
                        var_39 ^= (arr_40 [i_17] [i_17] [i_8] [i_8]);
                        var_40 = (min(var_40, (arr_4 [i_8])));
                        var_41 = (((arr_26 [i_8] [i_9 - 3]) >> (((arr_26 [i_8] [i_9 - 1]) - 1823965785940663680))));
                    }
                    for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
                    {
                        var_42 &= (((var_15 ? 10695639087438521546 : var_8)) & var_1);
                        var_43 = (max(var_43, -var_13));
                    }
                    for (int i_20 = 0; i_20 < 21;i_20 += 1)
                    {
                        var_44 = arr_16 [i_20];
                        var_45 -= ((!(arr_44 [i_8] [i_9] [i_9 - 1] [i_8] [i_17] [i_20])));
                    }
                }
                for (int i_21 = 0; i_21 < 21;i_21 += 1)
                {

                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        var_46 &= (2832615339 ? 10695639087438521546 : 240);
                        arr_69 [i_9] [1] [i_21] [18] [i_21] = var_9;
                        var_47 = (min(var_47, ((-(arr_14 [i_8] [i_9] [16] [i_9 + 3] [i_22])))));
                    }
                    var_48 = var_8;
                }
            }
        }
    }
    #pragma endscop
}
