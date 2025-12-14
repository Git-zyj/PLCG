/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (0 >= 22397)));
    var_12 = (min(var_12, (((((((var_6 && (!var_8))))) ^ (((max(var_8, var_5)) | (var_7 + -32763))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (min(((((arr_2 [i_0]) == 72))), (((arr_2 [i_0]) * (arr_2 [i_0])))));
        var_14 = ((+(((arr_0 [12] [i_0]) ? (((arr_0 [i_0] [i_0]) - (arr_1 [3]))) : ((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0]))))))));
        var_15 = (((max((arr_0 [i_0] [i_0]), (arr_2 [i_0]))) <= (max((arr_2 [i_0]), (min((arr_0 [i_0] [0]), (arr_0 [12] [12])))))));
        var_16 = (21 | 1858738505792907722);
    }
    #pragma endscop
}
