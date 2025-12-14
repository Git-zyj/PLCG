/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] &= (~-778470934);
                arr_7 [i_0] [i_0 + 2] [i_0 + 2] = var_8;
                var_14 = -1281915292;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_3] = (arr_9 [i_2]);
                var_15 = ((~((~(arr_10 [i_2])))));
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_3] [i_3] = (~var_8);
                                arr_22 [15] [i_3] [i_4] [i_4 - 3] [i_4] [i_4 - 2] = (arr_8 [i_2]);
                                var_16 = 4539628424389459968;
                                arr_23 [18] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = 4539628424389459969;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (!var_10);
    var_18 = var_6;
    #pragma endscop
}
