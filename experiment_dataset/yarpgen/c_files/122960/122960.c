/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 726443108;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((58 ? 12777233553363610194 : 65535)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] = (0 * 38);
                            var_18 = (min(1, ((0 >> (((arr_8 [i_0] [i_1] [5]) + 17510))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
