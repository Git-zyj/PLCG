/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_17 *= ((var_16 ? (((arr_9 [i_2]) ? (max((arr_3 [0] [i_0] [i_0]), (arr_7 [8] [8] [10] [i_2] [10] [8]))) : var_9)) : (arr_6 [i_3 - 1] [i_3 - 1])));
                            var_18 ^= var_5;
                        }
                    }
                }
                var_19 = (min(((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_1]) ? (arr_8 [i_0] [i_0] [i_1] [i_1] [i_1]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((arr_7 [i_1] [i_1] [4] [i_0] [i_0] [i_0]) / (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
            }
        }
    }
    var_20 = (max(var_20, 2878621497));
    var_21 = (max(var_21, var_4));
    #pragma endscop
}
