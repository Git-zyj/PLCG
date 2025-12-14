/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= 0;
    var_21 = var_5;
    var_22 = ((-(!1645550302)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_23 -= var_19;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] = ((!((min(35, 1)))));
                                var_24 = ((-(min(var_12, var_3))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
