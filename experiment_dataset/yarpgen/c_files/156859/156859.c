/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (~195);
                var_14 = (max(var_14, (~-var_12)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [1] [1] [5] [9] [9] [i_0] [1] = min(1, 25346);
                                var_15 = ((-1 | (min((-2147483647 - 1), ((29 ? var_0 : var_9))))));
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_4] [1] [i_4] = (((~var_0) ? 6 : var_10));
                                arr_16 [i_0] [i_0] = -1;
                                var_16 = ((-(arr_3 [4] [i_0] [i_3])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_7 + 1] [1] [0] [i_5] [i_1] [i_0] = var_1;
                                arr_25 [i_0] [i_0] [i_0] [i_0] = 206;
                                var_17 = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 += var_3;
    #pragma endscop
}
