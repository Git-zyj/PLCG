/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 = ((((((arr_3 [10]) - (arr_3 [i_0])))) == (((max(var_6, var_9)) + (((arr_3 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [8] [8])))))));
        arr_4 [i_0] = var_0;
        arr_5 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
        var_12 = var_5;
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_2] [i_1] = (((min((((arr_7 [i_1]) * var_2)), -31)) * (max((arr_8 [i_3 + 2] [i_1 + 1]), (arr_6 [i_1] [i_3])))));
                    arr_15 [i_1] [i_1] [i_1] = ((((((var_5 << (var_4 - 60))) >> (((arr_9 [i_1] [i_1]) + 1245330200)))) <= (1 || 1)));
                    arr_16 [i_1] [1] [i_3 - 3] = (((((arr_11 [i_1] [5] [i_1] [i_3 + 2]) ? (((-(arr_13 [1] [i_2] [i_2 - 1])))) : (arr_12 [i_1] [i_2 + 1] [9] [i_1]))) - ((min(1, 1781421191)))));
                }
            }
        }
        arr_17 [i_1] = (((((var_7 > (arr_6 [i_1] [i_1 + 1])))) >= (((arr_6 [i_1] [i_1 - 2]) - (arr_7 [i_1])))));
        var_13 = ((max((arr_13 [i_1 - 2] [i_1 + 1] [i_1 - 2]), (arr_13 [i_1 - 2] [i_1 + 1] [i_1 - 2]))));
        var_14 = (max(var_14, ((((var_0 == 1) | (((((-(arr_8 [i_1] [i_1 - 1])))) ? var_6 : (((((arr_10 [i_1 - 1]) >= (arr_8 [i_1] [i_1]))))))))))));
        arr_18 [i_1] = (min(((-(arr_11 [i_1 - 1] [i_1] [i_1] [i_1]))), (((arr_6 [i_1] [i_1 - 2]) * (arr_6 [i_1] [i_1])))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_15 = (~var_7);
            var_16 = arr_21 [i_4] [i_5];
            var_17 = ((!((((arr_21 [i_4] [i_5]) & (arr_21 [i_4] [i_5]))))));
        }
        arr_24 [i_4] = ((((((min((arr_22 [1] [i_4] [i_4]), (arr_21 [i_4] [i_4])))) ? (arr_19 [i_4]) : ((((arr_22 [i_4] [i_4] [9]) ? var_0 : (arr_23 [i_4] [i_4] [i_4])))))) ^ (((min((arr_22 [i_4] [i_4] [i_4]), (arr_23 [i_4] [11] [i_4]))) ^ (max((arr_20 [i_4]), var_9))))));
    }
    var_18 = ((1 ? 0 : 1767305354));
    #pragma endscop
}
