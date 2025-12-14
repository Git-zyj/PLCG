/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_0 ? ((-((var_5 ? var_2 : var_7)))) : ((~(65504 | 338361316)))));
    var_11 |= ((var_3 >> (((var_9 * var_5) - 5428485))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_1] [2] |= var_5;
                    arr_8 [i_0] [i_1] [18] |= var_9;
                    arr_9 [i_0] [i_1] [i_0] = 65506;
                }
            }
        }
    }
    var_12 = (min(var_12, ((((0 > 12) != ((((65486 >= var_5) == -193031716))))))));
    #pragma endscop
}
