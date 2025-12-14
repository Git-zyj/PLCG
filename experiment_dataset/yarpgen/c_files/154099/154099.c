/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(((var_2 > var_10) ? ((26810 ? -6716281063139990876 : var_0)) : ((max(7907, var_11)))))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0 + 2]) ? (((arr_1 [i_0 + 2] [i_0 - 1]) ? (arr_1 [i_0 - 1] [i_0 + 1]) : var_1)) : (((((7907 ? 49 : 57607)) & 224)))));
        arr_3 [i_0] = ((-((max((((57627 != (arr_0 [i_0] [i_0])))), 65326)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 += (max(((((arr_6 [i_0] [i_1 - 1] [i_2]) & (arr_1 [i_0 - 1] [i_0 - 1])))), (((arr_4 [i_0 + 2] [i_0 + 2]) ? 65311 : (max((arr_7 [i_2] [i_1 + 2] [i_0 + 1]), (arr_1 [8] [i_2])))))));
                    var_16 = var_0;
                }
            }
        }
        var_17 = var_6;
    }
    var_18 |= 169;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                {
                    var_19 = (max(var_19, (arr_10 [i_3] [i_3])));
                    var_20 -= ((((arr_11 [i_3]) < var_0)));
                }
            }
        }

        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    {
                        var_21 += (arr_18 [i_3] [i_6 - 1] [14]);
                        arr_25 [i_3] [i_3] [i_7] = (((arr_18 [i_8 + 2] [i_8 - 1] [i_3]) ? (arr_18 [i_3] [i_8 - 1] [i_3]) : (arr_18 [i_3] [i_8 + 2] [i_3])));
                        var_22 = (((arr_21 [i_3] [i_6 + 2]) ? (arr_21 [i_3] [i_6 - 1]) : (arr_21 [i_3] [i_6 + 1])));
                    }
                }
            }
            var_23 = ((((arr_19 [i_3] [i_6] [i_3]) ^ (arr_24 [i_6]))));
            arr_26 [6] [i_3] = var_5;
            var_24 = ((arr_21 [i_3] [i_3]) ? (arr_21 [i_3] [i_3]) : (arr_21 [i_3] [i_3]));
            var_25 = ((((arr_19 [i_3] [i_6 + 1] [i_6 - 1]) - var_4)));
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            arr_29 [i_3] [8] &= (arr_24 [i_3]);
            var_26 = (arr_24 [i_9 - 1]);
            var_27 |= var_7;
            var_28 = (max(var_28, (((((!(arr_19 [6] [6] [6]))) ? (!7908) : (arr_13 [0]))))));
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_29 *= (((arr_23 [6]) / (arr_7 [i_10] [i_10] [i_10])));
        var_30 = (((arr_17 [i_10] [i_10] [i_10]) ? (arr_12 [i_10]) : 7927));
        var_31 = (!var_1);
        var_32 += var_6;
    }
    #pragma endscop
}
