/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (~var_0)));
    var_21 = var_9;
    var_22 = (max(26, ((40158 ? var_1 : (min((-2147483647 - 1), 94))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_1] = (((arr_2 [i_0] [i_1] [i_0]) < 161));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_23 = 152;
                            var_24 = (-2147483647 - 1);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
