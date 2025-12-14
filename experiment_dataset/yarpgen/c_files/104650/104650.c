/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = var_4;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_22 = (arr_8 [i_0] [i_1] [i_2]);
                    var_23 |= (((((arr_4 [i_2]) != 0)) ? (((1 - (arr_1 [i_0] [i_0])))) : ((var_15 + (arr_3 [i_1] [i_2])))));
                }
            }
        }
        arr_9 [i_0] [i_0] = ((255 > (min(-23, (13 - 692312460)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_24 += (arr_10 [i_3]);
        var_25 = (arr_10 [i_3]);
    }
    #pragma endscop
}
