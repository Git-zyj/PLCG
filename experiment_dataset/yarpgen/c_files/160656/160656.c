/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_17 -= min((arr_5 [i_0]), (((((-1629204184344794300 | 3202641862) + 9223372036854775807)) >> (-32 + 66))));
                var_18 = ((((216 && (arr_1 [i_0 + 3]))) || (var_13 && var_16)));
                var_19 = (((((max(18446744073709551615, 22)))) ? (((((0 + (arr_6 [i_0] [i_0] [i_1 + 1])))) ? var_1 : (((var_16 ? var_7 : (arr_0 [i_1])))))) : ((((arr_5 [i_0]) & 1073741823)))));
            }
        }
    }
    var_20 = ((((var_9 + var_15) | ((var_5 ? var_1 : var_11)))) > var_9);
    #pragma endscop
}
