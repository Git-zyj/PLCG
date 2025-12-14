/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(1579853140, (((-((-1 ? -5 : 65535)))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [17] = 15;
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) == var_0));
        var_13 = (max(var_13, var_6));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] = (max(((23539 ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))), (((arr_6 [i_1]) ^ (arr_4 [i_1] [i_1])))));
        var_14 = ((((((arr_6 [i_1]) ? (arr_6 [i_1]) : 33554431))) ? ((-(((arr_5 [i_1] [i_1]) ? var_9 : 1429885396)))) : var_9));
    }
    #pragma endscop
}
