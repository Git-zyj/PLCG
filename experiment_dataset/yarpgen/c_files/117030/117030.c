/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((~(var_8 ^ var_8)))) & ((~(~var_10)))));
    var_12 = (((var_0 <= 4294967288) ? ((((7 & 1) >= (!4294967288)))) : var_9));
    var_13 = (min(((var_5 ? var_2 : var_4)), (((var_0 || ((max(var_2, 4294967288))))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_14 = ((~(1073741824 & 8)));
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) + ((((arr_1 [i_0 + 2] [i_0 + 2]) / (arr_1 [i_0 - 1] [i_0 + 2]))))));
        arr_3 [i_0] [i_0] = (min((((35 <= (max((arr_1 [i_0] [i_0]), var_8))))), ((((13 >> (((arr_1 [i_0] [8]) + 1084716305832282192)))) ^ (((((arr_0 [2]) < 124))))))));
    }
    var_15 |= (max(2, (((var_6 || var_7) ? var_6 : (var_3 & 8109251278604266160)))));
    #pragma endscop
}
