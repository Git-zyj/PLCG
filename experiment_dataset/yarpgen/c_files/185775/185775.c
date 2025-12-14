/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = ((arr_4 [3]) ? (((((!var_13) && 174472706)))) : 4294967295);
                            var_18 = (~555817997);
                            var_19 = (max(var_19, ((((max(((min(1, (arr_10 [i_0] [i_0] [i_1] [i_1] [i_0] [i_3])))), ((-(arr_1 [i_2] [i_1]))))) >= (((min((arr_2 [15] [i_0 + 2]), (arr_5 [i_0 + 2] [i_0 + 1] [i_3]))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_20 = ((((((min((arr_1 [i_0 - 2] [i_0 - 2]), (arr_2 [i_0] [i_0])))) ? (min(var_15, (arr_1 [8] [8]))) : (((var_1 ? (arr_13 [i_0] [i_0] [i_1] [19] [i_5]) : 1))))) * (((555817980 ? 3739149300 : 555817997)))));
                            var_21 = (((arr_2 [i_5] [i_0]) * var_9));
                            var_22 &= (arr_5 [i_4] [i_0] [i_4]);
                            var_23 *= ((~(arr_2 [i_5] [i_5])));
                            var_24 = ((!((max((arr_1 [4] [4]), (((!(arr_0 [i_0])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_25 *= (((arr_14 [i_7] [i_7]) ? ((max(555818002, 555817996))) : (((var_13 ? var_13 : (arr_13 [i_0] [i_0] [1] [6] [i_0 - 2]))))));
                            arr_20 [i_1] [i_6 - 1] [i_6] [i_1] [17] [i_1] = ((((arr_12 [i_7] [i_7] [i_7]) ? 4294967295 : (555817997 * var_11))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_26 = ((var_12 <= (((((1302298881 ? 9661 : 3739149300)) == 3343413419)))));
                                var_27 = (~(128 | 116));
                                var_28 = (((((((((arr_33 [i_8] [i_9] [i_9] [i_10] [i_11] [i_12]) ? (arr_27 [i_11 + 1] [i_9] [i_8]) : var_11))) / (min(var_7, 555817996))))) || (((32767 % (-6799845738721190084 != 8380416))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 23;i_14 += 1)
                        {
                            {
                                var_29 -= min((arr_38 [i_9] [i_13] [i_14]), ((-((((arr_30 [i_9] [i_10] [i_9] [i_14]) > (arr_23 [i_10])))))));
                                arr_41 [i_8] [i_9] [i_9] = (((((3739149317 - 3343413419) / (arr_33 [3] [i_14 - 2] [i_13 - 3] [i_13] [3] [i_13 + 2]))) / ((((3739149309 + (arr_23 [i_9]))) / (253 + 555818002)))));
                                arr_42 [i_8] [i_8] [i_8] [i_8] [i_8] [i_9] = (2147483646 < -12890);
                                var_30 &= ((((((var_7 <= var_2) % ((((arr_22 [i_8]) != (arr_28 [i_14]))))))) | (max((arr_21 [i_9] [i_10]), var_16))));
                                var_31 = ((0 ? 253 : ((43635 | (148 < -29582)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            {
                                var_32 = (arr_30 [i_8] [i_10] [4] [i_9]);
                                var_33 = (min(var_33, (((~((((((arr_31 [i_8]) ? var_5 : (arr_39 [i_8] [i_10])))) ^ (arr_40 [i_10] [i_9]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
