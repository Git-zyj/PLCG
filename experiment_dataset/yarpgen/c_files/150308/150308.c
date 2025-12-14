/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_6));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (min((arr_4 [i_0 - 1]), (((((arr_1 [i_0]) > (arr_5 [2] [i_1]))) ? ((((arr_3 [i_0 - 2]) & (arr_3 [i_1])))) : (min((arr_1 [i_0]), 9))))));
                var_13 = (max((((arr_4 [i_0]) << (-3269507207786342164 + 3269507207786342167))), (((((arr_0 [1]) ? -81 : (arr_0 [i_1])))))));
                var_14 = 1;
            }
        }
    }
    var_15 = (min((min(((((var_9 + 9223372036854775807) << (var_0 - 100)))), ((var_2 ? var_3 : 4769580573548895139)))), var_7));
    #pragma endscop
}
