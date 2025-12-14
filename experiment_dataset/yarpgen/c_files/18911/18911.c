/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_9 ? var_3 : (var_5 * var_14)));
    var_17 = var_2;
    var_18 = ((((((~var_13) ? var_2 : ((max(0, 4294967295)))))) ? (((-1438223128 ? 0 : 15))) : (max(((var_8 ? var_13 : 2423394309)), (((-894463968 ? 2883266318 : (-2147483647 - 1))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = arr_1 [i_0];
        arr_4 [i_0] [i_0] = (2423394309 ? (min((~var_1), (arr_1 [i_0]))) : (arr_1 [i_0]));
        var_19 = (arr_1 [i_0]);
        var_20 = (max((min((arr_1 [i_0]), (min(1632847946828260595, (arr_1 [i_0]))))), (arr_2 [i_0])));
        arr_5 [i_0] = ((((min(2423394309, 2134649456))) ? (arr_0 [i_0]) : (arr_2 [i_0])));
    }
    var_21 = (min(((((var_13 ? var_13 : var_7)) / (min(var_13, var_15)))), ((max(((var_0 ? var_8 : var_9)), var_14)))));
    #pragma endscop
}
