/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (var_7 == var_6)));
    var_11 = (min(var_11, (((var_1 ? var_5 : ((-15 ? var_4 : var_5)))))));
    var_12 = ((~((var_2 ? -4096 : var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (max(var_13, 16));
                var_14 = (max(((((max((arr_1 [i_0] [i_0]), var_0))) ? (arr_0 [i_0]) : (((arr_2 [i_0] [i_1] [i_1]) ? (arr_5 [i_0] [i_0] [i_0]) : 10012017197592022408)))), ((min(1, 1)))));
                arr_6 [i_1] [i_0] [i_1] = -1010931019485369208;
                var_15 *= ((~((((((arr_5 [i_0] [i_0] [i_1]) ? (arr_3 [i_0]) : (arr_5 [i_0] [i_0] [i_0]))) < (((-(arr_5 [i_0] [i_0] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
