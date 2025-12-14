/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((min(49852, var_1))) ? (max(var_12, var_2)) : (((var_6 ? var_0 : 52897)))))) ? ((min((max(0, var_1)), (var_3 & 31)))) : (max((max(var_4, var_0)), ((min(var_5, (-32767 - 1))))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_14 = (min((min((min(4187797515898945688, var_12)), (((-12 == (arr_1 [i_0 + 2])))))), ((((((-32767 - 1) + 32755))) ? (max(1802794735690820447, (arr_1 [i_0]))) : ((max(var_1, (arr_0 [i_0]))))))));
        var_15 += ((((min(((max(4442, (arr_0 [i_0])))), (min((arr_0 [i_0]), var_4))))) * ((((max(var_12, var_7))) ? ((((3456203670 == (arr_0 [1]))))) : (min(var_9, (arr_1 [i_0])))))));
        var_16 &= (max((max((((-32767 - 1) - (arr_1 [i_0 + 2]))), (max(var_1, 2084)))), ((((((arr_0 [i_0]) ? -8153748508304854671 : -1073741824))) ? ((18446744073709551615 ? 95 : var_3)) : ((var_9 ? (arr_0 [i_0]) : (arr_1 [1])))))));
    }
    #pragma endscop
}
