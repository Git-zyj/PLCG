/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_14 = min(((min(var_10, 242))), (234881024 - -234881024));
        var_15 = (((var_6 % -234881023) ? var_9 : (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 2]) : var_9))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 = (max((((((-(arr_2 [i_1] [i_1])))) ? var_5 : (arr_0 [i_1]))), (((-2034270126873827190 ? (max(-423498186, (arr_3 [i_1]))) : 113)))));
        var_17 = (min(var_17, ((min((arr_3 [i_1]), 15)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_18 = (((arr_3 [i_1]) < var_10));
                    var_19 += ((var_7 == (max((arr_0 [i_1]), (((1846110405350012106 >= (arr_5 [i_3]))))))));
                }
            }
        }
    }
    var_20 &= var_8;
    #pragma endscop
}
