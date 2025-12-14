/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [14] [i_1] [i_2] = (max((max(-18916, (arr_3 [i_0] [i_1 - 1] [i_0]))), 249));
                    var_19 = (max(var_19, (((((!(17 == var_10))) ? var_10 : (!28109))))));
                    var_20 = (min(var_20, ((((max(var_10, var_7))) ? (((~(arr_0 [i_1 + 1])))) : (max((arr_2 [i_0 - 1]), var_3))))));
                }
            }
        }
    }
    var_21 = (min(var_21, ((((min((var_14 / 41), (min(var_2, -43))))) ? var_10 : ((var_14 ? (min(var_4, 4053)) : -var_11))))));
    #pragma endscop
}
