/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (((((~(~222)))) ? (((((var_9 ? 4 : var_2))) ? (4503599627337728 | var_2) : (~var_4))) : var_4));
    var_18 -= (((((var_13 ? var_14 : (-69 >= 31)))) ? ((var_8 ? ((min(var_13, var_8))) : ((57303 ? 34 : -119)))) : 4503599627337740));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_19 = (((((220 ? var_14 : 36))) ? 57303 : (((26 / var_14) ? 9645840079703090932 : ((var_14 ? var_3 : var_6))))));
        var_20 += (((arr_0 [i_0 - 1]) ? ((~(arr_0 [i_0 + 1]))) : ((var_1 ? var_14 : (arr_0 [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 += ((-((var_6 ? 3232 : ((8210 ? var_2 : (arr_3 [20])))))));
        var_22 += ((-var_4 == ((-6034674370592257770 ? 65535 : ((-8636872695422559334 ? 9223372036854775807 : 4503599627337728))))));
        var_23 *= ((-((var_13 ? 238 : -28))));
        var_24 -= (arr_3 [14]);
        var_25 = (min(var_25, (((((min((arr_2 [i_1] [2]), (arr_3 [10])))) ? var_12 : (max(var_8, ((var_6 ? -16 : (arr_3 [20]))))))))));
    }
    #pragma endscop
}
