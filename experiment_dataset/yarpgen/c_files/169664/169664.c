/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_0 [i_0 + 1] [i_0 + 1]) ^ 0))) ? (((((var_10 ? (arr_2 [i_0] [i_0]) : 9223372036854775807))) ? ((var_2 ? (arr_2 [i_0] [i_0]) : (arr_1 [5]))) : ((-32759 ? 89 : 155)))) : (((((var_17 + 2147483647) << (67108832 - 67108832))) & (arr_2 [i_0 + 2] [i_0 + 1])))));
        var_18 = (max(var_18, ((min((arr_2 [i_0 + 2] [i_0 + 2]), var_9)))));
    }
    var_19 = ((((50698 == 21725) + var_17)) == var_2);
    #pragma endscop
}
