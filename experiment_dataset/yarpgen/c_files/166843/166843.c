/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((-14346 | ((max(var_8, (var_9 || 1))))));
    var_11 = min(((~(max(var_2, var_8)))), ((max(-5727033018636546436, -5082601083085358964))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] = var_6;
                            var_12 = (min(((-(arr_9 [i_3 + 1] [i_3 + 2] [i_1] [i_3 - 2] [i_3 - 1] [1]))), (arr_8 [i_1])));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 18;i_4 += 1)
                            {
                                var_13 = (((arr_2 [i_1] [i_1] [i_1]) != ((60779 ? (arr_2 [i_1] [i_3 - 2] [i_1]) : (arr_9 [i_0] [i_1] [i_1] [i_3 - 2] [i_2] [i_2])))));
                                arr_13 [2] [i_1] [i_2] [i_3] [i_0] |= (((((arr_8 [i_0]) + 2147483647)) >> (var_9 - 4020454299)));
                                var_14 *= var_2;
                            }

                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_15 = (max((((var_4 * var_8) ? ((max((arr_12 [i_0] [i_0] [i_0] [i_2] [i_3 - 2] [i_5] [i_5]), (arr_2 [i_0] [17] [i_1])))) : (arr_14 [5] [i_3 - 2] [i_2] [0]))), (((((arr_8 [i_1]) | var_4)) | (arr_3 [i_1] [i_1])))));
                                arr_16 [i_0] [20] [i_2] [i_3] [16] [i_1] [i_5] = (max((!1619562072356823950), ((((var_1 || (arr_5 [i_0] [i_0] [i_0]))) || ((((arr_12 [i_5] [i_3] [i_3 + 2] [i_2] [i_1] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_5 [i_1] [i_1] [i_0]))))))));
                                arr_17 [i_0] [16] [i_0] [i_1] [i_0] [i_0] [i_0] = (max((var_7 != 115), -var_1));
                                arr_18 [i_0] [13] [i_1] [i_3 - 1] [i_1] = (~var_9);
                            }
                            arr_19 [i_1] = (arr_14 [i_3] [i_3] [i_3] [i_3]);
                        }
                    }
                }
                var_16 = (min(var_16, ((max((((var_8 + var_8) < var_4)), (min((arr_5 [i_0] [i_0] [12]), (!8482286034751518277))))))));
            }
        }
    }
    #pragma endscop
}
