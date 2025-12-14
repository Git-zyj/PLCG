/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = max(1, 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min(268304384, 4026662931));
                var_12 = (min(var_12, (arr_1 [i_0])));
            }
        }
    }
    var_13 = (max(268304382, var_3));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_14 = (min(var_14, (((((((arr_5 [i_2] [21]) + 21)) + 268304365)) > (arr_6 [i_2])))));
                arr_12 [4] [i_2] [14] = (min((((4026662930 < (1 != 3123226100)))), (~1059545530)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_15 &= (((var_6 - var_4) > (arr_5 [i_3] [i_5])));
                            var_16 ^= var_5;
                        }
                    }
                }
                var_17 ^= arr_10 [9];
            }
        }
    }
    #pragma endscop
}
