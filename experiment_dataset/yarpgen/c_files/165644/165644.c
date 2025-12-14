/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min(196, 196)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = var_6;
        arr_4 [i_0] [i_0] = (((((34143 ? (min(var_6, var_9)) : (((0 << (var_9 - 155893935))))))) ? ((-(arr_1 [i_0]))) : (((3421247303 > -1946961811485045542) | (arr_2 [i_0])))));
        arr_5 [i_0] [i_0] = ((1 << (((min(-1193895419, 3421247303)) - 3101071852))));
    }
    #pragma endscop
}
