/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_12, (112 && var_10)));
    var_14 = 23;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = arr_0 [i_0];
        arr_5 [i_0] = ((232 ? 41 : 35));
        var_15 = (max(var_15, ((min((((var_4 != (arr_1 [8] [i_0])))), (arr_2 [i_0] [i_0]))))));
    }
    var_16 = (((((var_4 ? (!var_8) : (!62417)))) ? ((var_6 ? (147 >= 73) : 121)) : -var_12));
    #pragma endscop
}
