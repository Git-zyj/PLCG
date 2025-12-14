/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((max(((((var_13 ? var_4 : 3752083514)) ^ 3752083501)), (min(3752083501, var_2)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((-(((((542883783 ? 0 : 542883789)) != 161)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 -= var_4;
                                arr_16 [8] [i_1] [i_1] [8] [i_4] = (min(-9223372036854775797, 9223372036854775797));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] [4] = (44 > -3752083514);
                }
            }
        }
    }
    var_16 = var_12;
    #pragma endscop
}
