/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 -= ((255 != (((min(16298681332266808636, 4294967295)) * ((min(249, 1356834332)))))));
        arr_3 [i_0] [i_0] = (max(176735129280426361, (((var_7 ? 186 : 65535)))));
        var_18 -= ((246 << 1) ? (max(1722, 1258561780)) : (2154845509744435438 < 15872));
        arr_4 [i_0] [i_0] = (((((1 * (!1952042568)))) / 9223372036854775807));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_19 = ((var_11 ? (((-2147483647 - 1) ? (var_14 != 13) : (-26348 <= 1539560591))) : (max((~235), 1))));
        arr_7 [i_1] = 14;
        arr_8 [i_1 - 1] = 2407373970;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_11 [i_2] = ((-(((65535 < 1) ? 3574128325 : (32767 % 116)))));
        var_20 = -29690;
        var_21 = ((((~-55) ? (77 / -2347540566724703503) : (((var_14 ? var_7 : 828094843))))));
    }
    var_22 = ((~((var_1 ? (4901468681431040659 != 48644) : (18446744073709551615 != 5)))));
    #pragma endscop
}
