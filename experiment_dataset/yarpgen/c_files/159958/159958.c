/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 *= ((!(((-((32627 + (arr_0 [8]))))))));
        var_17 = ((((min(var_3, var_13)) + (var_11 != var_8))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (((((((~(arr_4 [i_1]))) & var_7))) ? ((((!(((arr_5 [i_1]) != var_13)))))) : (min((arr_6 [i_1]), var_12))));
        arr_8 [i_1] = (arr_6 [i_1]);
        arr_9 [i_1] = (min(((min(-31325, (arr_5 [i_1])))), ((max(((~(arr_6 [i_1]))), (((arr_3 [i_1]) ? var_14 : var_2)))))));
        arr_10 [i_1] [i_1] = (2774705629500949592 ? (min((14343987115696302949 != var_0), (arr_4 [i_1]))) : (arr_6 [i_1]));
    }
    var_18 = 145126312;
    var_19 = (((((min(-25192643, 65535)) ? var_7 : (min(var_1, var_11))))));
    #pragma endscop
}
