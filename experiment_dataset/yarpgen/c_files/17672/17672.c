/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0] [12]);
        arr_4 [i_0] [i_0] = (max(((((((0 ? var_12 : (arr_0 [i_0]))) + 2147483647)) << (32767 - 32767))), ((((32767 ? var_9 : var_8))))));
        var_14 = (max(var_14, ((((((((var_11 ? 37 : var_0))) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) + ((~((max(var_2, (arr_2 [i_0] [i_0])))))))))));
        var_15 = -29151;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (arr_0 [i_1]);
        var_16 |= (min(2147483647, -2094745035));
    }
    #pragma endscop
}
