/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((1 ? -1 : (((49517 & 1) & ((var_7 ? var_6 : -73))))));
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_2] [i_0] [i_2] = min((arr_0 [i_0] [i_0]), ((max(var_0, (min(1, (arr_4 [i_0])))))));
                            var_16 = (arr_0 [i_3 - 1] [i_3]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((max((arr_14 [i_0 - 3] [i_1] [i_0 - 3] [i_5] [i_6] [i_0 - 4]), -31508)), ((max(-2, 255)))));
                                var_17 = (max(1, (min((var_10 & 132), 127))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
