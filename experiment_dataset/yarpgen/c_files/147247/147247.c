/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((1 < var_1) | var_8))) && ((((((10 ? (-2147483647 - 1) : 15))) ? (!0) : (1040187392 <= var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = ((((min((((arr_0 [i_0 + 2]) ? var_5 : 65534)), 4193280))) ? ((((max((arr_4 [i_0]), (arr_2 [i_0])))) ? (238 < 18446744073709551615) : (arr_2 [i_0]))) : ((((-10 != (0 ^ 245760)))))));
                var_18 = (min((((arr_2 [i_0]) ? (arr_1 [i_1]) : (arr_1 [i_0]))), var_7));
            }
        }
    }
    var_19 = 15;

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_20 = (((((var_14 ? (4193269 <= -1) : (max((-2147483647 - 1), (-9223372036854775807 - 1)))))) || ((((arr_7 [i_2]) << 0)))));
        var_21 = ((1 ? (((((65526 ? var_0 : var_9)) - (arr_8 [i_2])))) : var_5));
    }
    var_22 = var_3;
    #pragma endscop
}
