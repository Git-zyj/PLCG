/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    arr_10 [7] [i_1 - 2] [i_1] = -118872056769556664;
                    var_10 = (arr_6 [i_1] [i_1]);
                    arr_11 [i_0] [i_1 + 1] [i_1] = (arr_2 [i_1]);
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_14 [12] [i_0 - 1] [i_0] [i_0] |= (min((arr_2 [i_0]), (arr_7 [i_3] [i_1] [i_1])));
                    arr_15 [i_1] [i_0] [i_0] [i_1] = (i_1 % 2 == zero) ? (max(((((max((arr_4 [i_0] [i_1] [i_0 + 1]), (arr_3 [i_1 - 1] [2])))) ? (((max(-5733, (arr_0 [i_0] [i_0]))))) : (((arr_2 [i_0]) ? -5737 : -118872056769556653)))), ((min(((max((arr_8 [i_0 + 1] [i_3] [i_1]), (arr_6 [i_1] [i_1])))), ((5733 >> (((arr_4 [i_3] [i_1] [i_0]) - 2466236553497260951))))))))) : (max(((((max((arr_4 [i_0] [i_1] [i_0 + 1]), (arr_3 [i_1 - 1] [2])))) ? (((max(-5733, (arr_0 [i_0] [i_0]))))) : (((arr_2 [i_0]) ? -5737 : -118872056769556653)))), ((min(((max((arr_8 [i_0 + 1] [i_3] [i_1]), (arr_6 [i_1] [i_1])))), ((5733 >> (((((arr_4 [i_3] [i_1] [i_0]) - 2466236553497260951)) - 14301570893901085229)))))))));
                    var_11 = (min((((~(min(127, 520430893))))), (((~4088355047) ? -5733 : (((arr_3 [i_1] [i_1]) + (arr_9 [i_0] [i_1] [i_3])))))));

                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        arr_19 [i_1] [3] = (arr_13 [i_0] [i_0 - 1] [i_0 + 1]);
                        var_12 = ((-(((arr_13 [i_0 + 1] [i_1] [i_4 - 3]) * (arr_13 [i_0 + 1] [i_0 + 1] [i_0])))));
                        var_13 = (((((~((((arr_7 [i_1] [i_1] [7]) <= (arr_2 [i_1]))))))) ? 123 : (min(118872056769556653, 5757))));
                        var_14 = (((~1) ? ((max(((((arr_8 [i_0] [i_0] [i_1]) ? (arr_1 [i_0]) : (arr_7 [i_4 + 1] [i_3] [i_1])))), (arr_2 [i_0 + 1])))) : (min((arr_0 [i_0 + 1] [i_1 + 1]), 8664905975345914675))));
                    }
                    var_15 |= (arr_1 [0]);
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_16 = (((arr_7 [i_1 - 1] [i_1] [i_1 + 1]) ? (((arr_23 [i_0 - 1] [i_1 + 1] [i_1] [i_0 + 1]) ? (arr_23 [i_0] [i_1 - 2] [i_1] [i_0 - 1]) : (arr_23 [i_0] [i_1 - 2] [i_1] [i_0 - 1]))) : ((~(arr_21 [i_1])))));
                            arr_25 [i_0 - 1] [i_1] [i_0] [i_0] = arr_8 [i_1] [i_5] [i_1];
                        }
                    }
                }
            }
        }
    }
    var_17 = ((~(var_2 >= 1)));
    #pragma endscop
}
