/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_7 ? 18446744073709551614 : ((((!((max(var_1, var_5))))))));
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((+(((arr_0 [i_0]) ? (((min(var_9, var_1)))) : 4107669566190130882))));
        arr_3 [i_0] = (((((((max(var_3, (arr_1 [5])))) ? (((var_6 ? 0 : (arr_1 [i_0])))) : (1787508248 - 9223372036854775807)))) ? var_7 : (min(2507459048, 65535))));
        var_12 = var_1;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = (((min(-25495, (arr_0 [i_1 - 1])))) ? ((((~2507459045) ? 0 : var_2))) : (((((1787508261 ? 1787508248 : (arr_0 [i_1])))) ? 127 : 1)));
        arr_9 [i_1] [i_1] = (arr_0 [1]);
    }
    #pragma endscop
}
