/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((((max(var_10, ((var_6 ? var_8 : (arr_6 [i_1] [i_1] [i_1] [i_1] [i_2])))))) / (min(196608, (-32767 - 1))))))));
                            var_17 = (max(var_17, (-32767 - 1)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_18 = 522029150;
                                var_19 = (min(var_19, (((~(!-32744))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
