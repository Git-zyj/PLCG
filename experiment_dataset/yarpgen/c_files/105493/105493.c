/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += 9610062127063524373;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = ((((((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? 4294967284 : (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? (arr_2 [i_0 - 1]) : ((((var_7 ? 5 : (arr_3 [i_0] [i_1]))) << (1464489678 - 1464489616)))));
                    var_14 = ((-((4 | ((-5 ? -4 : -1))))));
                    arr_6 [i_0] [i_1] [i_1] [i_0] = var_9;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                {

                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        var_15 = ((!(((-4 ? -5 : var_11)))));
                        var_16 = (((-9223372036854775807 - 1) ? (min((-9223372036854775799 || -4), ((3 ? 14 : -12)))) : -4));
                        var_17 = ((((max((arr_7 [i_0]), -10))) ? ((((var_0 && (arr_5 [i_4 - 2] [i_5 - 1] [i_3 + 1]))))) : ((((var_3 ? -42 : (-9223372036854775807 - 1))) * (42 | var_11)))));
                    }
                    var_18 *= ((~((-42 ? (arr_5 [i_0 + 1] [i_3 + 1] [i_4 - 1]) : ((-(arr_0 [i_3] [i_0 - 1])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_19 *= (((var_7 % 9223372036854775799) ^ (((((var_11 <= -1) && -9223372036854775790))))));
                    var_20 = ((!((((arr_16 [i_6 - 1] [i_7]) ? (arr_2 [i_0 + 1]) : (arr_16 [i_0 + 1] [i_7]))))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_21 = ((((((-9223372036854775807 - 1) <= -9223372036854775799))) >> (!42)));
        arr_26 [i_8] = (((arr_21 [i_8] [i_8] [i_8] [i_8]) ? var_7 : (var_11 | var_2)));
        arr_27 [i_8] [i_8] = (((((((10 ? 170 : -9))) <= (arr_3 [i_8] [i_8]))) ? ((-(((arr_18 [i_8] [i_8] [i_8]) ? 4118691375011847341 : -42)))) : (((+((var_1 ? (arr_10 [i_8] [i_8] [i_8]) : (arr_10 [i_8] [i_8] [i_8]))))))));
        var_22 = (((((((!var_4) == (arr_8 [i_8] [i_8]))))) != (arr_4 [8] [i_8] [i_8])));
    }
    #pragma endscop
}
