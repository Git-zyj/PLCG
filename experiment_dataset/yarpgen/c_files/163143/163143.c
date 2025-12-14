/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_1] [6] [13] = ((-((((!(arr_3 [i_1] [i_1] [i_1]))) ? 19488 : var_0))));
                    arr_7 [i_1] [13] [i_1] = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_4] = 1;
                                arr_14 [i_4] = (1 + 64335);
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_3] [i_1] = (((((-99 ? (arr_12 [i_3] [i_3] [i_3] [i_3]) : (arr_12 [i_4] [i_2] [i_0] [i_0])))) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : ((((0 < (arr_12 [i_0] [i_1] [i_2] [i_1])))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] = (max(((((arr_10 [i_1] [i_3] [i_3]) && (arr_0 [i_1])))), ((var_4 ? (41 | var_0) : (arr_11 [i_1] [i_3])))));
                                arr_17 [i_4] [i_4] [i_1] [i_1] [i_1] [i_0] [i_0] = (((min((!var_7), (arr_12 [i_3] [i_2] [19] [i_0])))) || (arr_5 [i_4] [i_3] [i_1] [i_0]));
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] [i_1] [i_1] = ((-29906 ? (((arr_0 [i_0]) ? 1 : (arr_1 [i_1] [i_0]))) : (arr_10 [i_1] [i_1] [i_2])));
                    arr_19 [i_0] = ((~(arr_12 [i_0] [i_1] [i_2] [i_2])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_30 [i_7] = -29892;
                    arr_31 [i_6] [i_6] [i_7] = ((((arr_25 [i_5]) ? (arr_23 [i_5] [i_6] [i_7]) : (arr_8 [i_6] [i_6] [19] [i_6] [19]))));
                    arr_32 [i_5] [i_6] [4] = 1;

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            arr_39 [i_6] [i_6] = (1 >= (1 < 1));
                            arr_40 [i_9] [6] [i_6] [i_7] [i_6] [i_6] [i_5] = ((0 << (-29902 + 29907)));
                            arr_41 [i_5] [i_5] [i_8] [i_5] = 2164;
                            arr_42 [i_8] [1] [i_7] [i_8] [i_6] [i_8] = (((((!(((7751911559226838676 << (arr_0 [i_5]))))))) ^ ((min((((!(arr_10 [i_8] [i_7] [i_7])))), var_8)))));
                        }
                        arr_43 [i_5] [i_5] [i_7] [i_8] [i_8] = -1;
                        arr_44 [i_5] [i_8] [i_7] [i_8] = (arr_20 [i_6] [i_7]);
                        arr_45 [i_5] [i_6] [i_5] [i_8] &= ((~(((arr_8 [i_5] [i_6] [i_7] [i_8] [i_8]) | (var_3 & var_9)))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        arr_49 [i_10] = (((arr_28 [i_5] [i_6] [i_6] [i_6]) == 10));
                        arr_50 [i_5] [i_6] [i_6] [i_5] [i_5] = arr_5 [i_5] [i_5] [i_5] [i_5];
                        arr_51 [i_5] [i_5] [i_6] [i_5] = var_5;
                        arr_52 [i_5] [i_6] [1] [i_10] = (((arr_33 [i_5] [1] [i_10]) ? (((!(arr_10 [i_10] [i_6] [i_10])))) : (arr_47 [i_10] [i_10] [i_10] [i_5])));
                    }
                    arr_53 [i_7] [i_7] [i_6] [0] = ((+((((arr_8 [i_5] [i_6] [i_7] [i_7] [i_5]) <= (arr_48 [i_5] [i_6] [i_6] [14]))))));
                }
            }
        }
    }
    #pragma endscop
}
