/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((((+(((arr_4 [i_1] [i_0]) | -2051423371891255531)))) + 9223372036854775807)) >> ((1 ? 62 : ((max((arr_5 [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0]))))))));
                var_11 = (arr_2 [i_0]);
                var_12 = (((-102 ? ((50738 * (arr_4 [i_0] [i_0]))) : (((((arr_0 [i_0]) > (arr_5 [i_0] [i_1]))))))));
            }
        }
    }
    var_13 = min(((-(~var_7))), (max(((-102 ? var_7 : var_7)), (!1))));
    var_14 = (((50738 ? 30 : 63410)));
    var_15 = (max((((((var_4 ? var_1 : var_6))) ? ((216 ? var_6 : var_1)) : var_10)), (-124 % 106)));
    #pragma endscop
}
