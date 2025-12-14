/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 |= (max(((var_2 ? (!2) : var_9)), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 -= 2;
                                var_15 = (min(var_15, 4762570995086916973));
                                var_16 *= (arr_1 [i_1] [i_2 + 3]);
                                var_17 = (min(var_17, ((((((arr_11 [i_0] [i_0] [0] [i_3] [10] [i_0] [i_4]) > ((var_8 ? (arr_2 [i_0]) : var_2)))) ? ((((((~(arr_8 [i_0] [i_0] [6])))) & (~var_5)))) : ((-var_2 ? (((max(65, (arr_1 [i_0] [i_0]))))) : ((54 ? 140737488355327 : 4294967293)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_18 = (max((max(var_2, (arr_10 [i_2 + 3] [i_6 + 2] [3] [i_5]))), (((arr_17 [i_6] [i_6] [i_6] [i_6 + 1] [14]) ^ var_3))));
                                arr_20 [i_6] = var_6;
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((!((max(657290281, -29831)))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_19 = (min(var_19, ((((~-171548006484335354) ? 2218003113 : (~-1))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_20 = (arr_12 [i_8 - 2] [i_9] [i_9] [12] [i_9] [i_9]);
                                arr_30 [i_0] [i_9] [i_7] [i_0] [i_9 + 1] [i_0] [i_7] = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [1] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_21 = (arr_13 [2] [2] [2] [i_10]);
                                arr_38 [2] [i_0] [i_0] [6] [i_0] = ((1 ? -286592811 : 204));
                                var_22 += var_10;
                                arr_39 [i_11] [4] [4] [0] [0] = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_23 ^= ((+(((arr_5 [i_0]) ? var_1 : var_9))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_24 = (max(var_24, ((~((((((15 ? 0 : var_5))) && -14644)))))));
                            arr_44 [i_1] [i_1] = ((~((((((arr_27 [i_0]) / 25692)) > (min(var_4, (arr_40 [i_13] [i_12] [i_1] [i_0]))))))));
                        }
                    }
                }
                var_25 = (((11 >> 1) | (~0)));
                var_26 = (min(var_26, ((max(((1 << (34 - 10))), 252)))));
                arr_45 [9] = (((max((min(var_2, var_2)), (((-(arr_15 [7] [7] [7])))))) > (5414011859639260971 >= -21)));
            }
        }
    }
    var_27 -= var_3;
    #pragma endscop
}
