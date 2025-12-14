/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(var_12, (~var_8)))) ? -21 : var_13));
    var_19 = (max(var_19, var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (185329236 < -185329236);

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [i_1] = (arr_3 [i_1] [i_1 - 1] [i_1]);
            var_20 = (max(var_20, ((-28985 || (467951724 == -185329237)))));
            var_21 = var_9;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_3] [i_3] = (-116 || var_2);
                        arr_12 [i_2] [i_1 - 1] [i_1] [1] [i_0] = ((~(arr_6 [i_1] [i_1 - 1])));
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_22 = (((arr_13 [i_4] [i_4] [i_4 - 1]) ? (((arr_1 [13]) * var_13)) : (arr_7 [i_0] [i_0] [i_0])));
            var_23 = (((((~(arr_1 [i_0])))) ? ((var_2 ? -6 : (arr_8 [12]))) : (-81 < var_1)));
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            arr_19 [i_0] = (arr_4 [i_0] [i_5 - 1]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 14;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            var_24 = ((-1316536059 || (((139 ? -467951724 : 478158245)))));
                            var_25 = (arr_24 [i_0] [i_0] [i_8 - 1] [i_7] [i_8 - 1]);
                            arr_26 [2] [i_5] [9] [i_7] = ((~((((arr_18 [i_0]) || (arr_18 [i_0]))))));
                        }
                        arr_27 [i_0] [i_0] [i_0] [i_7] [i_7] = (-185329237 < 116);
                    }
                }
            }
            arr_28 [i_5] [10] [i_5 - 1] = (arr_4 [i_5 - 1] [i_5 - 1]);
            var_26 += ((!(arr_23 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
        }
    }
    #pragma endscop
}
