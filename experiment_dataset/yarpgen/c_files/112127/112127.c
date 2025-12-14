/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        var_19 = (((18446744073709551615 ^ 169) / (6582832559565151476 & 12504636716061938357)));
        arr_2 [i_0 + 2] = var_5;
        var_20 = ((var_11 < (((12504636716061938357 ? ((var_2 ? var_8 : var_7)) : (1 || 6827612432826232144))))));
    }
    var_21 = ((((var_16 % ((min(var_3, var_1))))) + var_13));
    var_22 = (((5942107357647613258 < var_6) ? ((4044605905498869795 ? var_3 : var_12)) : var_1));
    var_23 = ((var_13 == ((-var_3 ? ((var_4 ? var_0 : 6827612432826232150)) : var_5))));
    #pragma endscop
}
