/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_1] [11] = (!var_12);
                    arr_11 [i_1] [i_1] [i_2] = min(((((min((arr_9 [i_2 + 1] [i_2] [i_2] [1]), var_2))) ? ((var_11 / (arr_9 [7] [i_1] [i_1] [i_1]))) : 32767)), (((var_7 && (arr_7 [i_0 - 1])))));
                    arr_12 [i_1] [i_0] [i_1] = ((((min(var_9, (var_8 & var_10)))) ? (((arr_8 [i_0 + 2] [i_2 - 1] [i_2 + 1] [i_2 - 1]) ? ((((arr_3 [i_0] [i_0]) / (arr_9 [i_0] [i_0 - 1] [i_0] [12])))) : (arr_4 [i_2]))) : ((min(var_10, ((1361870837 ? 69 : var_11)))))));
                    var_13 = var_11;
                }
            }
        }
        var_14 += var_3;

        for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_15 [22] [i_0 + 4] [i_0] = (min(var_10, var_11));
            var_15 ^= -1846975417;
        }
        for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_16 = 69;
                        arr_24 [i_4 + 1] [i_5] = var_8;
                    }
                }
            }
            var_17 = 40123;
            var_18 = (((((((min(var_9, 16))) ? (arr_17 [i_0 - 2] [7]) : 199))) ? (((~((((arr_17 [i_4] [i_0]) < var_6)))))) : (min(-11, 194))));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_19 = (((arr_14 [9] [i_7] [i_7]) ? (((!(arr_27 [i_7] [i_7])))) : (((18446744073709551608 && (arr_9 [i_7] [i_7] [i_7] [i_7]))))));
        var_20 = (arr_21 [i_7] [i_7] [i_7] [i_7]);
    }
    for (int i_8 = 2; i_8 < 8;i_8 += 1)
    {
        arr_30 [i_8] = ((-41086 - (var_11 > 18446744073709551612)));
        arr_31 [i_8] = (((!var_11) ? 18446744073709551612 : var_9));
    }
    var_21 = (max(var_21, 219));
    #pragma endscop
}
