/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_7 ? ((min(var_9, var_11))) : ((((1 ? 10561 : var_11)) + var_6))));
    var_15 = (min((((!var_12) + var_9)), var_8));
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((65024 + (((max((arr_3 [i_1]), (arr_2 [i_0] [i_0]))) << ((((16933 ? 10561 : -128)) - 10561)))))))));
                var_18 = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) + (min((max(18002, var_1)), 65535))));
            }
        }
    }
    var_19 = ((var_7 ? ((var_3 ? 15451405972044219464 : var_1)) : (var_7 * var_8)));
    #pragma endscop
}
