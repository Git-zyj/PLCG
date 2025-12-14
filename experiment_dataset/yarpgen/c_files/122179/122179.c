/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((var_14 ? var_14 : var_6))));
    var_18 = (max(var_18, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [8] = (max(((((arr_2 [i_1] [i_1] [i_0]) != (((1 ? 3848150597 : 4125204606)))))), (((arr_4 [i_0] [i_0] [i_0]) ? ((var_7 ? 1 : var_13)) : (arr_3 [i_0] [i_1] [15])))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 = ((!(((1162274848 ? (arr_10 [i_2 - 3]) : var_4)))));
                            arr_11 [i_0] [i_1] [i_2] [i_0] = (min((arr_7 [i_0] [i_0] [i_0] [8]), (((-1162274836 / -3) ? ((max(var_12, var_1))) : var_0))));
                            var_20 = var_13;
                            arr_12 [i_0] [i_1] [i_2] [i_0] = (((((((var_3 ? var_4 : var_8)) | (arr_6 [i_3 - 1] [i_3 - 1] [i_3] [i_0])))) ? (arr_0 [i_0] [i_0]) : (((((~(arr_7 [i_0] [14] [i_2] [i_3 - 2])))) ? (((arr_9 [i_3] [i_0] [i_0]) ? var_3 : 4095)) : (arr_7 [i_0] [i_1] [i_3 - 1] [i_3 - 1])))));
                        }
                    }
                }
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}
