/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = (max(37402, 9223372036854775807));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] &= 575717119;
        arr_3 [i_0] [i_0] = ((((min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))) ? ((min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))) : (arr_0 [i_0 + 2])));
        arr_4 [i_0] [i_0 + 1] = (-9223372036854775807 - 1);
        var_13 = (max(((((var_7 ? (arr_1 [i_0]) : var_6)))), (((((arr_1 [i_0 + 1]) + -2870)) / -var_0))));
        arr_5 [i_0] [i_0] = ((((min(231, -9223372036854775807))) ? ((((((arr_0 [i_0 + 1]) < var_9)) ? 231 : 562915593682944))) : ((-562915593682945 ? 17669604887768885000 : -2125747128))));
    }
    var_14 = var_10;
    #pragma endscop
}
