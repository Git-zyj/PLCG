/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = arr_2 [11];
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_12 = var_2;
                            arr_11 [i_1] [i_3 + 3] = var_8;
                        }
                    }
                }
                var_13 = (max(var_13, var_2));
            }
        }
    }
    #pragma endscop
}
