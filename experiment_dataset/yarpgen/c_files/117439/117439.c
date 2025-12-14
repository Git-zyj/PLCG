/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 = 1;
                    arr_7 [10] [i_0 + 1] [2] |= (max(var_10, (arr_3 [i_0 + 2] [2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 = (i_1 % 2 == 0) ? (((((((((arr_9 [i_0] [12] [i_0] [i_1]) << 1)) / var_7))) <= ((-(arr_12 [i_0 - 2] [i_1 - 2] [i_2] [i_2] [i_1 - 2] [i_4 + 1])))))) : (((((((((((arr_9 [i_0] [12] [i_0] [i_1]) + 2147483647)) << (1 - 1))) / var_7))) <= ((-(arr_12 [i_0 - 2] [i_1 - 2] [i_2] [i_2] [i_1 - 2] [i_4 + 1]))))));
                                arr_15 [i_0] [10] [i_0] [i_3] [i_1] [1] [i_4] = (min((((arr_5 [i_1 + 1] [i_1] [i_0 + 2]) ? (arr_5 [i_1 - 3] [i_1] [i_1]) : (arr_5 [i_1 + 1] [i_1] [i_0]))), (((arr_5 [i_1 - 4] [i_1] [i_1 - 1]) % (arr_5 [i_1 + 1] [i_1] [i_0 + 3])))));
                                arr_16 [i_0 + 2] [7] [i_1] [i_2] [i_1] [i_4] [i_4] = arr_2 [i_0];
                                var_13 = (min(var_13, var_9));
                            }
                        }
                    }
                    arr_17 [1] [i_1] [1] = var_8;
                    var_14 = (((+-1) % 255));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            {
                var_15 = (arr_21 [i_5]);
                var_16 = (max(var_16, (((((var_2 ? var_9 : (arr_21 [i_5 + 3])))) ? (arr_21 [i_5 + 3]) : (arr_21 [i_5 + 1])))));
            }
        }
    }
    var_17 = (max(-var_8, ((-(min(var_4, var_0))))));
    #pragma endscop
}
