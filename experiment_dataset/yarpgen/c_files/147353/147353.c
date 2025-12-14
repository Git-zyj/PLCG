/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (((((~var_9) ? (arr_1 [i_0]) : (((arr_2 [i_1] [i_1]) ? (arr_3 [i_1]) : 2483343529)))) * ((((!(arr_4 [i_1])))))));
                arr_5 [i_1] = var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 18;i_4 += 1)
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_3] [3] = arr_14 [11] [i_1] [13] [i_3] [i_1];
                                var_13 = (((arr_10 [i_0] [i_1] [8] [i_2] [i_3] [i_3]) || (((arr_10 [i_4 - 3] [i_1] [i_4] [i_4] [17] [i_4 - 2]) || ((((arr_9 [i_0] [i_4 - 2]) ? (arr_10 [i_0] [i_1] [i_4 - 1] [i_1] [i_1] [i_1]) : var_0)))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                var_14 *= (((arr_3 [i_5]) == (arr_3 [i_5])));
                                arr_21 [6] [i_1] [i_2] [i_3] [i_1] = var_3;
                            }
                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                var_15 = ((+(((arr_9 [17] [17]) ? (arr_19 [i_6] [i_6] [i_6] [i_3]) : (arr_8 [3] [0] [14] [14])))));
                                var_16 -= ((((~(((arr_23 [i_3] [i_6] [i_6]) ? var_0 : (arr_18 [i_6] [i_0] [i_2] [i_0]))))) * (arr_1 [i_0])));
                            }
                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                arr_26 [i_0] [i_0] [i_2] [i_3] [i_1] = ((((arr_15 [i_0] [i_0] [i_0] [i_7] [i_7]) ? (arr_3 [i_1]) : 1)));
                                var_17 ^= ((((((((arr_16 [i_7] [i_2] [i_1] [8]) ? (arr_18 [i_0] [i_1] [i_2] [i_2]) : (arr_13 [i_7] [12] [i_0] [12] [i_0])))) ? 5 : ((-(arr_23 [i_2] [8] [i_7]))))) % -244));
                                var_18 = ((!((((((15647219512995893553 ? (arr_23 [i_3] [i_1] [i_0]) : var_1))) ? var_5 : (((1749915655 <= (arr_1 [i_7])))))))));
                            }
                            var_19 = ((((2799524560713658063 || -68) | ((1 / (arr_16 [14] [14] [18] [i_3]))))));
                            var_20 = (~((+(min((arr_19 [i_3] [i_1] [i_3] [i_3]), (arr_22 [i_2] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    var_21 = 18446744073709551615;
    #pragma endscop
}
