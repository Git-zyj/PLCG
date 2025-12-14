/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((max(var_11, ((-5788 ? var_1 : var_8))))), (min(2036469987, var_11))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0 + 1] [i_0] = ((1803 ? (arr_1 [i_0 + 1]) : 79));
                        var_14 += (((arr_7 [i_1] [i_1 + 2] [13] [i_1]) ? (arr_1 [i_0 + 1]) : (arr_10 [7] [i_3 + 4] [i_1 - 2] [i_0] [i_0])));
                        var_15 += ((var_4 ? (arr_1 [i_0]) : var_8));
                        var_16 = ((var_7 ? var_11 : (arr_5 [i_0 + 1] [i_0 - 1] [i_0])));
                        var_17 |= (arr_8 [i_2] [i_1] [i_3 + 4] [i_1 - 3]);
                    }
                }
            }
        }
        var_18 &= (arr_2 [i_0 - 1]);
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_19 ^= var_8;
        var_20 += (arr_13 [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_21 = 17640084803561094435;
                    var_22 = ((((min((arr_17 [i_5] [i_5] [i_5]), (arr_17 [i_4] [i_4] [i_4])))) ? 1 : (arr_16 [i_4] [i_4] [i_4])));
                    var_23 = var_3;
                }
            }
        }
        var_24 += 0;
    }
    var_25 = var_2;
    var_26 += ((min(var_2, (min(var_12, var_6)))));
    #pragma endscop
}
