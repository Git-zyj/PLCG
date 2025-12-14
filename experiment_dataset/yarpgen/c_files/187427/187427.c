/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 = ((~((-((7561442013102030619 << (17712391891542034899 - 17712391891542034891)))))));
        arr_2 [i_0] [i_0] = var_3;
        arr_3 [i_0] = (min((arr_0 [i_0]), ((10885302060607521003 ? (arr_1 [i_0 + 1]) : (-9223372036854775807 - 1)))));
        var_15 = (max(var_15, (((((var_13 <= (var_4 & 10885302060607520997))) ? var_2 : (max((arr_1 [i_0 + 1]), (17592186044415 >= 10885302060607521022))))))));
        var_16 = (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] = (arr_7 [i_1 + 2]);
        arr_9 [i_1] |= (min(18446726481523507218, 26710));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_17 = (max(var_9, ((~(!734352182167516725)))));
        arr_14 [i_2] = 38826;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_18 = (((((max((arr_6 [i_3] [i_3 - 1]), var_9)) * 26710)) - var_8));
        arr_17 [i_3] = (max((arr_16 [i_3 - 1] [i_3 - 1]), (arr_15 [i_3 - 1])));
    }
    var_19 = ((((max((max(16777215, var_10)), ((max(26719, var_6)))))) ? ((max(var_13, var_1))) : var_2));
    #pragma endscop
}
