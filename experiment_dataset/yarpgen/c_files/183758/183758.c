/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [14] [i_0] = (((((((min((arr_0 [i_0]), var_15))) ? ((var_2 << (var_12 + 28525))) : (((var_11 ? var_0 : var_5)))))) ? (min(0, (var_9 * 1144351780))) : (min((min(2639057713, var_10)), ((max(36, var_14)))))));
        arr_3 [i_0] = (max(-var_15, (-1144351774 / -1144351774)));
        var_20 = ((var_19 ? (((max(var_13, 1144351780)))) : var_19));
    }
    for (int i_1 = 1; i_1 < 6;i_1 += 1)
    {
        arr_7 [i_1] = var_14;
        var_21 = (((((var_9 ? (!var_14) : (~var_14)))) ? var_4 : ((var_2 ? var_19 : var_13))));
        var_22 = (max(var_22, var_0));
        var_23 = (max((((-var_7 + 2147483647) << (var_14 - 1))), -1655909585));
    }
    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        var_24 = (((arr_9 [i_2 + 1]) ^ (((min(2639057726, 0)) % var_5))));
        var_25 = ((3101636788100190121 & (((((15717187426275725677 ? 1655909585 : 2639057710))) ? 14 : 1144351783))));
        var_26 = (max((max((1655909585 - 2763000039013645164), (min(var_2, var_7)))), (min((33554431 * 4294967287), var_9))));
    }
    var_27 = (((min((((var_11 ? var_18 : 341971190))), ((9732066371357240754 ? 18446744073675997185 : var_11))))) ? (((var_9 | var_1) ? (((var_0 ? var_16 : 17))) : ((var_8 ? 63050394783186944 : var_19)))) : ((5264055621938403058 * (max(144115188075855871, 18446744073709551615)))));
    var_28 = ((~(((~1502082791) ? ((var_16 ? var_9 : var_11)) : ((max(var_8, var_11)))))));
    var_29 = (max(var_29, ((((min((var_10 >= var_12), -var_0)) < ((max(-var_18, (~63)))))))));
    #pragma endscop
}
