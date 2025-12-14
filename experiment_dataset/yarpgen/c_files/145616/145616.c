/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 |= (arr_0 [i_0] [i_0]);
        var_14 = ((((max(124, 139160250))) ? (min((~var_9), (min(2077168655, (arr_1 [i_0 + 2]))))) : (arr_0 [i_0 + 1] [i_0])));
        var_15 = (min(var_15, ((max((arr_0 [i_0] [i_0]), (~var_5))))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    {
                        var_16 = ((var_5 < (arr_4 [i_1])));
                        var_17 = var_5;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 21;i_6 += 1)
            {
                {
                    var_18 = (min(124, ((-(max(1414327586, (arr_15 [i_1] [i_6])))))));
                    var_19 ^= (max((((~-117) ^ (~139160250))), (((124 ? 40529 : 2147483647)))));
                }
            }
        }
        var_20 = 114;
    }
    for (int i_7 = 1; i_7 < 16;i_7 += 1)
    {
        var_21 |= ((~(((min((arr_11 [i_7]), 4155807046)) ^ (((arr_10 [i_7] [i_7] [i_7]) / var_12))))));
        arr_19 [i_7] [i_7] = 123;
    }
    var_22 ^= (var_4 ? var_1 : var_9);
    var_23 ^= (+((4155807046 ? (!4155807046) : var_12)));
    #pragma endscop
}
