/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_14 = (min(var_0, (min((arr_0 [i_0 - 3] [i_0]), (arr_2 [3])))));
        arr_3 [i_0] [i_0 - 3] = ((-(arr_2 [i_0 - 3])));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {
                arr_10 [7] [i_1] [i_2] = (min(((min((arr_9 [i_1 + 1] [i_1 + 1]), (arr_4 [i_1 - 1])))), ((+(((arr_7 [i_1 + 1]) ? var_8 : 1152921503533105152))))));
                var_15 = ((!((min((arr_9 [i_1 + 1] [i_1 - 1]), (arr_9 [i_1 - 1] [i_1 - 1]))))));
            }
        }
    }
    var_16 = ((((((((9223372036854775807 ? 8 : 9223372036854775807))) ? (min(14932990805277573239, var_0)) : var_10))) ? var_8 : var_5));
    #pragma endscop
}
