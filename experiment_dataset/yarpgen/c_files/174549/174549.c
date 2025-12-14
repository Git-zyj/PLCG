/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [4] [8] [i_2 - 4] [4] [i_0 - 1] = (arr_5 [i_0 + 1] [2] [i_2 - 4] [i_3 - 1]);
                                arr_13 [i_0] [i_1] [i_3] [i_4] = (min(3544419535879712439, (((35182224605184 ? 152 : 1)))));
                                var_14 ^= ((((15 & 24242) || ((((((arr_7 [6] [10]) + 2147483647)) >> (var_0 - 30831)))))) ? (~1) : -104);
                                var_15 = (max((arr_1 [i_0 + 1]), (!255)));
                                arr_14 [i_3] = (~((~(arr_4 [i_2 + 1] [1] [i_3 + 1]))));
                            }
                        }
                    }
                }
                var_16 -= (((arr_0 [i_0 + 1]) & -15544642462424539633));
                var_17 = (((((arr_2 [i_0 + 1] [i_0 - 1] [0]) & (arr_2 [1] [i_0 + 1] [1]))) >= (-1192803135 - var_2)));
                var_18 = 24247;
                arr_15 [9] |= (min((~10), (!47)));
            }
        }
    }
    var_19 = var_7;
    var_20 = (min(((var_13 ? var_2 : ((max(41, var_2))))), var_7));
    #pragma endscop
}
