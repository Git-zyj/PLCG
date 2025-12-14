/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((3353622986185331195 << (165 > var_4)))) ? ((var_0 << (var_1 - 2827835151519414354))) : ((((var_5 == 0) && -24)))));
    var_14 = ((var_7 ? var_9 : 0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_15 -= ((var_6 << ((((var_2 ? (arr_1 [i_0]) : var_5)) - 3614928150))));
        arr_3 [i_0] [i_0] = ((-26403 ? var_7 : 4));
        arr_4 [i_0] = var_12;
        arr_5 [i_0] = 21;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            {
                var_16 ^= ((~((max((arr_9 [i_1]), var_10)))));
                arr_10 [i_2] [i_1] [i_2] = -var_6;
            }
        }
    }
    #pragma endscop
}
