/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(!var_0)));
    var_21 = (min(var_21, var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_22 += (((var_18 ? (arr_2 [i_0] [0]) : (arr_2 [i_0] [i_0]))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_23 = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_4 [i_1] [i_0] [i_0])))) ? var_14 : 19));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] |= 84;
                            arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((((!(arr_10 [i_3] [i_1] [i_2] [i_3])))) / ((7 ? var_9 : var_3))));
                            var_24 = -85;
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_18 [1] [i_5] [i_5] |= (((arr_16 [3] [3] [i_0]) ? (arr_10 [i_5] [i_5] [i_0] [i_0]) : -101));
            var_25 = (arr_8 [i_0] [i_5] [6] [i_5]);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_26 = ((!(arr_0 [i_0])));
                            var_27 |= (((arr_21 [i_7] [i_7 - 2] [i_7 - 2] [i_7 - 2]) ? ((((!(arr_21 [i_8] [i_5] [i_6] [6]))))) : var_1));
                            var_28 *= (arr_13 [i_0] [i_7 - 2] [i_8 - 1] [i_7] [i_8 - 1] [i_8 - 1]);
                        }
                    }
                }
            }
        }
        var_29 = (min(var_29, (((var_18 ? (arr_7 [i_0]) : ((1 % (arr_7 [i_0]))))))));
        arr_25 [i_0] = var_0;
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 20;i_9 += 1)
    {
        var_30 = 78;
        arr_28 [i_9 + 1] = (77 - (!100));
    }
    #pragma endscop
}
