/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(var_0, var_7))) ? var_8 : (((var_13 ? (-70 <= var_10) : (-46 == var_8))))));
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 |= 49;

                /* vectorizable */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [11] [i_0] [1] [i_0 + 1] [12] &= ((((-(arr_12 [i_0] [i_0] [7] [i_3] [i_4] [i_4]))) < (arr_14 [i_0 - 2] [i_4] [i_4] [i_4] [i_4])));
                                arr_16 [i_0] [i_1] [20] [i_2] [0] [i_3] [i_4] = (((((arr_3 [i_0] [i_1]) * var_0)) * (56 / -70)));
                                arr_17 [i_0] [i_0] [i_0 - 1] &= (((arr_12 [19] [i_2 - 2] [i_2 - 2] [i_2] [i_2] [i_2 - 1]) == 56));
                                arr_18 [i_0] [i_2] [i_2] [i_3] = ((12122 && (arr_1 [i_0 - 1])));
                            }
                        }
                    }
                    var_17 = ((((((arr_1 [i_1]) >= (arr_9 [i_2] [12] [i_2])))) >= var_4));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_0 - 1] [i_5] [i_1] [i_5] = (((-77 - ((((arr_2 [i_5]) >= 17689))))));
                    var_18 &= var_7;
                    arr_22 [i_0 - 1] [i_0 - 1] [i_5] [i_5] = ((((min(-16383, (((arr_1 [15]) | -53))))) >= (((!163) | var_13))));
                    var_19 *= var_10;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_6] [i_1] = ((((var_5 ? var_13 : (arr_4 [i_0] [i_0] [i_0]))) & (arr_7 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 2])));
                    arr_27 [i_6] = ((58231 ? 68 : 50));
                    arr_28 [i_0] [4] [i_6] = (arr_3 [i_0 - 2] [i_0 - 2]);
                    var_20 ^= -53;
                    arr_29 [i_0] [i_1] [i_6] = (arr_12 [i_6] [i_1] [i_1] [i_1] [i_0 - 1] [i_0]);
                }
                var_21 = (max(var_21, (((-12123 ? (arr_20 [i_0] [i_0] [i_1]) : (((((max(4398046511103, (arr_14 [20] [14] [1] [10] [i_1])))) || -86))))))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_41 [i_9] [i_8 + 1] [i_8] [i_7] [i_8] [i_1] [i_0] = (((((+(((arr_20 [i_9] [i_1] [i_1]) ? var_0 : (arr_40 [i_0] [i_0] [i_7] [i_7] [i_8] [i_7] [i_9])))))) || var_3));
                                var_22 = ((70 ? 88 : var_4));
                                var_23 = (+(min((arr_12 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_8 + 1]), (arr_35 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
