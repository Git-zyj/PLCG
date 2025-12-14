/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_17 *= ((((+((((arr_1 [1] [i_0 + 2]) != var_2))))) >= (arr_0 [i_0])));
        arr_2 [i_0 + 2] = (((arr_1 [i_0 - 3] [i_0]) | (arr_0 [i_0 - 2])));
        arr_3 [i_0] = ((-((-(arr_0 [7])))));
        arr_4 [i_0] = ((((((((arr_0 [i_0]) || var_10))) / ((~(arr_1 [i_0 - 3] [i_0])))))) || (((((((arr_0 [i_0 + 2]) ? var_4 : (arr_0 [i_0 + 1])))) ? (((min((arr_0 [i_0]), var_2)))) : (((arr_1 [i_0] [i_0]) ? var_11 : var_4))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [i_1 + 3] [i_1] [i_2] [i_0] = var_12;
                    arr_10 [i_2] [i_1] [i_0 - 1] = ((~(((!((min(var_2, var_16))))))));
                    var_18 = (max(var_18, var_4));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_2 - 4] [i_2 - 3] [i_2 - 1] [10] [i_2] [i_2 - 3] = 17445;
                                arr_18 [i_1] = (arr_8 [i_0 + 2] [i_1 + 2] [i_3]);
                                var_19 = (((((arr_12 [0] [i_1 - 1] [i_1 - 1] [i_2 - 2]) ? (arr_0 [i_1 + 2]) : (arr_13 [i_2 + 2] [i_4 + 2] [i_2 - 1] [i_3]))) / (arr_12 [i_3] [i_3] [i_3] [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((var_6 ? ((((!((min(var_0, var_9))))))) : ((var_11 ? var_7 : var_12))));
    var_21 = var_8;
    #pragma endscop
}
