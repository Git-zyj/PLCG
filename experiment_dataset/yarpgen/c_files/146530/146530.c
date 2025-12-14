/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (max(var_15, ((~((2480144416282724840 ? var_2 : -229895951))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_19 = ((!((((1880875415 / 7395095655054692072) ? ((var_13 ? var_0 : var_1)) : var_11)))));
        var_20 = (min(var_20, (((((((min(24402, 111214517829493076))) ? var_17 : (((-9223372036854775807 - 1) ? 37 : -1381448408)))) <= ((~((max(var_17, 31744))))))))));
        var_21 ^= ((!((((arr_2 [i_0 - 2] [i_0 + 3]) ? 378437229 : var_1)))));
    }
    #pragma endscop
}
