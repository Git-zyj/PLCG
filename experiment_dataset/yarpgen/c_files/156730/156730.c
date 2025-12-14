/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((((arr_1 [i_0]) << (((arr_1 [i_0]) - 63))))) ? (max((var_6 << 0), ((((arr_0 [i_0]) << (arr_2 [i_0])))))) : var_3));
        var_18 = ((~((((27465 ? var_0 : 1))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_19 = 1;
        arr_7 [i_1] [i_1] = ((!(((((arr_0 [i_1]) & var_1))))));
    }
    var_20 = -0;
    var_21 = (!4194303);
    var_22 = (min((var_11 / -1195629730), (min(1195629729, var_1))));
    var_23 = 1195629730;
    #pragma endscop
}
