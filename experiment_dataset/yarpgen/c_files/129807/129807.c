/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (max(var_13, ((((var_3 ? 2301892960 : (arr_3 [i_0])))))));
        var_14 = (arr_3 [i_0]);
        arr_4 [i_0] = min(((var_1 % ((-(arr_3 [i_0]))))), (((max(var_2, (arr_2 [13] [i_0]))))));
        var_15 &= (!-1);
    }
    var_16 = (var_3 >= var_9);
    #pragma endscop
}
