/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = var_7;
                var_14 = (max(1048575, ((-(max(-1048584, 230))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 ^= (arr_4 [i_0] [i_2] [9]);
                            var_16 = (min((max(16384, 127)), 34));
                            var_17 = (min(-1048564, 123));
                        }
                    }
                }
                arr_9 [i_0] [i_1] [i_1] |= ((+(min((((arr_0 [i_0]) ^ 0)), ((var_1 ? 4294967268 : var_6))))));
                var_18 = (max(var_18, ((min((((-(arr_3 [i_1 + 1])))), (max((arr_3 [i_1 + 1]), (arr_0 [i_1 - 2]))))))));
            }
        }
    }
    var_19 = (max(var_19, var_10));
    var_20 = -159;
    #pragma endscop
}
