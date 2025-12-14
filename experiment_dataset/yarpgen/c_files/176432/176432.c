/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = 4294967265;
            var_16 = (max(var_16, 155));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_10 [i_0] [i_1] [i_2] = 207;
                arr_11 [i_0] [i_1] = ((34860 ? (arr_5 [i_1] [i_1 - 1] [6]) : var_11));
            }
            var_17 += ((((var_13 >= (arr_4 [i_0] [3]))) ? 105 : -30551));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_14 [9] [9] [11] = (((arr_8 [10] [i_0] [i_0] [i_0]) * 2147483647));
            var_18 = ((((arr_13 [i_0]) ? (arr_13 [i_3]) : (arr_13 [i_0]))));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_19 [i_0] [i_4] [i_0] = (((~(max(155, 3567299032)))) >= ((-(max(6, 196)))));
            arr_20 [i_0] = (arr_0 [i_0] [i_4]);
        }
        arr_21 [i_0] [i_0] = ((((max(((-(arr_12 [i_0] [i_0]))), ((max(1, 32512)))))) ? (max(((min(37, 234))), (min(15896387121437000533, var_10)))) : (((min((arr_4 [i_0] [i_0]), (arr_3 [i_0])))))));
        arr_22 [i_0] = min(((-112 || (arr_5 [4] [i_0] [5]))), ((!(arr_5 [i_0] [i_0] [i_0]))));
    }
    var_19 = ((((max(var_14, 1)) ? (((236 ? 29365 : var_15))) : var_5)) / var_12);
    #pragma endscop
}
