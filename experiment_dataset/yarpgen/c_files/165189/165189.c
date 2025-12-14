/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_11 = ((((min(((4661444184984149159 ? var_2 : var_8)), ((((arr_1 [i_0] [19]) / (arr_0 [13]))))))) >= var_1));
        arr_2 [i_0 + 2] = var_6;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_12 = (max(var_12, (((var_4 & ((min((arr_4 [3]), var_4))))))));
        arr_6 [11] = var_3;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_13 |= ((((~var_6) ? ((~(arr_10 [1] [i_2] [i_2]))) : 4661444184984149159)));
                    var_14 = (min(((var_3 ? (arr_8 [i_1] [i_1]) : var_3)), (((~(!var_4))))));
                }
            }
        }
        var_15 = (((!var_1) ? (((arr_11 [i_1] [i_1] [i_1] [i_1]) | 121)) : ((0 ? var_0 : 12288))));
    }
    var_16 = var_10;
    var_17 ^= var_6;
    var_18 = var_10;
    var_19 = var_10;
    #pragma endscop
}
