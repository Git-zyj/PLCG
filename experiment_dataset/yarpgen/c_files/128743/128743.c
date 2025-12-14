/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_13 = (((((((min(2668339050649841634, 1))) ? (~0) : 15303348237057548864))) ? 14811790635213884259 : ((min(var_2, 1)))));
                arr_7 [5] = (arr_0 [7]);
                var_14 = (((min((arr_3 [i_1] [i_1]), 1627344989))) ? ((12288 ? var_6 : (arr_6 [i_0 + 1] [i_0 + 1] [i_1 + 1]))) : (((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 2]) : (arr_0 [i_1 + 3]))));
                arr_8 [8] [i_1] = ((var_8 ? ((min(1, -1912288435))) : ((~(arr_1 [i_0 + 1] [i_0 + 1])))));
            }
        }
    }
    var_15 = var_10;
    var_16 = var_6;
    var_17 = var_7;
    #pragma endscop
}
