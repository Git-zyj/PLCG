/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((3800816201 ? -127 : 13365938714618352800));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [9] &= ((((((arr_3 [i_1] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_1] [i_0])))) ? (((~(arr_0 [i_0])))) : (max(4294967295, (-9223372036854775807 - 1)))));
                arr_6 [i_0] [i_0] [i_0] = (arr_3 [15] [i_1]);
            }
        }
    }
    var_14 = ((var_8 ? ((((((var_2 ? var_1 : var_4))) ? var_2 : ((9223372036854775807 ? 1 : 494151101))))) : (var_1 | var_1)));
    #pragma endscop
}
