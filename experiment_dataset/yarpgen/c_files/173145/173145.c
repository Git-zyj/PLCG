/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 *= ((!(arr_3 [7] [i_1])));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] = ((~(((max(-1, (arr_0 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (((~var_5) ? (arr_2 [i_1]) : ((((arr_11 [i_0] [i_0]) ? 1 : (arr_12 [i_4]))))));
                                var_16 = (!var_6);
                                arr_14 [i_1] [i_1] = (-(arr_13 [8] [8] [i_1] [i_2] [5] [i_4] [i_4]));
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_0] [i_1] &= ((((525164604 != (arr_19 [i_5 + 1] [i_1] [i_5 + 1]))) ? (arr_1 [i_0]) : (min(((min((arr_4 [2] [i_1] [2]), (arr_13 [i_0] [i_0] [i_0] [12] [0] [6] [2])))), (arr_2 [0])))));
                        var_17 = (arr_19 [7] [i_1] [i_5]);
                        var_18 = (max(var_18, 4));
                    }
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        arr_25 [i_1] = (((~((min(36515, var_3))))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] = 131;
                        arr_27 [i_0] [i_0] [i_5 + 1] [i_5 - 1] [4] = (36515 | 29020);

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_19 = (max(var_19, (~var_2)));
                            arr_30 [4] [i_0] [i_1] [4] [i_5] [i_7] [i_8] = (((arr_28 [i_8] [i_1] [i_8] [i_7 - 1]) - (!-var_13)));
                            arr_31 [i_8] [i_7 - 1] [i_5] [i_1] [i_0] = 15941293170737253257;
                        }
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_20 = var_3;
                        var_21 = (((((var_10 << (((((-127 - 1) + 159)) - 25))))) <= (arr_6 [i_5 - 1] [i_5 - 1] [i_0] [i_0])));
                        var_22 = 14796;
                    }
                    for (int i_10 = 4; i_10 < 12;i_10 += 1)
                    {
                        arr_38 [i_10] [7] = ((-(arr_36 [i_5] [i_5] [i_5] [i_5 - 1])));
                        arr_39 [8] [i_1] [i_10] [i_10] = (((((-(arr_7 [7] [i_1])))) ? (min(var_11, 3769802691)) : (arr_13 [i_0] [8] [i_5 - 1] [i_10] [i_10] [i_10 - 3] [i_1])));
                    }

                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        var_23 ^= ((min((arr_23 [i_0] [i_0]), 3769802691)));
                        arr_43 [i_0] [6] [9] [i_5 - 1] [i_11 + 1] &= (min((arr_28 [i_0] [i_0] [10] [i_11]), (((525164601 || ((max(var_5, (arr_33 [i_11 + 4])))))))));
                        arr_44 [i_0] [i_1] [i_5] [i_11 + 4] &= (arr_21 [i_0] [1] [1]);
                    }
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_24 = (max((-27203 / 525164605), 224));
                            arr_50 [i_0] = ((~(((((var_11 << (((arr_21 [i_1] [12] [i_1]) - 1512477947))))) ? ((~(arr_0 [i_0]))) : (min((arr_33 [i_0]), (arr_41 [i_0] [i_1] [i_0] [i_0] [i_13])))))));
                        }
                        for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
                        {
                            var_25 = 3769802694;
                            var_26 = (max(var_26, ((min(67108863, ((((max(var_2, 4)) != 61345))))))));
                            var_27 = ((-(arr_51 [i_12 + 4] [i_0] [0] [i_0] [i_0])));
                        }
                        for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
                        {
                            arr_56 [4] = (min(((min((arr_36 [i_5 - 2] [i_5 - 2] [i_12 + 1] [i_12 + 1]), (arr_23 [i_15] [i_1])))), ((20547 ? -32 : 61345))));
                            var_28 = ((max((61345 / var_4), ((-(arr_35 [i_15] [i_1] [i_15] [i_1] [i_1]))))) / ((((min(var_5, (arr_55 [i_0] [i_15] [9])))) ? ((max((arr_34 [i_0] [i_1] [i_5 - 2] [11] [i_15] [i_5]), var_6))) : ((var_12 ? (arr_52 [i_0] [i_1] [i_5] [i_12] [i_15] [i_12]) : var_9)))));
                            arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_32 [i_0] [i_0] [i_0];
                        }
                        arr_58 [i_5 + 1] = (arr_32 [i_5 + 1] [i_5 - 1] [2]);
                        var_29 = (min(var_29, (((-((23418 - (!var_2))))))));
                    }
                }
                var_30 ^= ((((((var_1 ? -52 : -50)))) ? (arr_2 [i_0]) : ((((arr_2 [i_0]) <= (arr_2 [i_0]))))));
            }
        }
    }
    var_31 = (max(var_31, ((min(((min(5, -50))), 3769802684)))));
    #pragma endscop
}
