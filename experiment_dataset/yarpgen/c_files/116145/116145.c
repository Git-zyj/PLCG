/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_9;
    var_18 = ((((((var_16 ? 1 : var_12)))) + ((var_0 - (max(var_0, 0))))));
    var_19 = (((var_6 - var_9) ? (((((var_8 ? var_9 : var_1)) << ((((var_12 ? var_11 : var_0)) - 18446744073709539614))))) : var_0));
    var_20 &= var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2 - 1] [i_0] = (var_4 % var_1);
                    arr_9 [11] [i_2] [11] [i_1] = ((-(arr_4 [i_2 + 1] [9] [9])));
                }
            }
        }

        for (int i_3 = 4; i_3 < 13;i_3 += 1)
        {
            var_21 = (min(var_21, (((((((arr_4 [i_0] [0] [0]) % -4575413186019691005))) ? var_1 : var_9)))));
            arr_13 [i_0] [10] = (var_3 ? var_12 : var_4);

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_22 = (min(var_22, (!var_6)));
                var_23 = var_15;
                arr_18 [i_0] [i_0] [i_0] = var_5;
                arr_19 [12] [i_3 - 3] [i_4] = ((-(arr_15 [i_3 + 1] [i_3] [i_4] [i_4])));
                arr_20 [6] [6] [6] [6] = (arr_1 [i_3 + 1]);
            }
        }
        arr_21 [i_0] = var_0;
        arr_22 [i_0] = var_15;
    }
    #pragma endscop
}
