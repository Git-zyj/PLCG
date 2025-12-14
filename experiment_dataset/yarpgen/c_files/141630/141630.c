/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 ^= (min((836610035 - 13045495164196558390), 13045495164196558390));
        arr_2 [i_0] = 13045495164196558390;
    }
    var_20 = var_12;
    var_21 = (max(var_21, 50956));

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = 4294965248;

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_1] = (((((-(max(var_6, var_12))))) ? (arr_3 [i_2] [i_2]) : var_12));
            var_22 = (min(var_22, ((((arr_7 [i_1] [i_2] [1]) ? ((~(arr_3 [15] [15]))) : (arr_6 [i_2] [i_2] [i_2]))))));
        }
        arr_9 [i_1] [i_1] &= (max(((825875410 + (arr_3 [i_1] [i_1]))), (arr_3 [i_1] [i_1])));
    }
    #pragma endscop
}
