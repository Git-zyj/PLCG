/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_14;
    var_21 |= (min((((min(-90, var_1)) & -90)), ((max((var_17 & var_8), var_4)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] &= var_4;
        var_22 = -1;
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        var_23 -= var_4;
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_24 = (min((((((var_12 ^ (arr_5 [i_1] [5]))) & (arr_5 [i_1 - 1] [6])))), (((arr_6 [i_1] [2] [8]) * (!21)))));
                        var_25 = ((((var_13 ? (-91 ^ var_3) : (var_5 % -66))) ^ var_19));
                        var_26 = arr_4 [i_1 + 2];
                    }
                }
            }
        }
    }
    var_27 *= var_19;
    #pragma endscop
}
