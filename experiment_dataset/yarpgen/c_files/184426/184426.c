/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (((~((max((arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 - 1] [i_1] [i_1 - 1])))))))));
                arr_4 [i_0] [13] [i_1] = (min(((min((arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1]), (max(var_6, var_7))))), ((4 ? (((arr_0 [i_0]) % var_9)) : (11134895063448420450 | var_2)))));
            }
        }
    }
    var_11 = ((((-(max(var_6, 7311849010261131175)))) | (((((min(32767, var_1))) ? (max(1, var_5)) : ((var_6 ? var_5 : 1)))))));
    var_12 = (max(var_0, (min((((2097151 ? 1 : 1))), var_4))));
    var_13 = var_5;
    #pragma endscop
}
