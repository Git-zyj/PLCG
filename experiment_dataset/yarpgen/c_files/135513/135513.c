/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!((min(-45, (-16384 / var_1)))));
    var_15 = (max(var_15, var_10));
    var_16 = (1 || -65);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_2] = (arr_10 [i_1] [10]);
                        var_17 ^= (((-305109783 ? var_13 : (arr_9 [i_2] [i_2] [i_2] [i_2] [i_2 - 1]))));
                    }
                    var_18 = ((min(63, (arr_4 [i_2 + 1] [i_2 - 1] [i_2 + 1]))));
                    var_19 = ((arr_2 [i_2 - 1] [i_2 - 1] [2]) ? (((((arr_5 [9] [i_0]) ? var_0 : var_1)) * (arr_6 [0] [0] [i_2] [i_2 + 1]))) : (arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 1]));
                }
            }
        }
    }
    var_20 = var_4;
    #pragma endscop
}
