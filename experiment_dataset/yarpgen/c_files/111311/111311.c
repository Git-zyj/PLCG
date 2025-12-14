/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((min(var_8, var_8)), var_7));
    var_11 = (max(((max(0, 1))), (min(var_5, var_9))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = ((min(((max(32549, 0))), 10926085707707994420)));
        arr_5 [i_0 + 1] [i_0] = (min((max(3575290991, (min(7520658366001557195, 18446744073709551615)))), (((min((arr_1 [i_0]), var_4))))));
        var_12 = ((min(-var_8, ((~(arr_1 [i_0]))))));
        var_13 = (min(var_13, (((max(((min((arr_1 [i_0]), var_1))), (arr_2 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_14 = (max(var_14, (arr_6 [i_1])));
        var_15 |= ((!((max((min(var_6, (arr_7 [i_1] [i_1]))), ((min((arr_6 [i_1]), var_5))))))));
    }
    #pragma endscop
}
