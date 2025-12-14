/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_16 | var_9) / (-var_16 % -473142889)));
    var_20 = ((((max(var_11, 1))) | var_6));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = 3731989649;
        var_22 = var_4;
        arr_2 [1] &= -11;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_23 = ((17 | ((((8 != (arr_5 [i_1] [i_1])))))));
        var_24 = (max(((~(arr_5 [i_1] [i_1]))), (((((-(arr_3 [i_1] [i_1]))) > ((9223372036854775807 ? (arr_3 [i_1] [i_1]) : -17768)))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_25 += var_3;
        var_26 = (min(((max(-179, var_5))), (((min(var_0, 4)) - (arr_8 [i_2] [i_2])))));
        var_27 *= 1;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_28 = (((((0 >= (arr_5 [i_3] [i_3]))) * 20)));
        var_29 = 65530;
        var_30 ^= (((((-((-(arr_9 [i_3])))))) ? 1 : var_2));
    }
    #pragma endscop
}
