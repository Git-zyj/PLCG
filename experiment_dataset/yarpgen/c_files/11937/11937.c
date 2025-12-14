/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 &= (max((((var_16 ? 64 : (arr_0 [i_0 + 2])))), (((min(32767, 9223372036854775807)) - (max(70368744177663, (arr_2 [4])))))));
        var_20 = (max(var_20, ((((((((((arr_0 [i_0 - 1]) ? 65535 : (-2147483647 - 1)))) & ((~(arr_3 [2])))))) ? ((var_16 << ((((3 ? (arr_2 [22]) : (arr_3 [18]))) + 3911664220299885496)))) : ((+(((arr_3 [12]) ? -1 : 255)))))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_8 [1] = (arr_2 [6]);
        var_21 = (min(((max(4294967293, var_10))), ((((9223372036854775801 | (arr_4 [i_1]))) & 17))));
        var_22 = (max(var_22, ((((((((((arr_7 [i_1 - 1] [i_1]) ? 18446744073709551604 : (arr_7 [1] [i_1 + 2])))) ? (max((arr_1 [i_1]), (arr_6 [i_1] [i_1]))) : (arr_1 [i_1])))) ? (arr_4 [i_1 + 2]) : (((((~(arr_7 [i_1] [i_1 - 1])))))))))));
    }
    var_23 = (min(var_23, (((((((((var_10 ? var_4 : var_14))) ? ((var_14 ? 5 : var_11)) : (var_16 * var_10)))) ? (((((var_0 ? var_4 : var_13))) - var_14)) : var_4)))));
    var_24 = var_18;
    var_25 ^= (((~2251799545249792) ? var_18 : -var_2));
    #pragma endscop
}
