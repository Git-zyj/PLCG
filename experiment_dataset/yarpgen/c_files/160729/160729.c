/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((arr_2 [i_0] [i_1]) ? var_7 : ((var_0 ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_0])))));
                var_10 -= ((0 >> ((((4221737600 ? 8880696299092279716 : (-2147483647 - 1))) - 8880696299092279686))));
                var_11 = (min(var_11, ((((var_6 > var_0) ? ((max((-2147483647 - 1), (-2147483647 - 1)))) : ((var_5 + (((arr_1 [i_0]) / var_6)))))))));
            }
        }
    }
    var_12 = ((var_0 ? (((var_5 || var_8) ? (var_5 >= var_2) : ((511 ? var_8 : var_7)))) : ((((max(-15202, 14336))) ^ ((max(var_1, var_9)))))));
    var_13 = ((((((max(var_9, (-2147483647 - 1))) ^ var_7))) ? 0 : var_5));
    var_14 = ((((((min((-32767 - 1), var_4))) ? (!1) : (max(2009432717, 49755)))) ^ (((var_2 / (var_4 / var_9))))));
    #pragma endscop
}
