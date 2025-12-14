/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [0] [i_0] [i_2 - 3] [i_2] = (((min(0, var_1)) + ((min(0, 0)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((max(var_1, (min((max(var_8, var_3)), ((max(var_14, -1))))))))));
                                var_18 = (((1 <= var_9) == var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
