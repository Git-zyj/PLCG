/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((-16516 ? (((arr_2 [i_1]) & ((var_4 / (arr_2 [i_1]))))) : ((min((arr_3 [i_1] [i_0] [i_0]), (arr_3 [8] [i_0] [i_0]))))));
                var_11 = (max(((-(!16516))), (arr_1 [i_1] [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = ((-(((-49019 && ((!(arr_11 [i_1] [i_4] [i_3] [1] [19] [i_1]))))))));
                                var_13 = ((((min((min((arr_5 [i_0] [i_0] [i_3]), (arr_13 [i_1] [i_3] [i_2 - 2] [i_1] [i_1]))), var_4))) ? (min((min((arr_2 [i_1]), var_2)), ((max(26638, 16516))))) : (arr_11 [i_1] [i_3] [15] [15] [6] [i_1])));
                            }
                        }
                    }
                }
                var_14 = ((~((~(arr_13 [i_1] [i_0 + 1] [i_1] [19] [2])))));
                var_15 = ((((-(arr_6 [i_1] [i_1] [i_1] [i_0]))) * ((((!((((arr_1 [15] [15]) ? (arr_11 [i_1] [1] [i_0] [i_1] [i_0] [i_1]) : (arr_10 [i_0] [i_1] [i_0]))))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_16 += (((arr_13 [i_7] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]) < var_9));
                            arr_26 [6] [i_6] [i_7] [i_7] [i_8] [6] = ((((((arr_24 [1] [0] [i_7] [i_7] [i_7]) | (arr_8 [i_9] [1] [i_7] [17] [i_6] [1])))) ? (((arr_15 [i_5]) ? var_9 : var_6)) : (arr_10 [i_8 - 1] [i_7] [i_8 - 1])));
                        }
                    }
                }
            }
            arr_27 [i_6] = ((-var_5 + ((((arr_9 [i_5] [i_5] [8] [i_6]) | (arr_3 [i_5] [i_5] [15]))))));
            var_17 = (((arr_9 [i_5] [14] [14] [i_5]) << (((arr_9 [i_5] [i_5] [12] [1]) - 675438936))));
            var_18 += ((-var_4 < (((arr_24 [5] [2] [i_6] [i_5] [i_5]) + (arr_21 [i_5] [i_5] [i_6])))));
            var_19 = (arr_2 [16]);
        }
        var_20 += ((!((((arr_8 [i_5] [1] [i_5] [i_5] [1] [i_5]) ? var_3 : (arr_22 [i_5] [8] [5] [i_5]))))));
        arr_28 [i_5] = (-((var_2 ? var_4 : (arr_20 [i_5] [i_5]))));
        arr_29 [i_5] [1] = var_4;
    }
    #pragma endscop
}
