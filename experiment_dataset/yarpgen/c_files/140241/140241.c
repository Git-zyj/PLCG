/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((min(1037960693, -867177020)))) ? var_3 : var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = (min(-var_11, (arr_8 [i_0])));
                                arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] = (((((arr_6 [i_4] [i_2] [i_2] [i_3 + 1]) / -1311155732))) ? (min((var_10 / 1311155726), 194)) : var_16);
                                arr_12 [i_2] [i_1] [i_1] [i_1] [i_4] [i_2] [10] = min(((~((var_13 ? (arr_7 [i_0] [i_1] [7] [i_2 - 2] [i_3 - 2] [i_4]) : -1037960693)))), var_7);
                                var_19 ^= arr_10 [i_0];
                                var_20 = ((!(arr_5 [i_2] [i_3 - 2] [i_2 + 3])));
                            }
                        }
                    }
                    var_21 |= (min(((min(var_9, (arr_5 [0] [i_1] [i_2])))), (arr_6 [i_2 - 3] [12] [i_2 + 1] [i_2 + 3])));
                    var_22 = (9123 ? ((max((arr_6 [i_0] [i_2] [i_2] [i_1]), (min(183, (arr_3 [i_0] [i_2 - 2] [i_2 - 2])))))) : ((((15 ? (arr_2 [i_0]) : 111)) / ((min(16, 56))))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_1] [i_2 - 3] [i_5] [i_2] = var_5;
                                arr_19 [i_2] = 11110;
                                var_23 = ((~var_6) ? (min(((11128 ? 1197043919 : var_3)), (var_6 * -1))) : (((((1197043919 ? -1995356535 : -1782773833))) ? -1848702444 : ((58780 ? -1 : -1311155749)))));
                                var_24 = ((((-555498640 ? -1261216401 : 205))) ? ((-1197043919 ? var_5 : (arr_2 [i_1]))) : ((~(arr_17 [i_1]))));
                                arr_20 [i_2] [i_2 + 1] [5] [i_2 - 3] [i_2] = ((min((~32768), ((~(arr_13 [i_0] [11] [2] [i_0] [i_0]))))) / (-1197043919 / 40));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
