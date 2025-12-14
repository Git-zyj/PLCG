/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= 85;
        arr_3 [i_0] = var_9;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_16 = (max(((-((var_4 ? -101 : 24092)))), var_6));
                            var_17 = ((97 ? 0 : 0));
                            var_18 = (max(var_12, -var_10));
                            var_19 = -294170037348575477;
                        }
                    }
                }
                var_20 = (max(((max((-98 & var_9), var_6))), ((~(~var_13)))));
            }
        }
    }
    #pragma endscop
}
