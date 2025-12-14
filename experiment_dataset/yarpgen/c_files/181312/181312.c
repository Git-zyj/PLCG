/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((~(1 + var_8))), var_4));
    var_12 = (min(var_12, ((var_7 ? var_4 : (((((var_0 ? var_2 : var_4))) ? (~1) : var_8))))));
    var_13 = (var_10 == (var_5 >= var_7));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((1 ? (arr_1 [i_0]) : ((min((arr_1 [i_0]), (arr_1 [i_0]))))))) ? ((-((var_7 ? (arr_0 [i_0]) : 9)))) : ((min(1, var_9)))));
        arr_3 [i_0] = 0;
        var_14 = (arr_0 [i_0]);
        var_15 += ((((max(((1769018387 ? var_3 : 1)), 1))) ? (min((((1635906567 >= (arr_0 [i_0])))), (((arr_1 [1]) ? -1411629886 : var_7)))) : (arr_1 [2])));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = ((min((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1]))) ^ (((min(2525948909, (arr_1 [i_1]))) * (min((arr_0 [i_1]), (arr_5 [1]))))));
        var_16 = (arr_5 [i_1 - 1]);
    }
    #pragma endscop
}
