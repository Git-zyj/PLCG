/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!16333);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 = ((-var_7 || (arr_1 [i_1 - 1] [i_1 - 1])));
                    var_12 = (min(var_12, var_3));
                }
            }
        }
    }
    var_13 = ((!((((var_9 + 2147483647) >> (!var_1))))));
    var_14 *= var_3;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                arr_20 [i_4] [i_6] [i_4] = var_1;
                                var_15 = ((((((min(16333, 49833))))) < (((arr_16 [i_7] [i_4] [i_4] [i_3]) ? (arr_16 [i_3] [i_4] [i_6] [i_7]) : (arr_0 [i_4])))));
                                var_16 = ((49833 < (arr_9 [6])));
                                arr_21 [i_3] [2] [2] [i_3] [4] |= (min(15708, 1));
                                arr_22 [i_3] [1] [i_3] [i_4] = ((!((min((arr_16 [i_3] [i_4] [i_6] [i_6]), (arr_16 [i_3] [i_4] [i_6] [0]))))));
                            }
                            var_17 |= ((((((arr_4 [i_4]) ? -29 : 1646784809))) ? var_7 : 8874883875222374942));
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 6;i_10 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((max(((241520719 ? (arr_29 [i_8] [i_10 + 1] [i_10 + 2] [i_10] [i_10] [i_10]) : 49201)), ((min(15708, (arr_19 [i_10] [4] [i_10 + 2] [6] [i_10])))))))));
                                var_19 = ((((var_6 ? 66 : (arr_7 [i_9] [i_10 + 1]))) < ((-(arr_2 [i_9 - 1])))));
                                var_20 &= ((((max(((var_4 ? (arr_28 [i_3] [8] [i_8] [i_9] [i_10]) : 1)), 29))) || ((max(((max(1187416342, 1))), (arr_23 [8] [8] [i_3] [i_10 - 2]))))));
                                arr_31 [i_3] [i_3] [i_3] [i_3] [i_3] [i_4] = ((!(!1)));
                            }
                        }
                    }

                    for (int i_11 = 3; i_11 < 7;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                        {
                            arr_39 [i_11 + 1] [i_4] [i_11] [i_11 - 2] [7] = ((!(arr_32 [i_12] [i_11] [i_8] [i_4] [i_4] [i_3])));
                            var_21 = (min(var_21, (!-15708)));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
                        {
                            var_22 ^= 28;
                            var_23 = (((arr_7 [i_11 - 2] [i_13]) ? (arr_19 [i_4] [i_4] [i_11 - 3] [i_11] [i_13]) : (arr_37 [i_4] [i_11 + 3])));
                        }
                        for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
                        {
                            arr_45 [i_3] [i_4] [i_8] [i_11] [i_4] [i_14] = (((!-1187416342) % (min(507904, (arr_0 [i_4])))));
                            var_24 = (max(var_24, (((!((max(43684, var_0))))))));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            arr_50 [i_4] [i_11] [i_11] [i_4] [i_4] [i_4] = (arr_46 [9] [i_4] [i_8] [i_4] [i_4]);
                            arr_51 [i_3] [5] [i_3] [i_3] [i_4] = (+-4294967295);
                        }

                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
                        {
                            var_25 = ((((2066868804 % (arr_27 [i_3] [i_11]))) % 49824));
                            var_26 = ((4171341745 ? (0 - var_6) : 39037));
                        }
                        for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
                        {
                            arr_57 [i_4] [i_11 + 1] [i_4] [i_11 + 1] [i_11 + 1] [i_11] = ((-(arr_15 [i_4] [i_4] [i_8])));
                            var_27 |= ((+((~(((arr_12 [i_3] [i_3] [i_8]) ? var_9 : 48))))));
                        }
                        for (int i_18 = 0; i_18 < 10;i_18 += 1) /* same iter space */
                        {
                            var_28 = arr_55 [i_3] [i_3] [i_3] [i_8] [i_8] [i_11] [i_18];
                            var_29 += 37594;
                        }
                        for (int i_19 = 0; i_19 < 10;i_19 += 1) /* same iter space */
                        {
                            var_30 = ((((max(177168440, 43660)))) ? (arr_8 [i_19]) : (arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]));
                            arr_64 [i_3] [i_4] [i_4] [i_11] [1] = ((var_2 ? var_5 : 15702));
                            var_31 += ((~((-30 ? 0 : 15702))));
                        }
                        var_32 += (min((arr_38 [i_3]), ((((((var_8 ? var_1 : (arr_12 [i_3] [6] [1])))) <= -3)))));
                    }
                    var_33 -= (((((((var_3 ? 1 : 754856679))) ? (arr_10 [i_3]) : (arr_2 [i_8]))) + (((((max((arr_12 [i_4] [i_4] [i_4]), var_5))) ? (arr_47 [i_3] [i_3] [i_3] [0] [i_4] [4] [i_8]) : var_3)))));
                    var_34 = (min(var_34, ((max((((54 % (arr_34 [6] [i_4] [i_4] [i_8])))), var_6)))));
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 10;i_20 += 1)
                {
                    for (int i_21 = 1; i_21 < 8;i_21 += 1)
                    {
                        {
                            var_35 += ((((!(arr_40 [i_20]))) ? (!24) : (min(99, (min((arr_6 [i_20]), (arr_53 [i_21] [i_4] [i_4] [7])))))));
                            arr_70 [i_3] [i_4] [i_20] [i_20] [i_20] = ((-(arr_4 [i_21 - 1])));
                            var_36 *= ((-(min(-2048, 1))));
                            var_37 = (min(((!((((arr_43 [i_4] [i_4]) - -84))))), (-2048 == var_0)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
