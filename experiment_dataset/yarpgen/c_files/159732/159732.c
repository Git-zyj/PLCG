/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 = (max(var_20, (arr_0 [i_0] [i_1])));
            var_21 = arr_0 [i_0] [i_1];
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_6 [i_0] [i_0] [i_2] = var_9;
            arr_7 [i_0] [i_2] &= (723116835 <= var_0);
            var_22 *= (((arr_2 [i_0] [i_0]) / (arr_2 [i_2] [i_2])));
        }
        var_23 *= (arr_5 [i_0]);
        var_24 = ((((((arr_4 [i_0] [i_0] [i_0]) + (arr_3 [8])))) ? 3571850484 : (arr_4 [i_0] [i_0] [i_0])));
        var_25 = (((((arr_5 [i_0]) ? var_11 : (arr_4 [i_0] [i_0] [i_0])))) ? (var_2 % -21440) : ((var_6 ? (arr_0 [i_0] [0]) : var_10)));
        var_26 &= (((0 || -6794) ? 2147483621 : var_14));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_3] [i_3] [i_3] = var_5;
                    arr_18 [16] [i_4] [i_4] |= (arr_4 [i_5 + 1] [i_4] [i_3]);
                }
            }
        }
        arr_19 [i_3] = arr_8 [i_3];
        var_27 |= 7;
    }
    var_28 = var_14;
    var_29 = var_16;
    var_30 = ((((min(var_15, var_4))) ? var_11 : var_9));
    var_31 &= var_3;
    #pragma endscop
}
