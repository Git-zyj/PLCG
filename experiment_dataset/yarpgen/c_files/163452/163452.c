/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, -0));
    var_14 = (!var_3);
    var_15 = (min(var_9, (min(var_1, var_6))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((~(min(var_7, 9223372036854775807)))))));
                var_17 += (((~(arr_2 [i_0 + 1]))));
                var_18 = ((-((min((arr_4 [i_0] [i_0] [i_0 + 2]), (max(65535, (arr_4 [i_0] [8] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
