/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_12 = (arr_1 [i_0]);
        arr_3 [8] [i_0] = ((!(((((((arr_0 [i_0]) ? (arr_2 [i_0 - 3]) : (arr_0 [i_0 - 3])))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))))))));
        var_13 = (max(var_13, ((!(((((((((arr_1 [i_0 - 2]) + 9223372036854775807)) >> 4))) | var_9)))))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((max((~39), ((max(0, (arr_2 [i_1])))))));
        var_14 = ((~(min((((0 << (((arr_1 [3]) + 5938393058672286687))))), (((arr_5 [i_1]) ? (arr_0 [i_1]) : -3316644335777227962))))));
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_15 -= ((((((arr_4 [i_2 - 2] [0]) + 2147483647)) >> (((arr_4 [i_2 - 1] [1]) - 1205669728)))));
        arr_9 [i_2 - 1] [i_2 - 1] = (arr_2 [i_2 - 2]);
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            {
                var_16 = (((arr_14 [4]) ? (arr_14 [i_4 - 2]) : (((((((((arr_11 [i_3]) < 169)))) >= (arr_12 [7])))))));

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_19 [i_5] [15] [i_3] [15] = min((arr_18 [i_4 - 3]), ((-(arr_15 [i_4 + 1] [i_4 - 2] [16]))));
                    var_17 = ((min((arr_10 [i_4 - 1] [16]), var_0)));
                }
                arr_20 [i_3] = (max(((((var_10 & var_2) < var_10))), (((arr_15 [i_4 + 1] [i_4 - 2] [i_4 - 2]) ? (arr_12 [i_3]) : ((111 ? (arr_17 [i_3] [15] [5]) : (arr_12 [9])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    arr_29 [5] [i_8] [i_8] = (min((min((((~(arr_26 [i_6] [6] [i_6])))), ((52865 | (arr_14 [i_6]))))), ((max(1, ((min((arr_8 [i_7] [i_6]), 1))))))));
                    var_18 = (max(var_18, ((min((((arr_0 [9]) ? (arr_0 [i_6]) : (arr_0 [i_6]))), ((-8 / (arr_0 [i_8]))))))));
                    var_19 = (min(((min((arr_13 [i_6] [i_7]), (arr_13 [i_6] [i_6])))), (arr_16 [i_8])));
                }
            }
        }
    }
    var_20 = (max(var_3, (((min(85, var_2))))));
    #pragma endscop
}
