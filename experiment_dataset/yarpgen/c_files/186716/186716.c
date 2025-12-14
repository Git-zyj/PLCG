/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((((max(var_11, var_7))) ? ((-(var_5 + var_4))) : (~var_9)));
    var_14 = var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (((((arr_1 [i_0] [i_0]) | var_8)) | (((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_16 = (((arr_6 [1] [i_1] [i_1]) | (((arr_5 [i_0] [i_0] [i_1]) ? var_9 : (arr_5 [i_0] [i_0] [i_1])))));
            var_17 *= ((((((((var_12 / (arr_6 [i_0] [i_1] [17])))) ? (arr_5 [i_1] [i_0] [i_0]) : -65514))) ? var_1 : ((min(6, 33532)))));
        }
    }
    #pragma endscop
}
