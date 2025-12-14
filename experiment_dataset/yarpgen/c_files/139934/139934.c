/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_8, (max(var_3, (max(70, var_10))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 ^= ((~(arr_2 [i_0] [6])));
        var_13 = (min(var_13, (min(((min(-var_9, ((var_6 ? (arr_2 [i_0] [2]) : (arr_2 [2] [2])))))), ((~(max((arr_2 [i_0] [0]), var_0))))))));
        var_14 = ((((max(var_6, ((2147483647 >> (5517601034437745205 - 5517601034437745193)))))) ? ((((var_6 && (arr_0 [i_0] [i_0]))) ? (~50) : -1)) : var_6));
        var_15 = ((~(((var_9 >= (arr_1 [i_0]))))));
        var_16 = var_0;
    }
    var_17 = (min(var_17, (((!((((246 >= var_5) ? ((var_2 ? 57 : var_8)) : (var_1 <= -57)))))))));
    #pragma endscop
}
