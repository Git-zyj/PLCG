/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (-9223372036854775807 - 1)));
    var_14 ^= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, -3642));
                            var_16 = (max(var_16, (arr_6 [i_0] [i_0])));
                            var_17 = (max(var_17, (((min(var_7, (arr_7 [i_3])))))));
                        }
                    }
                }
                var_18 = (max(var_18, (arr_9 [i_0])));
            }
        }
    }
    #pragma endscop
}
