/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (((arr_3 [i_1 - 3] [i_0]) ? ((max((arr_3 [i_1 - 1] [i_0]), 44179))) : ((0 ? (arr_3 [i_1 - 2] [i_0]) : 6373))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((20348 ? 49663 : 218)) ? ((10741840766976134540 ? 68 : (arr_6 [i_0] [i_0] [i_0] [i_0]))) : ((~(arr_3 [i_0] [i_0])))))));
                            arr_11 [i_0] [i_0] [i_2] [i_0] = ((1 / (max(65532, (((arr_8 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0]) ? 10594 : 34754))))));
                        }
                    }
                }
                arr_12 [i_0] = 1;
                arr_13 [i_0] = ((+(((arr_3 [i_0] [i_0]) << 0))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                {
                    var_15 = (max((max((arr_5 [i_4] [i_4] [i_6]), 37612)), ((((31197 | (arr_6 [i_4] [i_4] [i_6] [i_4])))))));
                    var_16 = min(((2366438472682535195 ? 18119335446283590731 : -2)), -39025);
                    var_17 = (max(var_17, ((-(((arr_19 [i_6] [i_5] [i_4]) + ((54715 ? 40186 : (arr_9 [i_4])))))))));
                    var_18 = (max(var_18, (((-(((65535 || ((((arr_18 [i_4] [i_4]) ? 64792 : (arr_1 [i_4]))))))))))));
                }
            }
        }
    }
    var_19 = (min(var_19, -24476));
    var_20 = (-(((((var_1 ? var_1 : 5120762014477592397))) ? var_3 : ((var_8 ? var_12 : var_13)))));
    #pragma endscop
}
