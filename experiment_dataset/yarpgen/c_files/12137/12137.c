/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 << (var_1 - 13155)));
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((arr_1 [i_0]) - ((866051134 ? (arr_3 [i_1] [i_0]) : (arr_1 [i_0])))));
                var_14 = (min(var_14, (((5287915596608613022 ? ((max((arr_0 [i_1] [i_0]), (arr_3 [i_0] [i_0])))) : ((((min(1038129798348462467, 57964)) > (arr_1 [i_0])))))))));
                var_15 = (min(var_15, var_11));
            }
        }
    }
    var_16 = (min(var_3, var_2));
    #pragma endscop
}
