/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_1);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = var_10;
        var_14 = min((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))), ((max(var_4, var_11))));
        arr_3 [i_0] = ((((-1017902346 / (-9223372036854775807 - 1))) == ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
        arr_4 [i_0] = arr_2 [i_0];
    }
    #pragma endscop
}
