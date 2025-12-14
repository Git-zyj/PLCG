/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((((arr_2 [i_1]) ? (((max(145, (arr_1 [i_0] [i_1]))))) : (5797667446829424482 & 64)))))));
                var_21 ^= arr_3 [i_1];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_22 = (((~(((arr_3 [i_2]) ? (arr_10 [i_2] [2]) : var_0)))));

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_14 [1] [i_4] [2] = 0;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_23 = 30720;
                                arr_20 [i_4] [i_3] [0] [i_6] = (arr_7 [i_3]);
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_4] [i_2] = 8846591066457816951;
                            }
                        }
                    }
                }
                arr_22 [16] = ((((var_7 ? (arr_19 [i_2] [6] [i_3]) : (arr_2 [i_3]))) > (arr_19 [i_2] [i_2] [10])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            {
                arr_27 [9] = (((max(var_11, 45741836))));
                var_24 = -var_5;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            {
                arr_33 [i_9] = ((-5797667446829424497 ? 8547536919584193019 : 30720));
                arr_34 [i_9] [11] [i_10] = 1;
            }
        }
    }
    #pragma endscop
}
