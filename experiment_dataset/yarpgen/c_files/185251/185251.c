/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -610291250542312323;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (arr_5 [i_0] [i_1] [i_0]);
                    var_20 = (i_0 % 2 == zero) ? (((((7196 <= ((var_1 ? var_15 : 34)))) || (((78 | (((((arr_5 [i_0] [i_1] [i_0]) + 2147483647)) << (1 - 1))))))))) : (((((7196 <= ((var_1 ? var_15 : 34)))) || (((78 | (((((((arr_5 [i_0] [i_1] [i_0]) - 2147483647)) + 2147483647)) << (1 - 1)))))))));
                    arr_10 [i_1] [i_2] [i_0] [4] = arr_5 [i_0] [i_1] [i_0];
                    arr_11 [10] [i_0] = -18;
                }
            }
        }
    }
    var_21 = 5846510888695594710;
    var_22 = var_16;
    #pragma endscop
}
