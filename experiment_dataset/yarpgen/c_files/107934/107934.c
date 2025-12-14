/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((max(var_16, ((65535 ? 1 : var_16))))) ? ((((min(var_3, var_5))) ? (~11183705830333091760) : var_16)) : (((-(!var_12))))))));
    var_18 = (((((0 ? ((var_15 ? var_13 : 18446744073709551603)) : var_1))) ? (((max(9576132728913273930, 12338)) * var_12)) : ((min(var_8, var_7)))));
    var_19 = (((!((max(var_6, 255))))));
    var_20 = var_13;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 + 1] = ((((((var_6 ? 3801497641685733909 : 1225419055)))) ? ((8064 ? ((var_9 ? var_16 : var_1)) : ((1477516720 ? 10658 : 7680)))) : (((26450 ? var_2 : 162)))));
        var_21 = 32736;
        arr_3 [i_0] [i_0 + 1] = (7263038243376459874 && 204);
    }
    #pragma endscop
}
