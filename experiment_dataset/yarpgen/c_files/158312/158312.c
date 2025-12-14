/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((((11 ? 41 : 32753))));
    var_13 = var_4;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = (min((((157105563 == ((1 ? -1 : (-2147483647 - 1)))))), (arr_0 [i_0])));
        var_14 = (((arr_0 [i_0 + 1]) ? -0 : (arr_1 [i_0 - 1])));
        var_15 = (max((arr_1 [i_0 - 1]), 1));
    }
    var_16 = var_9;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_17 = (max(var_17, -72));
        var_18 = var_0;
        var_19 *= ((1 ? (arr_5 [7] [i_1]) : (~-125)));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_20 = var_3;
                    var_21 *= (arr_6 [15]);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                {
                    arr_16 [i_4] [20] = ((53 ? 2747023223 : 2147483647));
                    arr_17 [i_4] [i_5] [i_6] [i_4] = (-76 / 1);
                    var_22 = arr_11 [18];
                    var_23 = (arr_12 [i_4] [20] [i_6]);
                    arr_18 [i_4] = -8172;
                }
            }
        }
        var_24 = (58619 ? -872358339 : 14950);
    }
    #pragma endscop
}
