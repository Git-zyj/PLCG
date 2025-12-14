/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] |= (arr_1 [i_0]);

                    for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_18 += var_13;
                        var_19 ^= (106 ^ 53);

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            var_20 = ((~(arr_9 [5] [i_1] [i_2] [i_2])));
                            arr_13 [i_1] = (1 / 53);
                        }
                        var_21 = (max(var_21, ((((((-((((arr_3 [i_0]) != var_8)))))) - (max((arr_11 [i_3 - 1]), (arr_11 [i_3 + 3]))))))));
                        arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] = (max(111, 57));
                    }
                    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_22 = (((71 | var_14) <= (!71)));
                        var_23 = ((53 >= (arr_16 [i_1] [i_5 + 3] [i_5 + 2] [i_5 + 1] [i_5] [i_1])));
                        var_24 = min(var_1, (arr_8 [i_0] [i_1]));
                        var_25 &= (~-var_7);
                    }
                    var_26 &= var_16;
                }
            }
        }
    }
    var_27 -= ((-var_0 ? var_12 : (((var_7 ^ (!110))))));
    var_28 = ((((((2147352576 ? var_15 : var_14)))) != var_6));
    #pragma endscop
}
