/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_14 += ((((max((arr_0 [i_1 - 1] [i_1 + 1]), (arr_0 [i_1 + 1] [i_1 - 1])))) || ((max((arr_3 [i_0] [i_1]), (~var_6))))));
                var_15 = (max(var_15, ((max(((min(24586, -1))), (((arr_1 [i_1 - 1]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 1]))))))));
                var_16 = (min(var_16, ((((0 ^ 3512693601) < (max(var_2, (max(-9223372036854775795, var_6)))))))));
            }
        }
    }
    var_17 = ((~((var_5 ? (var_8 == var_1) : var_4))));
    var_18 = (min(var_18, ((((((2189880014 ? 268435456 : (4966282323659174705 || var_12)))) ? var_0 : 1125134469)))));
    var_19 ^= (max((min(var_8, (max(var_3, var_5)))), var_7));
    #pragma endscop
}
