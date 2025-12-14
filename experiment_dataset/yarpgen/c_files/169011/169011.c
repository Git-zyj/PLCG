/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 12288;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0 - 2]) * ((((arr_1 [i_0 - 1]) > (arr_1 [i_0 - 2]))))));
        var_12 = ((min(((var_3 ? 12281 : 53226), (arr_1 [16])))));
    }
    var_13 *= ((~((var_9 ? ((var_7 ? 186 : 1)) : (!13575)))));
    #pragma endscop
}
