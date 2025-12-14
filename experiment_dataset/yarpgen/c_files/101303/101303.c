/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_0 ? var_15 : -var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((~(arr_1 [i_0])));
                    var_20 = (max(var_20, var_14));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [1] [i_0] [1] [i_4] [i_1 + 2] = (min(((((~var_7) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : 7567963842891745637))), var_15));
                                var_21 = ((((((10030607737409788300 < var_6) ? (arr_13 [i_0] [i_4] [6] [i_0] [9]) : (((var_4 ? var_10 : var_3)))))) ? (((((((max(1, (arr_11 [i_0] [i_1] [i_0] [i_4]))))) <= 0)))) : ((-7567963842891745636 ? (max(var_15, var_10)) : (((max(-2, var_4))))))));
                                var_22 = ((~(((arr_7 [i_3 + 1]) ? (((56253 ? (arr_11 [i_1] [i_2] [i_2] [i_4]) : var_7))) : (arr_14 [i_0] [i_1 - 2] [i_2] [i_3] [i_4] [i_3 + 1])))));
                            }
                        }
                    }
                    var_23 = (((((55 ? var_4 : (arr_11 [i_0] [i_1 - 2] [i_2] [i_1 - 2])))) <= (((7567963842891745632 ? ((var_3 ? 127 : var_18)) : (((arr_3 [i_0] [i_0]) ? (arr_12 [i_0] [i_1] [i_1 - 2] [i_1]) : -7567963842891745632)))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_24 += 12011907654977140300;
        var_25 = ((((max((arr_16 [i_5]), var_8))) ? 305852544140994097 : (arr_17 [i_5])));
    }
    #pragma endscop
}
