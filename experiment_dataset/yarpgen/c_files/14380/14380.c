/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min((!var_1), ((var_9 ? var_4 : 2707937893)))) - (((!-28) ? (((var_6 << (var_1 - 83)))) : var_8))));
    var_14 = (var_2 < var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = var_2;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_16 = 18023645687995128343;
                    var_17 = ((((arr_3 [i_0]) - var_0)));
                }
                arr_6 [i_0] [i_1] = ((((((arr_0 [i_0]) ? ((119 ? var_7 : -3687005215877677636)) : 2707937904))) ? 2361053124955970723 : (((((max((arr_3 [i_0]), (arr_0 [10])))) ? (arr_3 [i_1 - 3]) : (arr_3 [6]))))));
            }
        }
    }
    var_18 = (!16085690948753580893);
    var_19 = ((var_10 + (min(var_5, (max(var_4, var_0))))));
    #pragma endscop
}
