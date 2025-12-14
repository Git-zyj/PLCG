/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [4] [i_0] = (((arr_4 [i_0 - 2] [i_0 - 1] [i_0 - 2]) / var_6));
                var_16 = (max(var_16, (((~((~(arr_5 [0] [i_1] [i_0 + 2]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_17 = (((arr_5 [i_0] [5] [6]) ? ((1 ? var_6 : 1)) : (1348702813 & var_5)));
                    var_18 += (1 && 105);
                    var_19 = 32767;
                }

                /* vectorizable */
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    arr_11 [2] = (arr_10 [i_3 - 2] [1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_20 += ((-(arr_10 [i_0 - 2] [i_0 - 2] [i_0 + 2])));
                                var_21 += var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_2;
    var_23 |= var_9;
    #pragma endscop
}
