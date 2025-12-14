/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += 117;
    var_11 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = (arr_11 [i_0] [i_1] [i_2] [i_0] [i_4] [i_3] [10]);
                                var_13 = (max(var_13, ((((((arr_7 [i_4 - 4]) == (arr_10 [i_4 - 2] [i_1] [i_2] [i_3]))) ? ((((var_8 % -119) != var_3))) : var_8)))));
                                arr_13 [i_0] [i_1] [17] [i_3] [11] [i_0] [i_1] = (((arr_6 [i_2]) ? (!var_4) : var_0));
                            }
                        }
                    }
                    var_14 = (108 / (1 % var_5));
                    var_15 = ((((((!(((var_4 ? -125 : var_7))))))) ^ (((arr_0 [i_1] [i_2]) / (((max(var_3, var_0))))))));
                }
            }
        }
    }
    var_16 = ((!((((((var_5 ? var_0 : var_9))) ? var_4 : var_4)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 7;i_8 += 1)
                    {
                        {
                            arr_25 [i_5] [i_6 - 2] [i_8] [i_8] |= (!-7243);
                            var_17 = (((8796093022207 - -18) << (((max(((max(92, (arr_6 [2])))), var_7)) - 4294967276))));
                            var_18 = var_3;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 7;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            arr_30 [i_10] [i_5] [i_6] [i_9] [i_5] [i_5] = ((var_2 != (arr_29 [i_5] [i_5] [i_9 + 1] [i_10])));
                            var_19 = (((arr_8 [i_6 + 2] [i_6] [i_6 + 2]) >> (117 - 93)));
                            arr_31 [i_5] [i_5] [i_5] [i_5] [5] [i_10] = ((((min((arr_10 [i_6 - 3] [i_6 - 3] [i_9] [i_9 + 4]), (arr_10 [i_6 + 2] [i_6] [i_9] [i_9 - 1])))) - -var_2));
                            var_20 = (((((max(var_4, (arr_11 [i_10] [i_9] [18] [19] [i_5] [i_5] [i_5]))) > 1))) ^ var_9);
                            var_21 = (((((arr_12 [i_6 - 1] [i_6] [i_6 - 3] [17] [i_6] [i_6 + 1] [i_9 - 1]) ? (arr_12 [0] [i_6 - 2] [i_6 - 3] [i_6 - 2] [i_6] [1] [i_9 - 1]) : var_4)) ^ (((max(var_3, (arr_12 [i_5] [i_5] [i_6 - 3] [i_6] [i_6 - 2] [i_9] [i_9 - 1])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
