/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((var_9 % (max((max(9223372036854775807, var_13)), ((var_6 ? var_1 : var_6))))))));
    var_17 = (var_6 + 8064);
    var_18 &= (-32767 - 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = var_15;
                                var_20 = (arr_3 [i_1] [i_3] [4]);
                                var_21 |= (max((((-((-(-32767 - 1)))))), var_13));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_22 = (arr_15 [i_5] [i_5]);
                                var_23 = (max(var_23, var_7));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
