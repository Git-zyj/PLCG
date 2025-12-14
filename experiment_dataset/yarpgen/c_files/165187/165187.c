/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_3] [i_0] [16] = 1;
                            var_19 = -1;
                            var_20 = 1757808536;
                        }
                    }
                }
                arr_9 [16] [i_1] &= -1757808541;
            }
        }
    }
    var_21 ^= ((-((((max(-19962, 1))) - var_17))));
    var_22 = (max(var_22, -19936));
    #pragma endscop
}
