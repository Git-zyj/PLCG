/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += 64;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_11 += (arr_4 [i_0]);
                var_12 = (max(var_12, (((~((((arr_0 [i_0] [i_0]) >= (arr_3 [i_1 - 1] [i_1 + 3] [0])))))))));
                arr_5 [12] &= 4169077935751549615;
            }
        }
    }
    var_13 = var_6;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    var_14 ^= ((4169077935751549615 ^ ((((!((((arr_12 [i_2] [i_3 + 4] [i_4 + 2]) ? (arr_12 [i_2] [i_3] [i_3]) : (arr_7 [i_4]))))))))));
                    arr_15 [i_2] [i_3] = (max(((((((arr_12 [i_3 + 1] [i_3 - 1] [i_4 - 1]) + 2147483647)) << (((((arr_12 [i_3 + 1] [i_3 + 4] [i_4 + 3]) + 118)) - 9))))), (((arr_6 [i_2]) | (((var_0 + (arr_8 [i_2]))))))));
                    arr_16 [i_3 - 2] [i_3 - 2] [i_2] = ((arr_11 [i_2] [i_3 + 2]) | (((arr_8 [i_4 - 2]) & (arr_11 [i_2] [i_4]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_23 [i_4] [i_4] |= 8691169402147088367;
                                arr_24 [i_2] [i_3 + 3] [i_4] [i_3 + 3] [i_6] |= ((((((~(arr_9 [i_2] [i_5]))))) ? ((255 ? (arr_8 [i_2]) : -4169077935751549616)) : -var_0));
                                var_15 += var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
