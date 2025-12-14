/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 += (-32767 - 1);
                            var_15 = 72057594037927872;
                            var_16 = 520093696;
                        }
                    }
                }
                var_17 = 520093696;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_18 = -520093696;
                                arr_21 [0] [i_1 + 1] [i_6] |= -9223372036854775796;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_4;
    var_20 = var_9;
    var_21 = var_12;
    #pragma endscop
}
