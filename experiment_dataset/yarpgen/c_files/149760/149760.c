/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_2;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_2] = ((-((-(arr_2 [i_0] [i_3 + 2] [i_0])))));
                            arr_13 [i_0] = ((((((arr_9 [i_3 - 1] [i_3 + 3] [i_3 - 1] [i_3 - 1] [i_3 + 3]) ? var_7 : var_2))) ? ((((arr_11 [i_0] [5] [i_2] [i_3 + 3]) < var_13))) : ((((arr_11 [i_1] [i_3 + 1] [i_1] [i_1]) ? var_11 : (arr_6 [i_3 + 3] [i_3 + 3] [i_3 + 1]))))));
                            arr_14 [12] [i_0] [2] [i_3] = ((var_5 + ((((min((arr_8 [i_2]), var_1)))))));
                        }
                    }
                }
            }
        }
    }
    var_16 = ((~((var_12 ^ (max(var_10, var_2))))));
    var_17 ^= var_8;
    #pragma endscop
}
