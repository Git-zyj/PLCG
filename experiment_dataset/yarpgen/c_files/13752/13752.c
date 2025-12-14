/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]) / (((arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]) ? (arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]) : (arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                                arr_20 [i_0] [i_2] = ((2186682107 <= (0 + 14)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_24 [i_0] [i_1] [i_0] [i_5] [i_0] = (8191 || 4294967295);
                        arr_25 [i_0] = (max(((-(arr_22 [i_0 + 1] [i_0 + 1] [i_0]))), (arr_22 [i_0 + 1] [i_0 + 1] [i_0])));
                        arr_26 [i_0] = (+-1066974041);
                        arr_27 [2] [i_0 + 1] [4] [i_1] [i_0] [i_5] = ((((min(((~(arr_2 [i_0]))), (((!(arr_7 [i_5] [2] [i_1] [i_0]))))))) ? var_7 : ((((1066974031 && var_3) <= (arr_15 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]))))));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_15 = (((var_2 == 2585278440309088361) >> ((((arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1]) < ((0 | (arr_11 [i_2] [i_1]))))))));
                        var_16 = (((((-1066974042 < (min(1066974030, (-127 - 1)))))) + ((-(!-1066974042)))));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_32 [i_7] [i_7] = ((~((var_7 | (arr_7 [i_7] [i_7] [i_7] [i_7])))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {

                    for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        arr_42 [i_8 + 1] [i_7] [i_8] [i_8 + 3] [i_8 - 1] = -var_10;
                        arr_43 [i_7] [i_7] [i_7] [i_10] [17] = (arr_6 [i_7] [i_8 + 3] [i_9]);
                        var_17 = (arr_1 [i_7] [i_7]);
                    }
                    for (int i_11 = 1; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, (((-(~4343684053263963708))))));
                        arr_47 [i_7] [5] [i_9] [i_7] = ((-(((arr_34 [i_7]) ? (arr_16 [i_7]) : -25406))));
                    }
                    arr_48 [i_7] [i_8] [i_7] = arr_22 [i_7] [i_8] [i_7];
                    var_19 = (min(var_19, -10));
                }
            }
        }
        var_20 = (min(var_20, -25426));
        arr_49 [i_7] = ((!(!-1066974050)));
    }
    var_21 = (min(-25406, (max(-1, (!3512111934)))));
    #pragma endscop
}
