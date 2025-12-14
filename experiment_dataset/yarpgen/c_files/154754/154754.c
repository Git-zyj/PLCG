/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (211 / var_7);
    var_11 = (max(var_11, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = (arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [11] [i_1] [i_2] [11] [i_4] [i_4] = ((+(((157 / 657682777) + (((arr_6 [i_0] [i_1] [i_0]) / var_0))))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = ((((arr_10 [i_0] [14] [i_3 + 1] [14]) ? var_3 : (arr_10 [i_2] [i_4] [i_3 - 1] [i_3]))));
                                var_13 = ((arr_3 [i_0]) <= (((!(arr_5 [1] [1] [1] [1])))));
                            }
                        }
                    }
                    var_14 = (arr_0 [i_2]);
                    var_15 ^= 22714;
                    var_16 += 14286199880089123345;
                }
            }
        }
    }
    var_17 = var_1;
    var_18 = (((((var_6 ^ var_5) ? -var_8 : var_2))) ? var_1 : var_4);
    #pragma endscop
}
