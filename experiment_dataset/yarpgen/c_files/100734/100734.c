/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 = (((var_4 / 8728073) / (((arr_1 [i_1 + 2]) ? (arr_1 [i_1 - 2]) : (arr_0 [i_1 + 2])))));

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        arr_13 [i_2 - 1] [i_3] = (min(((-(-1592824654 & 1))), ((-(((!(arr_1 [i_2]))))))));
                        var_11 = ((((14400515653237760437 - (arr_11 [i_3] [i_3 + 3] [i_3] [i_3] [i_3] [i_3]))) - (((max(1, 1)) ? (851412989 || 38606) : ((14400515653237760427 ? (arr_0 [i_2]) : (arr_6 [i_1] [i_1])))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_12 = 1;
                        arr_16 [i_4] [16] = ((((var_0 ? 1 : (arr_9 [i_0] [1] [i_2] [i_0]))) >> (((arr_0 [i_4]) - 7899923407645079996))));
                        arr_17 [2] [16] [16] [16] = 1;
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_13 = ((!((min((arr_8 [i_0] [i_0] [i_2 + 2] [i_5]), (min(var_8, 1)))))));
                        var_14 = (min((-var_6 * 1), ((+(((arr_19 [5] [5] [8] [i_5]) / var_7))))));
                        var_15 = ((((arr_5 [i_0]) ? (arr_2 [i_0] [i_1]) : (arr_1 [i_0]))));
                        arr_21 [i_0] [i_1] [i_2] [i_5] = var_5;
                    }
                    var_16 &= var_2;
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_26 [i_6] [i_6] = (((((arr_18 [i_6] [i_6] [i_6] [i_6] [i_6]) * (((arr_22 [i_6]) << (var_3 - 135))))) % (arr_0 [i_6])));
        arr_27 [i_6] [i_6] = (min((((arr_20 [i_6] [1] [i_6] [7]) ^ (arr_3 [i_6]))), 193));
    }
    var_17 = (5628531672832265046 - (((var_0 + (min(7603990593766963671, var_3))))));
    var_18 = (max(((min((var_0 > 6808976992920810267), (!var_6)))), ((var_1 ? ((min(32752, 1))) : var_1))));
    var_19 = var_4;
    #pragma endscop
}
