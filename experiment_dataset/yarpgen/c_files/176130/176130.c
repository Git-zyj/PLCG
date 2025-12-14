/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((var_13 ? ((~(arr_2 [i_0] [i_0]))) : -3768793179));
                var_21 = (((((-((19964 ? 13 : (arr_3 [i_1] [2] [i_1])))))) ? -67 : -67));
                var_22 = (arr_0 [13]);
            }
        }
    }
    var_23 = ((var_15 ? (((var_1 ? -var_17 : -67))) : -5674449109272638095));
    var_24 = var_6;
    #pragma endscop
}
