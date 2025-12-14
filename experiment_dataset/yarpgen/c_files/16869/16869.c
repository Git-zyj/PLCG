/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (min(var_19, ((((arr_1 [i_0]) ? ((((-(arr_1 [i_0]))))) : ((((~var_17) != ((((arr_0 [i_0]) - (arr_0 [i_0]))))))))))));
        arr_2 [i_0] [i_0] &= (((((((arr_1 [i_0]) / (arr_0 [i_0]))))) < (arr_1 [1])));
        arr_3 [11] = (min((max((((arr_1 [i_0]) ? var_6 : var_12)), (((var_17 ? var_7 : (arr_1 [i_0])))))), 67));
    }
    var_20 -= (-9223372036854775807 - 1);

    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_21 = (max(((var_5 + (arr_1 [i_1 - 1]))), ((-(arr_5 [i_1])))));
        arr_7 [i_1] [i_1] = (((((arr_0 [i_1 + 1]) && (arr_0 [i_1 - 1]))) && (((var_16 << (((arr_0 [i_1 - 1]) + 58)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        arr_17 [i_1] [i_1] [i_3] [i_4] [i_4 + 1] = (arr_12 [i_1] [i_1] [6]);
                        var_22 -= ((((max((-9223372036854775807 - 1), 24))) ? ((max((!var_0), (-67 * var_9)))) : var_14));
                        var_23 = (max(var_23, ((max(((~((-(arr_10 [i_2] [i_4 - 1]))))), ((min((arr_1 [i_1]), (arr_12 [i_3 - 1] [i_2] [i_3 - 1])))))))));
                    }
                    var_24 |= ((((max(((var_8 ? -110 : (arr_8 [i_1] [i_2]))), -var_1))) ? (max(634834784, ((2305843009213693952 | (arr_15 [i_1 - 1] [i_1 - 1] [i_3 - 1] [i_3] [i_2]))))) : var_1));
                }
            }
        }
        var_25 += ((min(((var_12 ? (arr_4 [i_1 - 1]) : var_1)), var_11)));
    }

    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        arr_20 [i_5] = ((((max((arr_19 [i_5 - 1]), (arr_19 [i_5 + 2])))) ? ((((var_2 - var_13) >= ((max(2143289344, 110)))))) : (var_1 - 1)));
        var_26 = (min(var_26, (((-69 ? ((((arr_19 [i_5 + 4]) ^ (arr_19 [i_5 + 4])))) : (arr_18 [i_5 + 4]))))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_27 = ((((arr_21 [i_6]) + -9043)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_28 = ((((min(((((arr_22 [i_7]) || 92))), (arr_23 [i_6] [i_7])))) ? (((((var_9 != var_4) && (((184 ? (arr_26 [i_7] [i_6] [i_7] [6]) : 45))))))) : (-9223372036854775807 - 1)));
                    arr_29 [i_7] [i_7] = (!var_4);
                }
            }
        }
    }
    #pragma endscop
}
