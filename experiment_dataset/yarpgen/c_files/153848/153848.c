/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (((((var_6 - (var_9 - var_3)))) ? ((((((165 ? 88 : -22789))) ? var_1 : (-22789 + var_9)))) : (2321613702272911359 - 48)));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_12 = (((((min((arr_2 [i_0 - 2] [i_0 - 3]), var_4)))) ^ ((((min(44, (arr_0 [i_0])))) ? (((arr_2 [11] [11]) ? 1552167614006979568 : -1589034567)) : (var_3 & 11217)))));
        var_13 ^= (((((((min((arr_1 [i_0] [3]), (arr_1 [5] [5])))) | (arr_1 [i_0 + 1] [i_0 + 1])))) ? ((5125 ? var_1 : 121)) : ((((((arr_2 [4] [i_0]) | 11229)) * ((var_1 ? (arr_2 [i_0 + 1] [i_0 + 1]) : var_7)))))));
    }
    var_14 = ((((min(var_1, var_1))) / (max((var_4 * var_6), (var_7 != 16712170328018672044)))));
    var_15 = ((((((min((-2147483647 - 1), var_8)) ^ (var_5 ^ 121)))) ? ((((var_7 == (var_10 - 9223372036854775808))))) : var_2));
    #pragma endscop
}
