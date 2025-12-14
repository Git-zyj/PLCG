/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_19 = ((-((var_10 ^ (arr_2 [i_0 - 1] [i_0 + 1])))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = ((((!(arr_2 [6] [1]))) ? (((!(arr_3 [i_0] [i_0])))) : (((!(arr_2 [i_0 - 1] [i_1]))))));
            var_20 &= ((var_10 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])));
            arr_6 [6] [i_0] [0] = ((((((arr_3 [i_0] [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) && ((((arr_2 [0] [i_1]) ? var_11 : (arr_3 [i_1] [i_1]))))));

            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                var_21 = var_0;
                var_22 = ((!(arr_3 [i_0 - 1] [i_1])));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_23 -= (arr_8 [i_0] [i_1] [i_3]);
                var_24 = ((~((var_5 ? (arr_9 [i_0] [i_1] [i_3]) : var_17))));
                var_25 = (((var_1 < var_14) >= ((var_5 ? (arr_8 [i_0 - 1] [i_1] [i_3]) : (arr_4 [i_0])))));
            }
        }
        var_26 = (((arr_7 [i_0] [i_0] [3]) && (((var_3 ? var_4 : var_4)))));
        var_27 = ((!((((arr_7 [i_0] [i_0 + 1] [i_0]) ^ var_3)))));
    }
    var_28 ^= ((var_2 || ((((!var_8) ? var_3 : (max(var_11, var_0)))))));
    #pragma endscop
}
