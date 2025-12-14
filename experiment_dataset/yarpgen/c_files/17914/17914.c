/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_2);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((((max((arr_2 [i_0]), (arr_2 [i_0]))))) <= (min(var_4, (((var_0 ? var_2 : 65533)))))));
        var_21 = 896703214;
    }
    #pragma endscop
}
