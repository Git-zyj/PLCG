/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_15 & ((1146700313 ? var_14 : 0))));
    var_20 = ((var_15 ? var_16 : (var_1 / var_17)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        var_21 = -280703228;
                        var_22 = (((((arr_9 [i_1] [i_1] [i_1] [17] [i_1]) >> (((arr_9 [i_0] [i_1] [i_2] [i_2] [0]) - 823276287)))) >> (((min((arr_9 [4] [i_1] [4] [i_1] [1]), (arr_9 [5] [i_3] [i_2] [i_1] [i_0]))) - 823276306))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_23 = (min(var_23, ((((arr_16 [i_0] [i_0] [i_0] [8] [2] [i_1]) ? var_13 : var_17)))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [1] [i_2] = (arr_5 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_24 |= (((0 || 0) > ((1 ? (arr_10 [i_0] [i_1] [i_2] [i_5]) : (arr_10 [i_0] [i_0] [i_2] [i_3])))));
                            arr_20 [i_2] [i_1] [i_2] [i_0] [i_2] = ((((!(((var_13 ? (arr_9 [i_0] [i_0] [i_0] [15] [i_0]) : (arr_6 [3])))))) ? var_17 : ((var_14 ? (((arr_0 [i_0] [i_0]) ? var_4 : 9)) : -9))));
                            var_25 = ((min((arr_11 [i_5] [3] [i_1] [i_0]), -6091284054926357069)));
                        }
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_23 [15] [10] [i_2] = ((((min((arr_13 [i_6] [i_2] [7] [8] [i_1] [i_1] [i_0]), (((arr_7 [i_2] [i_1] [i_1]) ? (arr_14 [i_0] [4] [1] [i_0] [i_2]) : (arr_7 [i_2] [i_2] [i_2])))))) ? (max(((4611404543450677248 ? 18446744073709551601 : 43)), (arr_4 [i_2] [i_2] [i_0]))) : (((((((arr_5 [i_0]) ? 32767 : (arr_11 [i_6] [i_1] [i_2] [i_6])))) ? ((var_17 ? -53 : (arr_8 [i_2] [2] [i_1] [i_2]))) : ((min(var_12, var_1))))))));
                        var_26 = (min(var_26, (((var_6 ? (((arr_7 [i_0] [i_6] [i_6]) + 16)) : -6091284054926357069)))));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_27 = (((((min(0, var_4)))) ? ((((((arr_21 [i_0] [i_0] [i_1] [i_7]) ^ 9223372036854775803))) ? (arr_9 [i_0] [i_0] [i_1] [i_2] [i_7]) : (arr_5 [i_0]))) : (((var_8 ? (arr_19 [13] [i_1] [11] [i_2] [11] [i_7]) : (arr_5 [i_0]))))));
                        var_28 = (arr_12 [i_0] [i_1] [4] [i_7] [i_2]);
                    }
                    arr_26 [i_1] [i_1] [i_0] [i_0] |= (arr_13 [i_1] [i_1] [i_1] [14] [i_1] [14] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
