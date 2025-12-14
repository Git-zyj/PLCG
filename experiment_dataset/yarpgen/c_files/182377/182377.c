/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_1] = (arr_1 [i_0]);
            var_15 = (max(var_15, (arr_3 [i_0] [i_0] [i_0])));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            arr_8 [14] [i_2 - 2] = (((arr_0 [i_2 + 1] [i_2]) ? (arr_7 [i_2 - 1] [i_2]) : (arr_3 [i_2 - 1] [i_2 - 1] [i_0])));
            var_16 = ((((max((((arr_2 [i_2]) ? (arr_7 [i_0] [i_2]) : -17)), (arr_3 [i_0] [i_0] [i_0])))) ? (arr_7 [i_2] [i_0]) : -var_5));
        }
        arr_9 [i_0] = (arr_2 [i_0]);
        var_17 = (min(var_17, ((((arr_7 [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0]))))));
        arr_10 [i_0] = 12407969294749448128;
    }
    var_18 = (max(var_18, 88));
    #pragma endscop
}
