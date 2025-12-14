/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_1 ? var_7 : ((var_12 ? var_4 : var_9)))) ^ var_2));
    var_14 = (max(var_14, ((min((((((6023293940339327694 ? 28535 : -5))) ? ((var_10 ? var_9 : var_11)) : var_10)), (max(((var_10 ? var_5 : var_0)), var_10)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min((((var_11 ? var_11 : var_11))), (max(((min(var_11, var_12))), ((var_1 ? var_7 : var_5))))));
        var_15 = (((var_10 || var_8) ? ((var_1 ? var_11 : (max(var_8, var_7)))) : (((var_3 ? var_12 : var_12)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_1] = (max((((var_2 ? var_2 : var_11))), ((var_10 ? var_10 : var_5))));
                    var_16 = ((((((var_2 ? var_4 : var_7)) * var_0))) ? ((((((var_12 ? var_5 : var_4))) ? ((var_2 ? var_10 : var_8)) : ((var_8 ? var_6 : var_11))))) : ((var_3 ? (((var_6 ? var_6 : var_8))) : ((var_6 ? var_5 : var_9)))));
                }
            }
        }
        arr_11 [i_0] = (((((var_12 & var_12) ? ((var_9 ? var_9 : var_5)) : (((667933205 ? 3932160 : 0))))) <= var_0));
    }
    #pragma endscop
}
