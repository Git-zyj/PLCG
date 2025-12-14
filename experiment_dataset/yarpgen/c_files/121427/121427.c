/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((18446744073709551603 ? 1 : -7508594327388164742));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (min(var_12, ((min((arr_0 [i_0]), ((-1 ? 7055799600920863163 : -7508594327388164742)))))));
        arr_2 [i_0] = min(-121, (((125 || -7055799600920863164) ? ((2118452259 ? -9223372036854775792 : 1)) : 7055799600920863168)));
        var_13 = (min(var_13, (((((min(17582071856663536148, ((10878066248958647256 ? 10878066248958647243 : 65504))))) ? (((arr_1 [i_0] [i_0]) - -380310596268556729)) : ((((((max(-125, 1963958703))) <= ((var_6 ? 7055799600920863164 : (arr_1 [11] [11]))))))))))));
    }
    var_14 &= -121;
    var_15 = -76;
    #pragma endscop
}
