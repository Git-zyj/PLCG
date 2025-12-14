/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (min(var_3, var_10));
                    var_19 = (max(var_19, ((((!(((2991381570877358872 ? 15455362502832192734 : 15455362502832192735)))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((((((var_4 ? var_3 : 64958))) ? var_0 : (~var_1))));
                }
            }
        }
        var_20 += (((((min(var_13, (arr_7 [i_0] [i_0] [i_0] [i_0]))) + var_11))) ? (((65535 ? (!-817763710) : var_2))) : (((arr_4 [i_0] [i_0]) ? var_9 : (~var_12))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_12 [i_3] = (((((min(var_9, (arr_2 [7]))))) + (min((((1 ? var_5 : var_18))), (max((arr_2 [i_3]), var_4))))));
        arr_13 [i_3] [i_3] = var_0;
    }
    var_21 = ((~((-(~2991381570877358872)))));
    #pragma endscop
}
