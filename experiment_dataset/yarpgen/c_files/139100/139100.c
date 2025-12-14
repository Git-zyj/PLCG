/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (min(var_11, ((min((((~var_5) ? ((((arr_2 [14] [i_0]) ? var_6 : (arr_1 [7])))) : (min(22819, var_9)))), ((var_9 ? ((var_9 - (arr_1 [i_0]))) : var_5)))))));
        arr_3 [i_0] = 22819;
        arr_4 [i_0] = ((max((arr_1 [i_0]), var_7)));
        var_12 = (min(var_12, (((~((((var_0 >> (((arr_2 [1] [i_0]) + 1426716653)))) << (((min((arr_2 [16] [i_0]), var_5)) - 274827490)))))))));
    }
    var_13 = ((((((((-1 ? -1 : 15301517255059664374))) ? ((max(var_10, var_7))) : (!794612156)))) ? (((var_7 ? var_7 : ((max(var_7, var_3)))))) : var_6));
    #pragma endscop
}
