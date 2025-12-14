/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 += (35890972 >> ((((((max((arr_3 [i_0] [i_1]), (arr_3 [0] [0])))) ? (arr_1 [i_1]) : (min(var_6, (arr_3 [i_0] [i_0]))))) - 2691951902)));
                arr_4 [i_0] [i_0] [i_1] = ((!(((var_2 ? ((2758096036 * (arr_2 [i_0] [i_1] [10]))) : (arr_1 [21]))))));
                var_18 = (~(arr_2 [i_0] [21] [i_1]));
                arr_5 [i_1] [14] = (((35890972 * 780705326) < (((arr_3 [i_0] [21]) ? (~var_13) : var_6))));
                var_19 = (var_12 + (arr_0 [i_0]));
            }
        }
    }
    var_20 = var_4;
    var_21 = (((((~0) ? 67990971 : var_8)) <= ((var_15 ? 134713683 : 295261266))));
    #pragma endscop
}
