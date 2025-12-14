/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_16 = (max(var_16, (((((max((arr_0 [i_0]), (arr_7 [i_0] [12] [i_2] [i_3])))) - (((arr_1 [i_2]) ? (arr_4 [i_1] [i_1]) : (arr_1 [10]))))))));
                        var_17 = -1;
                        var_18 = (((((var_14 - (arr_7 [i_3] [8] [i_1] [1])))) ? (((-(arr_4 [i_0] [i_0])))) : (min((arr_8 [i_0] [i_1] [i_2] [i_3]), var_4))));
                    }
                    arr_14 [15] [i_1] [i_0] [i_0] = (max(((-(min(var_6, (arr_4 [i_1] [i_2]))))), (((!(arr_7 [6] [i_1] [i_1] [i_2]))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_20 [i_5] = -1337780536;
                        arr_21 [i_5] [i_1] [i_5] = (((arr_12 [i_5] [i_4]) ? (arr_6 [i_0] [i_1]) : (((arr_9 [i_1]) ? -6 : var_6))));
                        var_19 = 1;
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        var_20 = (max(var_20, var_9));
                        arr_24 [i_6] [i_6] [i_6] [i_0] = ((((~(arr_9 [i_4]))) != (arr_8 [i_0] [i_0] [18] [2])));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_21 = ((6850077947184922106 ? 1 : 2774));
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_4]);
                        arr_28 [i_0] [i_1] [i_7] = (arr_3 [i_1]);
                    }
                    arr_29 [i_0] [i_0] [i_0] [i_4] |= ((~(arr_6 [i_0] [i_0])));
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    var_22 = var_4;
                    arr_32 [i_8] [i_0] [i_0] = ((((((arr_16 [i_0] [i_1] [i_0] [i_0]) ? ((min((arr_5 [13] [13]), var_12))) : (max((arr_12 [i_1] [i_1]), var_12))))) ? (max(((min((arr_7 [i_0] [i_1] [i_1] [i_0]), 6))), ((8 >> (205330675 - 205330672))))) : ((max(var_12, var_14)))));
                    var_23 -= (arr_30 [i_8] [i_1] [i_0]);
                    var_24 = (min(var_24, ((max((arr_5 [i_8] [10]), (arr_6 [i_0] [i_1]))))));
                    arr_33 [i_8] [i_0] = ((((min((arr_2 [i_8]), (arr_2 [i_0])))) / ((max((arr_2 [i_8]), (arr_2 [i_8]))))));
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    var_25 += ((195 ? var_10 : (arr_23 [i_0] [i_1] [i_9] [i_1])));
                    var_26 = (arr_23 [i_0] [i_1] [i_9] [i_9]);
                }
                arr_38 [i_0] [i_1] = var_8;
                var_27 += (max((min((((arr_0 [i_0]) ? var_14 : (arr_22 [i_1]))), (arr_7 [i_0] [i_1] [i_1] [i_1]))), (arr_35 [i_1] [i_1] [i_0] [i_0])));
                arr_39 [i_1] [8] = ((((max(var_9, (arr_6 [i_0] [i_1])))) ? (max((arr_10 [i_0] [i_1] [6]), (max(1003420874, -6)))) : (arr_4 [i_0] [i_1])));
                var_28 = var_5;
            }
        }
    }
    var_29 = ((var_6 | (min(var_9, var_12))));
    #pragma endscop
}
