/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((!-var_5), var_2));
    var_19 = (!((((var_1 || var_15) | var_4))));
    var_20 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((!(((65535 ? var_2 : var_13))))) ? (max(-8346708678439092846, ((((arr_2 [i_0]) >= var_8))))) : (~-675063207)));
        arr_5 [6] = var_4;
        arr_6 [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_9 [10] [10] = (((((((arr_3 [i_1]) ? 238 : 99))) ? 1 : (((arr_3 [i_1]) ? 0 : 1)))));
        arr_10 [1] [i_1] |= (arr_3 [i_1]);
        arr_11 [i_1] = 1;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_17 [i_3] = ((((((-9223372036854775807 - 1) ? 1 : -64))) * ((6112328054741580809 ? (arr_12 [i_2 + 3] [i_3]) : 4760224983484056919))));

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                arr_21 [i_4] [i_3] [i_4] [i_3] = ((((arr_20 [i_2 + 1] [i_3] [i_2 + 1] [i_2 + 3]) ? (arr_14 [i_2] [i_2]) : (arr_12 [i_2] [i_2 - 1]))));
                arr_22 [i_4] [i_3] [i_4] = (((arr_19 [i_4] [i_2 + 1] [i_2 + 3] [i_2]) ? ((var_17 ? var_3 : 409479137)) : var_7));
            }
            arr_23 [i_2] [i_2] [i_2] = -1179572216;
            arr_24 [i_3] = (((var_14 | (arr_13 [i_2] [i_2]))) < (((arr_20 [i_2] [i_2] [i_3] [i_3]) ? (arr_19 [i_2] [i_2] [i_2] [i_3]) : 65517)));
            arr_25 [i_3] = (((arr_18 [i_3]) & (arr_18 [i_3])));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_28 [i_2 + 3] [i_5] [i_5] = -1413483999;
            arr_29 [i_2] [i_2] = 2147483647;
            arr_30 [i_5] [i_2] = (!(arr_27 [i_5] [1]));
            arr_31 [i_2] [i_2] [i_2 - 1] = ((var_15 ? (arr_16 [i_2 - 1] [i_5] [i_2]) : (arr_18 [i_5])));
        }
        arr_32 [i_2] &= (arr_27 [5] [i_2 + 3]);
        arr_33 [i_2 + 2] = ((-(arr_15 [i_2 + 3] [i_2 + 3])));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_37 [i_6] [i_6] = var_0;
        arr_38 [i_6] = (!((min((((arr_15 [i_6] [i_6]) ? (arr_27 [i_6] [i_6]) : 0)), (min((arr_20 [i_6] [i_6] [i_6] [i_6]), var_6))))));
        arr_39 [i_6] = (max((((27249 | 1413484017) ? ((((arr_19 [i_6] [i_6] [i_6] [i_6]) + -1413484018))) : (arr_16 [i_6] [i_6] [i_6]))), 127));
    }
    #pragma endscop
}
