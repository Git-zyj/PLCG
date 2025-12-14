/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 |= (((min((max(1, var_11), (!1))))));
                            var_15 ^= (max(((-13 ? 16777215 : (max((arr_11 [i_0] [i_0] [i_1] [i_2] [i_3]), var_4)))), (!var_6)));
                        }
                    }
                }
                var_16 = (max(var_16, ((max((arr_5 [i_0]), (min((arr_9 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_1] [i_1] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
