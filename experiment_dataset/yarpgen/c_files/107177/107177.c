/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1 - 4] [i_2] = ((0 ? 2205288178 : 974974711));
                        arr_11 [i_0] = ((5223 ? var_8 : 5223));
                    }
                    arr_12 [i_0 - 3] [i_0] [i_2] = ((((562072080 ? (arr_9 [i_2 - 2] [i_2] [i_2] [i_2 + 2] [i_2] [i_2]) : var_9))) ? (((arr_9 [i_2 - 3] [i_2] [12] [i_2] [i_2] [i_2 + 2]) ? var_7 : (arr_7 [i_2 - 1] [i_2] [i_2] [i_0]))) : ((54735 ? (arr_6 [i_2 - 1] [i_2 + 1] [i_0] [i_2 + 1]) : (arr_9 [i_2 - 3] [i_2 - 3] [i_2] [i_2 - 2] [i_2 - 2] [i_2]))));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_15 [9] = (4161475023 ? (((79 ? 0 : 5223))) : 3106963216);
        arr_16 [i_4] = ((((var_5 ? 147 : 45728))) ? ((864543991 ? var_1 : var_10)) : ((60313 ? 3991887599 : (arr_14 [i_4]))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = ((((1059867353 ? 5229 : 2096896))) ? ((var_10 ? (arr_19 [i_5] [i_5]) : (arr_19 [i_5] [i_5]))) : (((arr_19 [i_5] [i_5]) ? 5223 : (arr_19 [i_5] [i_5]))));
        arr_21 [i_5] = ((((4294967295 ? var_9 : var_8))) ? ((64 ? (arr_17 [i_5]) : (arr_17 [i_5]))) : ((52822 ? var_0 : var_6)));
    }
    #pragma endscop
}
