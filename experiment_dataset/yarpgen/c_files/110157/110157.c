/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_18 = var_13;
                        arr_11 [i_0 + 1] [i_0] [i_0 - 1] [1] [i_0] [i_3] = (arr_0 [10]);
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_0] [i_4] = var_9;
                        var_19 = (!(arr_6 [i_0] [i_2 - 1] [i_1] [i_0]));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_20 -= 0;
                        arr_18 [i_0] [i_2] [i_0] = arr_7 [10] [10];
                        arr_19 [i_0] [i_2] [i_5] = ((((65535 ? 31 : (arr_13 [1] [1] [i_2 - 1] [2])))));
                    }
                    arr_20 [i_0] [i_1] [9] = (min(1108866314203338855, ((max(var_13, (arr_6 [i_0] [i_1] [i_2] [i_1 - 1]))))));
                    arr_21 [i_0] = var_3;
                }
            }
        }
    }

    for (int i_6 = 2; i_6 < 7;i_6 += 1) /* same iter space */
    {
        var_21 = ((((var_12 ? (arr_1 [i_6 + 2]) : 43949))));
        var_22 = (((((((arr_2 [i_6]) ? 65535 : (arr_6 [0] [i_6] [i_6 - 2] [i_6])))) ? var_17 : 62)));
        arr_25 [i_6 + 3] = ((-10299 * var_1) <= var_6);
        var_23 = (((((~(!var_7)))) ? (((((0 ? var_9 : var_17))) ? (((((arr_10 [i_6 + 2] [i_6 + 2] [i_6 - 2] [i_6 + 1]) >= 29721)))) : 18446744073709551615)) : (((((22175 ? var_1 : 32767)) * (arr_16 [i_6] [i_6] [10] [10]))))));
    }
    for (int i_7 = 2; i_7 < 7;i_7 += 1) /* same iter space */
    {
        var_24 = (((((var_0 ? ((max(var_6, 65473))) : (arr_4 [6])))) ? (max((((arr_10 [i_7] [i_7] [1] [i_7]) ? var_0 : 17592186044415)), (((arr_22 [i_7 - 2]) / (arr_17 [i_7] [i_7] [i_7] [i_7 - 1] [i_7]))))) : (((arr_16 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 3]) ? (arr_12 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7]) : -5))));

        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 6;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        var_25 = var_2;
                        arr_37 [i_7] [i_9] [i_9] = ((max((((!(arr_16 [i_7] [i_7] [i_9 + 1] [i_10])))), var_9)));
                        var_26 = ((((((arr_3 [i_7] [i_8 + 1] [5]) ? 1685308795 : var_9))) ? (((3502602825 >> (22175 - 22154)))) : (~var_5)));
                    }
                }
            }
            arr_38 [6] [i_7 + 2] = ((((max(((((-9223372036854775807 - 1) || (arr_34 [9] [i_8 - 1] [i_8 - 2] [i_8 + 1] [i_8 + 2] [i_8 - 2])))), -21301))) ? (((~(((arr_12 [i_7] [i_7] [i_7] [i_8]) ? (arr_8 [i_7 + 3] [i_7 + 3] [7] [3]) : 42))))) : ((var_4 ? (-9223372036854775807 - 1) : (var_3 == var_15)))));
        }
    }
    var_27 = 9355;
    var_28 = var_9;
    var_29 = var_2;
    #pragma endscop
}
