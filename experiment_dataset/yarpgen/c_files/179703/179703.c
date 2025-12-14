/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_11 = var_5;
                            var_12 -= (!-var_3);
                            var_13 += (~var_7);

                            for (int i_4 = 3; i_4 < 12;i_4 += 1)
                            {
                                var_14 = ((~(((!(!var_9))))));
                                var_15 = var_4;
                                var_16 -= ((~(507078624 * 4216)));
                                arr_13 [2] [i_0] [2] = (((var_4 - var_10) >= var_9));
                            }
                        }
                    }
                }
                arr_14 [i_0] = (((0 > 61290) << (var_3 - 62605)));
            }
        }
    }
    var_17 -= var_1;
    var_18 = var_4;
    #pragma endscop
}
