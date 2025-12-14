/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = 2147481600;
                    var_17 = ((max(var_13, var_4)));
                    arr_7 [i_0] [i_0] [14] [6] |= (5647 >= 11495);
                }
            }
        }
    }
    var_18 = 6783;
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    arr_18 [0] [i_3] [i_5] = 5658;
                    var_19 = (min(var_19, ((((var_10 / var_15) && (!-83))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_20 = ((((((var_6 || (arr_17 [i_3 + 1] [i_6] [i_7 + 2]))))) > (max(((max(var_13, 82))), (min(1802609834, 4019545177393315002))))));
                                arr_23 [i_3 - 1] [i_3] [i_3] [i_3] [2] [1] = (5658 ^ 180);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (28504 + 84);
    #pragma endscop
}
