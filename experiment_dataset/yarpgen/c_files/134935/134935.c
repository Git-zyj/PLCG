/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 = ((!(24 < -8)));
        var_21 = (min(var_21, (((~((min(24524, 41012))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_22 = (~5112);
        arr_5 [i_1] = ((1 ? 4294967274 : 1));
    }
    var_23 = 1610612736;
    var_24 -= var_3;
    #pragma endscop
}
