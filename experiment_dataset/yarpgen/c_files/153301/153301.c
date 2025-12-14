/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(var_5 | var_2)));
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (max(var_11, (((arr_3 [i_0 + 1] [13] [i_0 + 1]) ? ((32767 ? var_0 : (arr_3 [13] [i_1] [6]))) : (((max((arr_2 [i_0 - 3]), var_9))))))));
                arr_6 [i_0] [i_1] [17] = (((((1 ? (arr_4 [i_0] [i_0 - 4]) : 832893206))) ? ((var_0 ? 9223372036854775807 : var_7)) : (((arr_4 [i_0] [i_0 - 1]) - (-32767 - 1)))));
                arr_7 [i_0] = (((((var_3 ? 38698 : 1) | (((arr_2 [i_1]) ? var_9 : var_8))))));
            }
        }
    }
    #pragma endscop
}
