/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] |= max(((max(-642734300, -var_8))), (min(26, 20)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_2] = 65528;
                    arr_11 [i_2] [i_1] [i_1] [i_1] = 27;
                    arr_12 [i_2] [i_2] = var_7;

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_15 [i_0] [i_2] [0] [i_0] [i_0] [i_0] = 20;
                        arr_16 [i_2] [i_1] [i_2] [i_1] [i_1] [i_2] = 8904691511380246066;
                        var_15 |= (((65531 ? var_10 : var_0)));
                        arr_17 [i_2] [i_2 + 2] [i_2] = (arr_13 [i_2]);
                        arr_18 [i_0] [i_0] [i_1] [i_2] [i_3] = (min((arr_1 [i_1]), var_3));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_16 ^= var_10;
        var_17 = 4;
        arr_22 [i_4] [i_4] = var_7;
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_18 = (max(((var_0 + (arr_25 [i_5] [i_5]))), (arr_24 [i_5])));
        var_19 *= var_8;
        arr_26 [i_5] [i_5] = 1268289629;
        var_20 = (((-(arr_25 [i_5] [i_5]))));
        var_21 = ((((arr_25 [i_5] [i_5]) | 536870911)));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_29 [i_6] = (min(32743, (~1)));
        var_22 = (min(var_22, ((((((arr_25 [12] [i_6]) ? (arr_25 [1] [i_6]) : (arr_25 [18] [i_6]))) | (~46283))))));
        arr_30 [i_6] = (arr_28 [i_6]);
    }
    var_23 = (!var_0);
    #pragma endscop
}
