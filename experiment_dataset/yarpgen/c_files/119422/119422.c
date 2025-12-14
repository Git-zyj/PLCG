/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((-977400345 ? (arr_2 [i_1]) : (arr_2 [i_0])));
                    var_14 = (((((((6 ? 977400345 : 255))) ? (~1) : (arr_2 [i_2 - 1]))) ^ ((-977400345 & (arr_1 [i_0] [i_2 - 1])))));
                    arr_11 [22] [i_1] [i_1] [i_2] = 3870222484;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_15 = var_4;
            arr_20 [16] [i_4] [i_4] = var_5;
        }
        arr_21 [i_3] = (min((((arr_12 [i_3]) ? var_5 : (arr_8 [i_3] [i_3]))), (var_5 == 1)));
        var_16 = (arr_16 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                {
                    var_17 -= (((((((var_4 ? (arr_13 [i_5] [i_5]) : var_11))) ? (arr_15 [i_6 + 1]) : -32767)) | (arr_24 [i_3] [i_5] [i_3])));
                    arr_29 [i_3] [2] [12] = (((32756 == 30271) % (2143568138290372470 || 1)));
                    var_18 = ((3870222483 ? (((((arr_8 [i_6 + 3] [i_6 + 2]) == (((arr_2 [i_6 + 3]) - var_5)))))) : (((32756 ? 56 : 25622)))));
                    arr_30 [i_3] |= 56;
                }
            }
        }
        var_19 = (arr_0 [21] [i_3]);
    }
    var_20 = (max(var_12, var_3));
    var_21 = (((var_10 ? 63 : ((var_1 ? var_11 : -13251)))));
    var_22 = ((0 ? ((3870222483 ? (var_2 || var_6) : var_0)) : (((18270092395639406261 < (var_3 == var_1))))));
    #pragma endscop
}
