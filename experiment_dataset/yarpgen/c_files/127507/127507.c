/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = ((((-13 ? 10842130522868435907 : 5742911335636994997)) | 2190318529));
        var_19 = (min((!var_11), (max((((arr_1 [13] [i_0]) ? -9223372036854775800 : (arr_1 [i_0] [i_0]))), (((arr_2 [i_0]) ? 7604613550841115704 : (arr_3 [i_0])))))));
        var_20 = (min(var_20, (((~(((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))))))));
    }
    var_21 = (((((((max(var_16, var_0))) ? var_13 : (41508 & 266319705)))) == ((var_8 | (255 & -3530647137604920775)))));
    #pragma endscop
}
