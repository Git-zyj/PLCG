/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_8);
    var_19 = (min(var_19, ((max(((((15573513078370161062 ? var_4 : var_9)) | 83)), (((~(~var_7)))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (min(var_20, (+-2873230995339390554)));
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_21 = var_10;
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = (((((~(4327130670553669489 + 262144)))) ? (((arr_1 [13]) & (arr_5 [6]))) : (arr_0 [i_1] [5])));
        arr_7 [i_1] [i_1] = (((((!2873230995339390541) <= (((var_15 && (arr_3 [i_1])))))) && -8148753528869239677));
    }
    var_22 = ((var_9 ? (max(var_1, (var_14 && var_2))) : ((((18446744073709289471 && (var_7 & 2873230995339390550)))))));
    #pragma endscop
}
