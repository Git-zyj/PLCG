/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((-(((1 ^ 0) ? ((-4312553193952057584 ? var_5 : var_6)) : var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 -= (((((((min((arr_3 [i_1]), var_5))) ? (((((arr_1 [i_2]) <= 0)))) : (var_3 % -1)))) ? (((1 ? 1 : 1))) : ((-(arr_0 [i_2] [i_1])))));
                    var_12 = ((((1 ? var_9 : (arr_5 [i_0] [i_1] [i_0]))) == (((145 ? 51 : 200)))));
                    var_13 = (max(var_13, var_7));
                }
            }
        }
    }
    #pragma endscop
}
