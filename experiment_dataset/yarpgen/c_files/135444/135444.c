/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] = (min(((min(var_6, var_1))), (min((max((arr_0 [i_0]), 3792515225)), var_12))));
                    var_20 = 3792515217;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 ^= (((((((-(arr_7 [i_2]))) & (((((arr_14 [i_1] [i_1 - 1] [i_1 - 1] [i_3] [i_4] [i_3]) < (arr_1 [8])))))))) ? (arr_11 [1] [1] [i_3] [19] [i_4] [1]) : (min((arr_4 [i_3]), (((-(arr_13 [i_0] [3] [i_0] [11] [0]))))))));
                                var_22 = (((arr_11 [i_4] [i_4] [i_0] [i_2] [20] [i_0]) ? (min((max(3792515225, 3792515225)), (((arr_5 [i_1] [i_2] [i_2] [i_4]) ? 502452065 : var_2)))) : var_16));
                            }
                        }
                    }
                    var_23 ^= (min(502452071, (min(((var_10 ? (arr_5 [i_2] [i_2] [i_2] [i_1]) : (arr_9 [i_0] [i_1] [i_2] [i_0]))), ((~(arr_5 [i_0] [i_0] [i_0] [i_0])))))));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_21 [i_7 - 1] [i_6] [i_6 + 3] [i_1 + 3] [i_1 + 3] [i_0] = (((((((min(3792515243, 3792515243)) > (((502452068 ? var_2 : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))) % 502452068));
                                var_24 = (min(((max((((502452068 ? (arr_0 [i_1]) : (arr_18 [i_7] [i_6 - 3] [i_1 + 1] [i_1 + 1])))), (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 3792515227 : (arr_20 [i_0] [i_0])))))), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                                arr_22 [i_0] [20] [4] [i_0] [i_7] [i_0] [i_7 + 1] = (min((arr_7 [i_0]), 3792515210));
                            }
                        }
                    }
                    var_25 = (((!502452071) ^ (max((~502452068), (((arr_14 [i_1 + 1] [i_0] [i_1 + 1] [i_0] [i_0] [16]) ? (arr_16 [i_0] [i_1] [i_0] [i_0]) : 502452080))))));
                    var_26 = (min(var_26, ((min((((((((arr_6 [i_5] [i_1] [i_0] [i_0]) > (arr_16 [i_0] [i_1] [i_1] [i_5]))))) | var_0)), ((((((var_13 * (arr_12 [i_0] [19] [i_1] [i_5] [i_5] [i_5])))) ? (arr_10 [1] [i_1] [i_5] [i_5]) : var_12))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_27 ^= ((((max((((!(arr_1 [i_8])))), (arr_9 [i_1] [i_5] [i_1] [i_9])))) ? (((!(((var_3 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : 502452070)))))) : ((-(~var_10)))));
                                var_28 = ((((((var_12 ^ var_0) ? ((min(var_10, (arr_26 [i_0] [i_0] [i_0] [i_8] [i_8] [i_8])))) : var_1))) & ((502452063 ? (arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 3]) : ((((arr_9 [i_0] [i_1] [15] [i_9]) ? (arr_18 [15] [i_1] [i_5] [i_8]) : (arr_23 [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
                for (int i_10 = 3; i_10 < 21;i_10 += 1)
                {
                    var_29 = (min(((min(var_10, var_2))), 502452075));
                    var_30 ^= (((((var_15 ^ (((arr_17 [i_0] [i_0] [i_0] [i_0]) & (arr_17 [i_0] [i_0] [i_0] [i_0])))))) ? (min(((var_17 ? (arr_13 [i_0] [i_0] [i_0] [i_1 + 2] [i_1 + 3]) : 502452066)), var_4)) : (min(502452075, (arr_5 [i_1] [i_1] [i_1] [1])))));
                    var_31 = (arr_11 [0] [i_10] [i_10] [i_0] [i_0] [i_0]);
                }
                arr_29 [i_0] [17] = var_1;
            }
        }
    }
    var_32 ^= var_4;
    #pragma endscop
}
