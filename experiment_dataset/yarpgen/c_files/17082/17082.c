/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_10 = (max(var_10, ((max((arr_0 [1] [i_0 + 1]), (arr_0 [i_0] [i_0]))))));
        var_11 = (((min(-1, (arr_1 [3] [i_0]))) != (~105)));
        arr_2 [i_0] = (max(((+(min((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))), (((((~(arr_1 [i_0] [11]))) * -65535)))));
    }
    var_12 ^= var_6;
    var_13 = (min((((150 <= var_1) >> (!var_1))), ((min(177, (var_7 && var_1))))));
    var_14 = ((max(var_9, 0)));
    var_15 = (max(var_15, ((((!var_2) / ((var_1 ? (127 || var_9) : var_7)))))));
    #pragma endscop
}
