/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max((1536 % var_3), var_9)) + (((((-3617607140829330688 && var_2) <= var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = ((~(((((-74 ? var_13 : (arr_4 [i_0]))) < 9223372036854775787)))));
                var_16 = arr_1 [i_0];
                arr_6 [i_0] = (((((121 >= (var_0 <= var_11)))) * 1));
                var_17 = (min(var_17, -3883));
            }
        }
    }
    var_18 &= (((var_7 <= var_0) / var_10));
    #pragma endscop
}
