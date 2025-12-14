/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 |= ((var_1 - (!3865145475)));
    var_14 = (max(var_14, var_4));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = ((arr_0 [i_0]) < ((min((arr_1 [i_0]), (min((arr_0 [i_0]), (arr_1 [i_0])))))));
        var_16 = (max(((max(var_2, ((max((arr_1 [i_0]), var_5)))))), ((min((arr_0 [i_0]), var_4)))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_4 [i_1] = (arr_2 [i_1]);

        /* vectorizable */
        for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
        {
            arr_8 [i_1 + 2] [i_2 - 1] = ((arr_2 [i_1]) + var_7);
            var_17 = (arr_3 [i_1]);
        }
        for (int i_3 = 3; i_3 < 16;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    {
                        var_18 = ((!(arr_10 [i_1] [i_4])));
                        arr_18 [1] [i_5] [i_4] [i_4] [i_5 + 2] = var_4;
                        var_19 += (min(((min((max((arr_10 [i_3] [i_5]), (arr_9 [i_4] [i_3]))), (!var_3)))), ((var_10 >> (((arr_16 [i_4]) - 31394))))));
                        var_20 = ((((!((((arr_5 [i_4] [i_5]) & var_4))))) ? (((((arr_9 [i_4] [i_3]) == (arr_6 [i_4] [i_5 - 1]))) ? ((((arr_5 [i_5] [i_3]) || (arr_2 [i_3])))) : (arr_11 [i_1]))) : var_8));
                        var_21 = ((((min((arr_14 [i_5] [i_5]), (arr_15 [4] [0] [i_4] [i_5])))) ? ((-var_11 ? (arr_5 [0] [i_3]) : (max((arr_14 [i_5] [i_4]), (arr_17 [i_5] [i_5] [i_5 - 1]))))) : (min((arr_15 [i_5 + 2] [i_4] [i_1] [i_1]), 842018011))));
                    }
                }
            }
            var_22 = (max(var_22, ((((((((var_2 < (arr_14 [i_1] [i_3 - 3]))) ? -var_7 : (arr_11 [i_1 - 2])))) ? var_5 : (max((7049037203532162088 / 133), (arr_13 [i_1] [i_1] [i_1] [i_1]))))))));
            var_23 = ((~(arr_6 [i_1] [10])));
        }

        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            var_24 *= ((~(arr_11 [7])));
            var_25 -= ((+((+(min((arr_15 [i_1] [i_1 - 1] [i_1 + 1] [i_1]), var_10))))));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_26 |= (arr_24 [i_1]);
            arr_26 [i_1] [i_7] = ((var_2 == (((!(arr_2 [i_1]))))));
            var_27 = (((((!(((3865145478 ? -1593335709 : 4014115137)))))) & (!var_9)));
        }
    }
    #pragma endscop
}
