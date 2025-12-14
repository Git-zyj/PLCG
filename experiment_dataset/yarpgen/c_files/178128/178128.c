/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((5223600513311243050 ? 5223600513311243019 : var_3))) ? (var_17 * 1) : (max(15514880608707942886, var_7))))) ? ((17276112957324992236 ? (-19014 / var_18) : var_15)) : ((var_1 % (var_18 / 2931863465001608740))));
    var_20 = var_7;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((171 ? 6 : -31955));
        arr_5 [i_0] = 15775706370088506736;
        arr_6 [i_0] [1] = (~29246);
        arr_7 [i_0] [i_0] = ((((((!(18446744073709551615 / 1))))) > (arr_1 [i_0])));
    }
    #pragma endscop
}
