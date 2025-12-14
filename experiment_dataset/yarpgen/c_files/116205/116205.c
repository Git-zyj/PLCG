/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((-(max(((min(var_3, var_0))), 8876584185115632750))));
    var_13 = min((!18446744073709551610), var_7);
    var_14 = min(((-9570159888593918888 / (var_8 - var_7))), ((170 ? 6 : var_9)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] = 9223372036854775801;
        var_15 *= (98 * var_8);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] = ((((((1373545011 * (arr_5 [i_1])))) >= -9223372036854775801)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_13 [i_3] [24] [i_1] [i_1] = (((max(var_8, ((min((arr_6 [i_3]), (arr_5 [i_3])))))) < var_0));
                    arr_14 [i_1] [i_1] [i_3] |= (min(((((arr_11 [i_3] [i_3] [i_3]) ? (arr_11 [i_1] [i_2] [i_3]) : (arr_11 [i_1] [i_2] [i_3])))), ((var_6 ? (arr_11 [i_1] [i_2] [i_3]) : var_4))));
                    var_16 = (arr_8 [i_3] [i_2]);
                }
            }
        }
        var_17 = ((~((max((!var_11), (arr_5 [i_1]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 24;i_5 += 1)
            {
                {
                    arr_21 [i_1] = var_6;
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_18 = (!6);
                                arr_26 [i_6] [i_4] [i_5] [i_6] [i_7] [4] = var_7;
                            }
                        }
                    }
                }
            }
        }
        arr_27 [i_1] = (min(((var_9 & (arr_19 [i_1] [i_1] [21] [i_1]))), (((-(arr_9 [i_1]))))));
    }
    #pragma endscop
}
