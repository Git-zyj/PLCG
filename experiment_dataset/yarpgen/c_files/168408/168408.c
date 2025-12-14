/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (((arr_6 [20] [i_2 - 1]) && (((arr_6 [i_1] [i_0]) && (arr_6 [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [9] [i_3] [i_2] [i_3] = (min(6224, (852749496 || -1)));
                                var_14 -= (2 < var_13);
                                arr_16 [19] [i_2] [13] [13] [16] = (((((var_1 > (max(-1, var_0))))) ^ (!var_11)));
                            }
                        }
                    }
                    arr_17 [i_2] [i_2] [18] = var_6;
                    var_15 = ((((arr_14 [4] [i_2] [i_2 + 1] [i_2 - 1] [i_2] [9]) && var_13)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 10;i_6 += 1)
        {
            {
                arr_25 [i_5] = (((max(-1, (arr_10 [i_6 - 3] [3]))) != (min((arr_18 [i_6] [i_5]), (arr_18 [i_6 - 2] [i_5])))));
                var_16 = (min(((min(((12 ? (arr_24 [i_5]) : 3)), (arr_12 [i_6 - 4] [i_5] [2] [i_6] [i_6 - 4] [i_6 - 3] [i_6])))), (min((max(1, -8694705931030070661)), ((min(9, var_4)))))));
            }
        }
    }
    #pragma endscop
}
