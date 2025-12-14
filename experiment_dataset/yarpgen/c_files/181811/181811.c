/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (((arr_2 [i_0 + 1]) ? (((arr_3 [i_0] [i_0 + 1] [i_0 - 3]) ? var_5 : (arr_3 [1] [i_0 - 1] [i_0 + 1]))) : (arr_3 [i_0] [i_0 - 3] [i_0 - 3])));
                    var_15 = (min(((714730020 + (((arr_8 [i_0]) / (arr_1 [i_0]))))), -30988));
                }
            }
        }
        arr_9 [i_0] = (arr_8 [i_0]);
        var_16 = var_0;
    }
    var_17 = ((((((max(714730034, 2147483647))) ? -2853896000337578203 : ((min(4294967284, 30987))))) + ((((!var_1) + (2174922861741488892 || var_4))))));
    #pragma endscop
}
