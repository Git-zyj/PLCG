/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = ((!((((arr_4 [i_2] [i_1] [i_0]) ? 1 : var_6)))));
                    var_19 = (max(var_19, -126));
                }
            }
        }
    }
    var_20 = (min(547608330240, 87));
    var_21 = var_6;

    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 8;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_22 = (((((max((max((arr_13 [1]), (arr_12 [i_3] [i_3]))), (arr_15 [i_3 + 1] [i_5 - 4] [i_6 - 1]))))) / (arr_11 [i_6 + 1] [i_5] [i_4])));
                            arr_22 [i_3] [i_6 - 1] [i_5] [i_4 - 1] [i_3] = ((!((min((arr_16 [i_4 + 1] [1] [i_4] [i_3]), (arr_16 [i_4 + 1] [i_6] [i_6] [i_3]))))));
                            var_23 = (~var_7);
                        }
                        var_24 = (min((min(((-(arr_13 [i_5]))), ((127 >> (var_10 + 120))))), (((-9 >= (arr_12 [i_3] [i_3]))))));
                        arr_23 [i_3 + 1] [3] [i_5] [i_3] = max((!86), ((!(arr_13 [i_3 + 1]))));
                        arr_24 [i_3] [1] [i_5] [i_3] = (min(3709521830, 127));
                    }
                }
            }
        }
        var_25 = (min(var_25, ((max(2052213753, 80)))));
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 3; i_9 < 8;i_9 += 1)
        {
            var_26 = ((((((arr_6 [i_8 + 1] [i_9] [i_9]) % (-9223372036854775807 - 1)))) ? var_17 : (min(18446744073709551615, (((35885 ? 9223372036854775804 : 1)))))));
            var_27 = ((!(((var_10 | (((arr_8 [0]) - (arr_8 [2]))))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_33 [i_8 + 1] [i_8 + 1] [i_8 + 1] &= (((arr_30 [i_8 + 1] [i_8 + 1]) - (arr_30 [i_8 + 1] [i_8 + 1])));
            var_28 = (((arr_3 [i_8 + 1] [i_8 + 1] [i_8 + 1]) ? (arr_12 [i_8] [0]) : (!var_12)));
        }
        var_29 = (min(var_2, (max((((109 ? 1 : var_0))), (25883 + 15777019119025746108)))));
        arr_34 [i_8] [i_8] = ((((((arr_13 [i_8 + 1]) ? (arr_13 [i_8 + 1]) : (arr_13 [i_8 + 1])))) || (((-(arr_28 [i_8 + 1]))))));
        arr_35 [i_8] [i_8 + 1] = ((((min(((-(arr_11 [i_8 + 1] [i_8] [4]))), var_14))) - (((arr_15 [8] [i_8 + 1] [i_8]) - (((arr_10 [i_8]) ? var_15 : (arr_20 [5] [2] [i_8 + 1] [7])))))));
    }

    for (int i_11 = 2; i_11 < 9;i_11 += 1)
    {
        var_30 = var_12;
        var_31 = (((((1 ? 10666267680852501715 : var_8))) ? ((-(arr_12 [i_11 - 2] [i_11]))) : ((((arr_10 [i_11 - 1]) >= (arr_10 [i_11 - 1]))))));
        var_32 -= arr_32 [i_11] [5] [i_11];
    }
    #pragma endscop
}
