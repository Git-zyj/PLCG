/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -8604;
    var_21 = (min(255, ((((8604 ? -8619 : -94)) + (1 <= var_0)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = (min(var_22, ((1 ? -8604 : 3331296565))));
        var_23 = ((-3474980201918475749 ? ((var_2 ? (((421517942020043502 ? var_19 : var_1))) : (min(var_19, var_9)))) : ((max((((var_9 ? -94 : 249))), 245)))));
        var_24 = var_14;
        var_25 = ((((-8624 ? 13962642408663405500 : var_18)) | (((var_8 ? (((-81 ? -1 : 2795500164))) : (-87 ^ -4387566373111968124))))));
        var_26 ^= (((((-1 ? 37026 : 30577))) ? ((var_6 ? (((min(23423, 57913)))) : 1121501860331520)) : ((((((max(var_11, 255))) <= ((var_19 ? 60 : 61050))))))));
    }
    var_27 += ((max(var_5, 103)));
    #pragma endscop
}
