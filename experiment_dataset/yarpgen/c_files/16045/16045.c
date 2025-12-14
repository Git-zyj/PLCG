/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, (((((((arr_8 [8] [0] [i_2] [i_3]) ? var_14 : 1))) ? (((arr_6 [6]) ? 1 : 241)) : (((arr_4 [i_0] [i_0] [1]) ? 41084 : 57)))))));
                        var_20 |= ((1 ? (arr_4 [i_1 - 2] [i_1 + 1] [i_2]) : (1 >= 1)));
                        var_21 = (var_16 ? (var_13 & 0) : ((((arr_3 [i_0]) ? 1 : (arr_4 [i_3] [i_0] [i_0])))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_22 += (((max(var_10, (arr_10 [i_1 + 1] [i_4] [i_4] [i_1 + 1] [i_1])))) && ((((max(6, (arr_6 [6])))) || ((max(9223372036854775807, (arr_7 [i_2])))))));
                        var_23 = (min(((max(var_12, (((var_14 && (arr_1 [i_1 + 1]))))))), (min((var_12 % 18446744073709551610), (min(18446744073709551603, 1))))));
                    }
                    arr_12 [i_0] [i_2] = (min((((arr_6 [i_2]) / (max((arr_6 [i_2]), (arr_2 [i_1]))))), (((arr_8 [i_2] [i_1 - 1] [i_1 + 1] [i_1 - 2]) ? (((min(1, (arr_4 [i_0] [i_1] [i_2]))))) : (((arr_8 [i_2] [i_1] [i_2] [i_2]) / var_8))))));
                }
            }
        }
    }
    var_24 = ((var_18 ? (((var_2 / 91) / ((1 ? 12039303821273904601 : -51)))) : ((max(var_14, ((var_3 ? var_5 : var_16)))))));
    #pragma endscop
}
