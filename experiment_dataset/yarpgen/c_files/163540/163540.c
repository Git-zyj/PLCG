/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (max(var_19, ((((((min(20828, (arr_0 [i_0]))))) * var_14)))));
        arr_3 [7] = -20821;
        arr_4 [i_0] [i_0] = (((var_1 > var_6) ? 7751058726682307052 : ((((-var_17 || (44708 <= var_14)))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = ((((var_10 + (((max(0, 1)))))) | (arr_0 [0])));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    var_20 ^= (arr_7 [i_2 - 3] [i_3]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_21 ^= (((((-((var_3 ? var_10 : (arr_18 [i_2])))))) ? (arr_18 [i_5]) : (max((min(1016, 5084109832709534496)), ((max(60, var_2)))))));
                                arr_20 [i_1] [i_4] [i_1] [i_2] [i_1] = (((((arr_8 [i_1]) ^ 128)) - (arr_5 [i_1])));
                                arr_21 [i_1] = (min(((-(arr_7 [i_1] [i_1]))), ((min((arr_1 [i_2 + 2] [i_2 + 3]), (((var_10 >= (arr_8 [i_1])))))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_36 [i_6] &= 0;
                                var_22 = (max(var_22, ((!(arr_33 [i_1] [i_8] [i_7] [0] [1] [i_9])))));
                            }
                        }
                    }
                    var_23 = (min(var_23, (((((min((arr_11 [i_1]), (arr_11 [i_7])))) != ((~(arr_7 [i_6] [i_1]))))))));
                    var_24 = var_11;
                }
            }
        }
    }
    var_25 = (min(-13362634241000017138, ((min(((5822835820573964109 ? var_6 : var_2)), (!var_11))))));
    var_26 = -var_12;
    #pragma endscop
}
