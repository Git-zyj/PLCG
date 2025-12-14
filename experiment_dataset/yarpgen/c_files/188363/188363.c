/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = ((+(((arr_5 [i_1 - 1] [i_1 + 1] [i_0 + 1] [9]) ? (arr_5 [i_1 + 1] [i_0] [i_0 + 1] [i_0 - 1]) : (arr_5 [i_1 - 1] [i_1] [i_0 - 1] [i_0 - 1])))));
                    var_19 = (((~(arr_2 [i_1 - 2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (arr_11 [0] [i_3] [i_2] [i_2] [i_1] [i_0] [0])));
                                var_21 = (arr_2 [i_2 - 1]);
                            }
                        }
                    }
                    var_22 = (arr_12 [5] [15] [i_1] [15] [i_0 + 1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            {
                arr_18 [15] = (((arr_15 [i_6 + 3] [i_6 + 1] [i_6 + 1]) ? (((arr_17 [i_6 + 1] [i_6 + 4]) ? 759221604 : 32)) : (arr_15 [i_6 + 4] [i_6 - 2] [i_6 + 4])));
                var_23 = (max(var_23, 44521));
            }
        }
    }
    #pragma endscop
}
