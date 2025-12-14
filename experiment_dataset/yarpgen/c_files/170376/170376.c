/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((((!(((var_1 ? -5787795329553709502 : var_0)))))), (min(var_1, ((131071 ? -1738488345 : var_10)))));
    var_17 = 121;

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] |= ((((max(1, (arr_1 [i_0 - 1])))) ? -var_5 : ((~(arr_1 [i_0 + 4])))));
        var_18 = (max(var_18, (min(((min(((max(var_0, var_3))), (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : -1738488345))))), (((arr_1 [i_0]) ? 12669223468928164166 : 1738488329))))));
        arr_3 [i_0] &= (min((arr_0 [i_0 + 3] [i_0]), (min((arr_1 [i_0 + 2]), (max((arr_1 [i_0]), 341477907))))));
        arr_4 [i_0] [2] = var_13;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = var_1;
        arr_10 [i_1] = (max((max((arr_8 [i_1]), (((-127 - 1) ? -89 : var_11)))), ((var_15 ? (min((arr_7 [i_1]), 0)) : (arr_8 [i_1])))));
        var_19 = (min(var_19, ((((((arr_6 [i_1 + 2]) <= (arr_5 [i_1 + 3]))) ? (((var_8 ? (arr_7 [12]) : var_5))) : (arr_7 [2]))))));
        arr_11 [i_1] = (((arr_8 [i_1]) << ((((arr_7 [i_1]) >= (arr_7 [i_1]))))));
    }
    var_20 = ((((var_0 ? var_7 : var_10)) == (1 + var_7)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_20 [i_2] [i_3] [i_3] = (arr_15 [i_2] [i_2]);
                var_21 = (min(var_21, (((max((((arr_19 [i_2] [10] [i_2]) << (var_15 - 16393905723185408739))), (((arr_13 [i_2]) ? (arr_15 [i_2] [i_2]) : -2753))))))));
            }
        }
    }
    #pragma endscop
}
