/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((((-1970284009 ? 1970284009 : ((min(30377, -21))))) - 3978));
    var_18 = ((2324683287 ? (((min((-9223372036854775807 - 1), 0)) + 8740)) : (((8073 ? 139 : (212 < -1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = (((((35158 ? 36 : 922119948176384487))) ? 705068461 : ((2809212241 ? 4244360917548668596 : 3973))));
        arr_4 [i_0] = (((7643939035854441144 / 35158) ? 3589898862 : (((-32767 - 1) / -4063513423095659846))));
        var_20 = (((((922119948176384487 ? -1152921504606846976 : 1002135484))) ? (18049 - 2324683283) : (!-15)));
    }
    #pragma endscop
}
