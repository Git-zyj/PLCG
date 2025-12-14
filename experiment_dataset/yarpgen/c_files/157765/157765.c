/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_6;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_11 &= (((((~(9351808895296187259 ^ 9094935178413364383)))) ? ((-26363 ? (arr_1 [i_0]) : ((1281613589 ? 9351808895296187264 : -31546)))) : (max((var_1 + var_9), (!3013353703)))));
        var_12 = ((min(1392954098, (~var_7))));
        var_13 = max((min(((9351808895296187223 ? -1392954095 : 9351808895296187259)), ((((-16782 + 2147483647) << (((var_1 + 126) - 23))))))), (!var_2));
    }
    var_14 |= (min(var_0, 76));
    #pragma endscop
}
