/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = (max(((-(arr_2 [i_0] [i_0]))), (arr_2 [i_0] [i_0])));
        var_11 = (arr_2 [i_0] [i_0]);
        var_12 = (min((min((min((arr_2 [i_0] [i_0]), (arr_1 [i_0]))), var_5)), ((((((arr_2 [i_0] [i_0]) ? 24 : (arr_0 [7])))) ? ((-276017133 ? (arr_0 [i_0]) : var_9)) : (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = (max((((!var_5) ? (arr_0 [i_0]) : 5955029233046789008)), (((((min(var_4, 12491714840662762607))) ? var_1 : (arr_1 [i_0]))))));
        arr_4 [i_0] = (min(((((((arr_0 [15]) / (arr_1 [i_0])))) ? (!0) : var_3)), (max((arr_0 [i_0]), (max((arr_2 [i_0] [i_0]), var_4))))));
    }
    var_13 = var_4;
    var_14 = var_4;
    var_15 = var_5;
    #pragma endscop
}
