/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_10 = (max(var_10, 8388608));

            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                var_11 = var_3;
                var_12 = (max(var_12, (arr_1 [5])));
            }
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_13 = ((0 ? 63 : 0));
                var_14 = (((arr_7 [i_1 + 1] [i_3] [i_3] [i_1]) ? (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]) : 252));
            }
            var_15 = 6;
        }
        var_16 = 6;
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            {
                var_17 = ((((-482180827 > (~24363))) ? (482180827 + -482180827) : (arr_10 [i_4])));
                arr_14 [6] = var_3;
            }
        }
    }
    #pragma endscop
}
