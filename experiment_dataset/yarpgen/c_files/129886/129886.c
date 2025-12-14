/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 2] = ((-(max(((min(21487, 104))), (max(var_12, var_9))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 -= var_6;
                                var_15 ^= (max(((max(64, var_2))), 240));
                                var_16 = (((arr_12 [2] [i_1] [i_2] [i_3] [i_3]) && var_0));
                                var_17 = (240 >= 200);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_0;
    var_19 |= var_6;
    var_20 = (min(-2373125103998238652, ((max(62049, 33)))));
    #pragma endscop
}
