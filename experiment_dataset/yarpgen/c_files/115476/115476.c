/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [1] &= ((124 != ((-(((arr_5 [1] [1] [i_2 - 3]) ? var_0 : 65529))))));
                            arr_12 [0] &= (((((var_10 == (((65514 ? 6 : 9)))))) + ((var_0 - (((arr_6 [6] [i_2] [i_1] [6]) - var_8))))));
                            arr_13 [i_1] [i_1] [i_2] = ((-11749 ? (arr_4 [i_0]) : var_10));
                            arr_14 [i_0] [i_2 + 1] [i_0] [2] [i_0] [i_3] = (arr_5 [14] [i_1] [i_3 + 1]);
                        }
                    }
                }
                arr_15 [5] = var_13;
                arr_16 [i_1] [i_0] [i_1] = ((61 ? 3580159141211823420 : 1));
                arr_17 [i_0] = var_4;
                arr_18 [12] [3] [3] = ((var_4 ? ((6424905906242378153 << (30605 - 30605))) : ((((arr_1 [i_0]) ^ var_11)))));
            }
        }
    }
    var_17 = ((var_7 ? ((((var_3 && 24) != ((min(var_9, var_11)))))) : (((5211004317137439202 <= var_8) ^ var_4))));
    var_18 = var_9;
    #pragma endscop
}
