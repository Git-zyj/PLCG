/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_13 = 7680;
                            var_14 = (min(var_14, 1));
                        }
                    }
                }
                var_15 = 9697167389669334521;
            }
        }
    }
    var_16 = var_9;
    var_17 = (max(var_17, var_12));
    var_18 = var_3;
    #pragma endscop
}
