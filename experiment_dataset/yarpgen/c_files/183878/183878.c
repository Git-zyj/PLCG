/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_0;
    var_17 = var_9;

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_18 *= var_9;
        var_19 = ((((((arr_1 [i_0 - 3]) * var_4))) / (arr_0 [i_0])));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1 - 2] = (~var_4);
        var_20 = (min(((((((arr_3 [i_1]) ? (arr_4 [8] [i_1]) : var_6)) * -var_12))), ((((min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1 + 1])))) ? (((~(arr_3 [i_1])))) : (min(var_14, (arr_4 [i_1] [i_1 + 1])))))));
        arr_6 [i_1] [i_1] = ((~(((((6 >> (963693448 - 963693439)))) ? 15770995652686143172 : var_11))));
        var_21 ^= ((((-1 + ((max(0, (arr_4 [i_1 + 1] [i_1 + 2])))))) * ((((((arr_4 [i_1 + 1] [i_1]) ? 65511 : (arr_3 [i_1])))) ? ((8 / (arr_4 [i_1 - 2] [i_1]))) : -var_8))));
    }
    #pragma endscop
}
