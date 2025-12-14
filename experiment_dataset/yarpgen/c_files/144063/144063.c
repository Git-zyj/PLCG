/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_11 -= ((var_6 ? 3432447999 : 16733));
                                var_12 ^= (max((((((127 / (arr_6 [i_0] [2] [i_4])))) ? var_3 : (2488905227411832857 & 2003066927))), ((((((0 ? var_9 : 45))) ^ 1071388174988650901)))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] |= ((-(var_9 != 1071388174988650901)));
                            }
                        }
                    }
                }
                arr_16 [i_0 + 3] [i_1] [i_1] |= (max(((min(var_8, var_6))), ((0 ? var_5 : (arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 1])))));
            }
        }
    }
    var_13 |= var_6;
    #pragma endscop
}
