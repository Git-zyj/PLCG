/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_1, ((var_11 ? var_13 : var_1))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_4 [6] [4] [i_1] |= var_0;
            arr_5 [10] [18] [8] &= ((var_1 ? ((var_5 ? var_13 : var_12)) : var_5));
            arr_6 [i_0] [i_0] [i_0] = var_6;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] = ((var_9 ? (max((~var_2), ((max(var_4, var_5))))) : var_12));
            arr_10 [6] [12] &= var_12;
        }
        var_15 = var_1;
        var_16 = (min((((((var_8 ? var_1 : var_13))) ? (~var_9) : var_9)), (max(var_11, ((max(137, var_5)))))));
        arr_11 [i_0] [i_0] = (min((!var_6), (max((((var_6 ? var_8 : var_10))), ((var_10 ? var_8 : var_2))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_21 [i_0] [i_0] [i_5] = (!97);
                        arr_22 [i_0] [i_0] [i_3] [i_4] [i_4] [i_4] = var_4;
                    }
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 16;i_6 += 1)
    {
        var_17 += (min(var_10, var_9));
        arr_26 [i_6] = var_7;
    }
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        arr_29 [i_7 - 2] = var_11;
        arr_30 [i_7] [i_7] = (max((max(((max(var_1, var_6))), (min(var_3, var_4)))), var_11));
        var_18 += (min(var_1, (((!((max(var_9, var_3))))))));
    }
    #pragma endscop
}
