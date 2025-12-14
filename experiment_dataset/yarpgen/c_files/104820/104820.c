/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = 61013;
        var_13 += (arr_0 [i_0]);
    }
    var_14 = var_9;
    var_15 = (((((-var_11 ? ((max(var_1, 60999))) : 61033))) ? var_4 : (((-(min(var_5, var_8)))))));
    var_16 = ((-(var_4 > -var_8)));
    #pragma endscop
}
