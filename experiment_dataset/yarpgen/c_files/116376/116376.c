/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((~(arr_0 [i_0 + 1])))) ? (min((max(7936, (arr_4 [i_0 + 1] [i_0] [i_0]))), var_14)) : ((min(((4294967269 ? (arr_1 [i_0 + 1]) : var_2)), ((1 ? (arr_2 [i_1 + 2] [i_0] [1]) : (arr_3 [14] [8]))))))));
                arr_6 [i_0] [i_1 - 1] = 2147483639;
            }
        }
    }
    var_15 = (((((var_10 ? (~var_2) : (!1)))) ? var_0 : (((min(var_8, var_3)) - ((max(var_1, var_2)))))));
    var_16 = 1;
    var_17 = ((((-65520 ? ((var_9 ? var_3 : var_5)) : ((61 ? var_12 : var_3)))) - (((12823229888373295357 ? ((var_12 ? var_5 : 65522)) : var_5)))));
    #pragma endscop
}
