/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((var_3 ? var_10 : var_0));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = -var_6;
            arr_9 [i_0] = (((((var_2 ? var_9 : var_2))) ? ((var_1 ? var_5 : 16848)) : var_5));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_2] = ((-((var_4 ? var_9 : var_2))));
                        var_11 = var_2;
                    }
                }
            }
            arr_15 [i_0] [i_0] = var_3;
        }
        arr_16 [8] [8] |= (((((var_4 ? 63 : var_4))) ? var_4 : (((-3683852032634711745 ? var_3 : var_6)))));
        var_12 = (max(var_12, (((var_3 ? var_1 : -16835)))));
        arr_17 [i_0] = var_1;
    }
    var_13 &= (max((min((min(var_1, var_9)), -16848)), (((((min(var_7, var_9))) ? -var_6 : var_10)))));
    var_14 = ((!(((((max(212, var_2))) ? ((var_6 ? var_7 : var_6)) : ((max(var_6, var_2))))))));
    var_15 = ((-(min(-var_8, var_3))));
    var_16 &= var_6;
    #pragma endscop
}
