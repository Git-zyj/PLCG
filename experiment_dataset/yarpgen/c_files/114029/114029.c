/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((min(var_8, var_0))));
        var_18 = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((((-(arr_0 [i_0])))) ? (arr_0 [i_0]) : ((var_11 ? 35184372088831 : (arr_0 [i_0]))))) : ((((((arr_0 [i_0]) >= 112)))))));
        arr_3 [i_0] = (max((((((1 ? 0 : (arr_1 [i_0] [i_0])))) ? ((3028084499306357299 - (arr_1 [i_0] [i_0]))) : var_9)), (((((max((arr_0 [i_0]), var_2))) ? (3362292551278817349 - var_11) : 59)))));

        for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_0] [i_1 - 1] = ((!(((var_0 ? ((var_11 ? (arr_0 [i_1 - 1]) : 0)) : -3362292551278817350)))));
            arr_7 [3] [i_0] [i_0] = ((!((min((arr_4 [i_1 + 1]), var_13)))));
            var_19 ^= (((((arr_0 [i_0]) ? 143 : (((arr_4 [i_0]) | 8160)))) / (((((arr_4 [4]) + 2147483647)) << (((((min(33550336, var_2)) + 1313858555)) - 5))))));
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
        {
            var_20 = ((((max(((((arr_1 [i_2] [i_0]) >= var_13))), (arr_4 [i_2 - 2])))) / var_2));
            arr_10 [6] = ((((!((min(41, var_11))))) && 240));
        }
        for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_21 = (-((~(arr_12 [i_0] [i_3]))));
            var_22 = (min(var_22, 150));
            arr_13 [3] [i_3] [2] = (arr_5 [i_0] [i_3]);
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_17 [i_4] = max((((arr_16 [i_4] [i_4]) ? (arr_16 [i_4] [i_4]) : (arr_16 [i_4] [i_4]))), (arr_14 [i_4]));
        arr_18 [9] = var_12;
        var_23 = ((((~(arr_14 [i_4])))) ? (arr_15 [i_4]) : (((min((arr_14 [i_4]), (arr_16 [i_4] [i_4]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_23 [i_5] = (arr_20 [i_5]);
        arr_24 [i_5] [i_5] = ((1542 | ((var_15 ? (arr_20 [i_5]) : (arr_21 [2])))));
    }
    var_24 = -var_11;
    #pragma endscop
}
