/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (((((arr_0 [i_2] [i_0 + 3]) ? (arr_6 [i_4] [i_4 - 1] [i_1] [i_0 + 3]) : (arr_2 [i_2] [i_3]))) >= ((-(arr_6 [3] [i_1] [i_2] [i_2])))));
                                var_18 = (min(var_18, ((min((arr_5 [i_4 - 2] [i_0]), ((~(arr_5 [i_0 - 1] [i_0]))))))));
                            }
                        }
                    }
                }
                var_19 = (min(var_19, ((max(((~(arr_12 [i_0 + 3] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1]))), (((arr_3 [i_1]) ? (max((arr_8 [i_1]), (arr_5 [i_1] [i_0]))) : (arr_0 [i_0 + 4] [i_0 + 2]))))))));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_23 [11] [i_7] [11] [i_5] [i_6 - 1] [i_7 + 2] = ((((-(arr_14 [i_7] [i_6] [i_5 + 2] [i_1] [12])))));
                                var_20 = (255 > -8);
                                var_21 = ((+((-(((arr_15 [i_7 - 2] [i_6 + 1] [i_5 - 1] [i_0]) ? (arr_20 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 2]) : (arr_22 [i_7])))))));
                                var_22 = (min(var_22, (((-(((arr_22 [2]) + (arr_11 [i_5 + 2] [i_6 + 1] [i_6 - 1]))))))));
                                arr_24 [i_7] = ((-(max((arr_16 [i_1] [i_5 + 2] [i_6 + 1]), (max((arr_6 [i_7] [i_6 + 1] [4] [11]), (arr_3 [i_0 + 4])))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_23 -= ((((((((arr_5 [i_8] [i_0]) ? (arr_4 [i_0 - 1] [i_1] [0]) : (arr_25 [i_1]))) ^ ((~(arr_15 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_9])))))) ? (((-(arr_17 [i_0 + 2] [i_8 - 4] [i_8 + 2])))) : (arr_21 [i_0] [i_9])));
                            var_24 = (arr_3 [i_1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
