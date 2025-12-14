/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((var_12 - var_0) + var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((var_2 ? (arr_0 [i_0]) : (arr_4 [i_0] [i_0]))) > var_10));
                var_18 = (max(var_18, (min((((!(((var_10 ? (arr_1 [i_0]) : var_0)))))), ((((max((arr_5 [i_1] [i_1] [i_1 - 4]), (arr_2 [i_0] [i_0])))) ? (arr_0 [i_1]) : (((min((arr_4 [i_1] [i_1]), 55693))))))))));
                arr_7 [i_0] = -var_10;
            }
        }
    }
    var_19 = var_10;
    #pragma endscop
}
