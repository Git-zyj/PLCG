/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((max(128, 18446744073709551615)) - (((max(var_2, 1)))))) / (max(((-165763963 ? 18446744073709551615 : -6768663400166931009)), 21123))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = var_13;
        var_21 = (max(var_21, (((((((min(-21124, var_1))) ? ((max(-115, var_16))) : var_5))) ^ 9007199254740992))));
    }
    var_22 = var_19;
    var_23 = var_16;
    #pragma endscop
}
