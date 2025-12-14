/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [4] [i_1] = (((max((arr_4 [i_1] [i_1] [i_1 - 1]), 0)) * ((min(-15968307, (arr_5 [i_0] [i_0] [i_1 - 1]))))));
                var_14 = ((-((((32767 ? 0 : 0))))));
                arr_7 [i_0] [i_1] = 18446744073709551613;
                var_15 = ((!((var_6 || (1 * var_5)))));
                arr_8 [i_1] = ((((((((arr_3 [1] [1]) + (arr_1 [i_1 - 1]))) - -var_11))) ? (arr_5 [i_0] [i_0] [1]) : (105 ^ 1)));
            }
        }
    }
    var_16 = ((-(((var_11 ? var_8 : var_4)))));
    var_17 |= (min((max((!var_12), ((var_5 ? -10 : var_7)))), ((((~var_3) << (var_5 - 35112))))));
    #pragma endscop
}
