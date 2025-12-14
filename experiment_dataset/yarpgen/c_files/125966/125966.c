/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((7736505941569271080 | ((((!(((var_0 ? var_11 : var_9)))))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_17 = (arr_1 [i_0]);

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0] = (((-(arr_2 [i_1] [i_0]))));
            var_18 = (((((var_3 ^ (arr_0 [i_0])))) ? (((arr_5 [i_1 - 3]) % (var_5 & var_11))) : var_3));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = var_1;
                        var_19 = ((-(!var_15)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                {
                    arr_21 [i_6] [i_6] [i_6] = ((5308471829650553044 ? (arr_15 [i_6 + 2] [i_4 - 2]) : var_8));
                    var_20 = (var_13 ^ -var_1);
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_21 = -var_2;
                                var_22 = ((~(arr_20 [i_7] [i_6 - 1])));
                                arr_27 [i_4] [i_5] [i_6] [i_7] [i_8] = 21162;
                                var_23 = ((var_14 ^ (arr_22 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])));
                            }
                        }
                    }
                    arr_28 [i_6] [i_5] [i_6] = var_9;
                    arr_29 [i_6] = arr_17 [i_4] [i_5];
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 18;i_10 += 1)
            {
                {
                    var_24 = (((arr_18 [i_4] [i_4 - 3] [i_10] [i_10]) ? (arr_18 [i_4] [i_4 - 1] [i_10] [i_10]) : (arr_18 [i_4] [i_4 - 1] [i_9] [i_9])));
                    arr_35 [i_9] = 5308471829650553044;
                    arr_36 [i_9] [i_9] [i_9] [i_9] = (arr_23 [i_10] [i_10] [i_9] [i_10]);
                }
            }
        }
        arr_37 [i_4] [i_4] = 40;
    }
    var_25 = ((!((((-5308471829650553044 + 9223372036854775807) << (7140664680124463546 - 7140664680124463546))))));
    #pragma endscop
}
