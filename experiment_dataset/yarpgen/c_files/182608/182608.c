/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~var_13) ? ((((127 ? 127 : var_11)) & (var_15 & -127))) : (((~(~127))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = ((-32767 ? ((-(arr_0 [i_0]))) : 1));
                arr_6 [i_1 - 1] [i_1] [i_0] = ((+(((((~var_9) + 2147483647)) << ((((var_9 ? (arr_0 [i_0]) : 4858517373076810080)) - 1535684949739800561))))));
                arr_7 [i_1] = ((((min((((-1 ? (arr_3 [i_1]) : 127))), ((4858517373076810080 ? 4858517373076810080 : var_2))))) ? ((~((min(32767, (arr_3 [i_1])))))) : (((((((arr_5 [i_1] [i_1]) ? var_6 : var_10))) && (arr_1 [i_1 - 1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
