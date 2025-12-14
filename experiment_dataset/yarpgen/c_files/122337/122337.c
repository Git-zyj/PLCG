/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += 2303703246;
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = (~683725774);
                var_21 = (max((((-1991264081 ? -1991264081 : (arr_0 [i_0 - 1])))), (((((arr_1 [i_0 - 1] [i_1]) ? 24 : var_13)) % (arr_2 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_3 - 1] [12] [i_3 + 2] &= (arr_7 [i_0 - 1] [i_1] [1]);
                            arr_13 [0] [i_2] [i_2] [0] = (arr_9 [i_0] [i_1] [i_2] [i_1] [i_3]);
                            arr_14 [i_0 + 1] [i_2] = ((((((~(arr_8 [i_0 + 1] [i_0 + 1] [i_3 - 1]))) + 2147483647)) << (((((arr_1 [i_3 + 2] [i_0 + 1]) ? var_11 : ((var_15 ? var_0 : 1991264073)))) - 143))));
                        }
                    }
                }
                arr_15 [i_0 + 1] [i_0] = (arr_6 [i_0] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
