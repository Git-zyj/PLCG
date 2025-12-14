/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (min(var_15, ((max(((max(((max((arr_0 [i_0]), (arr_1 [i_0])))), (max(65535, 9782))))), var_9)))));
        var_16 = (max(var_16, (((+(max((!21), 1369335054)))))));
        arr_2 [i_0] [i_0] = ((((max(1, 2147483647))) ? 2925632235 : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_17 = (max((((3647397174 ? 1 : (arr_3 [i_1])))), (max(-838254471139877983, 2925632250))));
        var_18 += (arr_5 [i_1]);
    }
    var_19 += (max(var_9, ((228 ? 1 : 1))));
    var_20 = (((~-var_0) * var_2));
    #pragma endscop
}
