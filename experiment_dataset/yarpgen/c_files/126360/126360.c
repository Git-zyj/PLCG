/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 -= (!var_10);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [23] [i_0] [i_2] [14] = ((-121 / (-127 - 1)));
                    var_17 = (min(var_17, (!var_10)));
                }
            }
        }
        var_18 = (min((min((min(var_1, (arr_0 [2]))), (var_6 ^ var_8))), ((min(53267, 31)))));
    }
    var_19 = (max(18446726481523507200, (((!(!var_5))))));
    #pragma endscop
}
