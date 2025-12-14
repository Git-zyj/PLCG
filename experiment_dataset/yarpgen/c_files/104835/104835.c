/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((184 >> ((((~((max(-95, 127))))) + 129))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (((43151 ? var_4 : ((27735 & (-2147483647 - 1))))));
        var_13 = -16776192;
    }
    var_14 = ((34839 ? ((((!(((var_5 ? 1 : var_5))))))) : ((var_9 ? (min(2147483627, var_5)) : (((var_8 ? var_1 : var_2)))))));
    var_15 = (((((var_3 || var_0) ^ ((0 ? var_1 : var_8)))) + ((max(126, -127)))));
    #pragma endscop
}
