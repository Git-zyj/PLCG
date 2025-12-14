/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((max(var_9, ((-(~var_3))))))));
    var_12 = ((!(((((min(var_6, var_4))) + var_10)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((~(arr_2 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_3] [i_3] [i_3] [i_3] [i_3] &= (-2046014808 ? (4086549971 || -8770964330114681675) : (arr_2 [i_1 + 2] [i_2]));
                        var_13 = ((arr_11 [i_3 - 3] [i_1 + 2] [i_2] [i_3] [i_0]) * var_0);
                        var_14 = (((arr_9 [i_1] [i_3] [i_3] [i_3] [i_3 - 1]) && 49));

                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            var_15 = (min(var_15, var_3));
                            var_16 *= ((((((arr_8 [i_3]) <= var_8))) - (arr_5 [i_3])));
                            var_17 = (arr_13 [i_1 + 2] [i_3 - 1] [i_3 - 3] [i_4 - 1] [i_4]);
                            var_18 = -9372152759024583368;
                            arr_17 [i_2] [i_2] [i_2] [i_0] [10] = var_5;
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_19 = (arr_1 [i_2] [1]);
                            var_20 = ((-(arr_2 [i_1 + 1] [i_3 + 1])));
                            arr_20 [i_0] [i_0] [i_2] = (arr_0 [i_0]);
                            var_21 = ((var_7 + (arr_11 [i_0] [6] [i_2] [i_1] [i_0])));
                            var_22 = (((var_8 >= 63664) <= var_7));
                        }
                        arr_21 [i_0] [i_0] [i_0] [i_0] = (arr_13 [0] [0] [i_3 - 3] [i_3 + 1] [i_3]);
                    }
                }
            }
        }
        var_23 = ((-119 ? -1029075627 : 9074591314684968247));
    }
    #pragma endscop
}
