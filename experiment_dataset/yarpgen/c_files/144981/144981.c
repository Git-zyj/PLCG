/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((!((min((max(-1, 15331258705572690770)), (138 || 0))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_14 = ((((((((arr_0 [16]) || (arr_5 [18] [2] [i_3 + 1])))) & (((arr_5 [i_2 - 1] [6] [i_2 + 2]) * (arr_10 [i_0] [i_1] [16]))))) % (((arr_1 [i_3 - 1] [i_2 + 1]) | (arr_1 [i_3 + 1] [i_2 - 1])))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_15 &= (min((arr_5 [8] [5] [i_1]), ((((((arr_1 [i_4] [4]) ? (arr_10 [12] [i_1] [i_1]) : (arr_7 [i_3] [i_2])))) || ((max(var_12, -1)))))));
                                var_16 = (((arr_8 [10] [12] [i_2 + 2]) / (((-var_2 ? (var_2 + var_10) : -6731)))));
                                var_17 = (((1 | 8128) * (arr_9 [4] [1] [i_4] [1] [7])));
                                var_18 = (((min((((2147483647 | (arr_4 [i_0] [18])))), (~var_8))) >> (((arr_10 [i_1] [7] [i_4]) - 1810180552))));
                            }
                            arr_13 [19] [i_3 - 1] [i_3] [i_1] [i_0] = ((+(max((0 - var_9), ((-1 ^ (arr_1 [i_2] [11])))))));
                            arr_14 [i_0] [18] [i_3] [6] [8] [i_0] = -2147483647;
                            var_19 = ((-(arr_1 [i_0] [i_1])));
                        }
                    }
                }
                arr_15 [i_0] = (((max((((arr_5 [i_0] [19] [i_0]) % (arr_9 [11] [7] [14] [18] [i_1]))), ((1 ? var_10 : var_10)))) == ((max(-8129, 15)))));
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
