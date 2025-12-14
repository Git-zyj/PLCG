/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_14 = 74;
        var_15 += (((89 * (110 <= 83))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [16] = ((-23 ? (((arr_4 [i_1]) + (arr_0 [i_1]))) : ((max((arr_0 [i_1]), (arr_4 [i_1]))))));
        arr_6 [i_1] = (arr_1 [i_1]);
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_16 = ((!(arr_3 [i_2])));
        var_17 = (max(var_17, ((((min(((max(var_0, var_6))), (arr_8 [i_2]))) < (((((max(83, (arr_3 [14])))) <= 83))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_18 -= (((arr_11 [11] [i_4]) ? (max(103, -53)) : (min(((var_12 ? (arr_1 [i_4]) : (arr_4 [i_4]))), (arr_10 [i_2])))));
                    var_19 = (((((arr_11 [11] [i_2]) + 2147483647)) >> ((((((min((arr_15 [i_4] [i_4] [i_4]), 84))) ? var_7 : (((var_13 != (arr_2 [3] [16])))))) - 77))));
                    var_20 ^= (133 | 24);
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_18 [i_5] = arr_7 [i_5] [i_5];
        var_21 = ((((min((((-114 > (arr_3 [i_5])))), (arr_4 [i_5])))) ? (arr_16 [i_5]) : (((!(((145 + (arr_4 [i_5])))))))));
    }
    var_22 = ((53 ? (((120 <= ((min(var_6, var_12)))))) : (((var_12 || ((min(52, var_6))))))));
    #pragma endscop
}
