/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 += (max(((min((arr_0 [i_1]), (arr_3 [i_0] [i_1])))), ((var_7 ? var_11 : var_1))));
                var_13 *= (((((((max(var_3, 255))) ? (((arr_2 [i_0] [i_0]) ? 7957847360723552575 : (arr_0 [i_1]))) : (arr_1 [4] [i_1])))) ? ((~(arr_0 [i_0]))) : (((arr_2 [i_0] [i_1]) * var_8))));
            }
        }
    }
    var_14 = (((min(var_11, 3486091506165416372))));
    var_15 = min((min(((-64 ? 40 : 14960652567544135275)), var_2)), var_4);
    #pragma endscop
}
