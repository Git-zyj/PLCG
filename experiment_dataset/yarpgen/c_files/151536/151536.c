/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((((var_5 + var_9) % (max(var_10, var_6))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_12 = var_1;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] = (((var_8 * var_2) % (var_2 > var_1)));
                            var_13 = (var_9 | (var_8 | 27145));
                            arr_16 [i_0] [i_1] [i_0] [11] = (((var_4 <= var_9) | (var_0 ^ var_0)));
                        }
                        var_14 = (((((31457280 ^ (min(var_9, var_2))))) & (var_4 ^ var_10)));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_15 = var_10;
                        var_16 = var_8;
                        arr_19 [i_0] = var_4;
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_1 - 2] [i_2] [2] [i_2] = var_7;
                        var_17 += ((min(4272459358, var_10)));
                        var_18 = (max(var_18, var_8));
                    }
                    var_19 += var_4;
                    arr_23 [i_0] = max(var_10, ((((var_1 - var_0) || var_5))));
                }
            }
        }
    }
    var_20 &= (max(1, var_7));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_34 [i_7] [i_7 - 1] [i_7] [i_10] = (max(var_10, ((((var_5 | var_9) <= (var_4 / var_9))))));
                            arr_35 [i_10] [i_10] [i_10] = var_8;
                            arr_36 [i_10] [15] [i_9] [i_10] = ((min((var_9 < var_8), var_0)));
                            arr_37 [10] [3] [i_10] = var_5;
                        }
                    }
                }
                var_21 *= var_2;
                arr_38 [i_7] = 4263510026;
            }
        }
    }
    #pragma endscop
}
