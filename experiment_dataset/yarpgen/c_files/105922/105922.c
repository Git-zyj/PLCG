/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] = ((0 ? -1 : 9518));
        arr_3 [i_0 - 2] = (min(3823858178, 964056268));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_17 = (max(var_3, 9182893368843397177));
                        var_18 = var_7;
                    }
                }
            }
        }
        arr_16 [i_1] = (max((min((arr_8 [2] [i_1 - 3] [i_1]), (238 != var_14))), 0));
        var_19 = ((var_7 > (max(9517, 5037757511337090526))));
        var_20 = (min(var_20, (((+(min((arr_9 [i_1] [i_1 - 2]), (arr_4 [i_1 - 1]))))))));
        var_21 = (max((((arr_14 [2] [2] [i_1]) ? -1 : ((0 ? var_16 : var_8)))), -59));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_22 = (min(var_22, -108));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {
                        var_23 = ((1 ? (arr_17 [i_5]) : 5027));
                        var_24 -= (((((3380862152337509199 > (arr_19 [i_5]))) ? (arr_17 [i_8]) : ((51 ? 58 : 3330911027)))));
                    }
                }
            }
        }
        arr_28 [i_5] = (-584281987 / -2080158562057926442);
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    var_25 *= ((var_16 ? (-59 * var_1) : (arr_19 [i_9])));

                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        var_26 = (((arr_20 [i_9 - 1]) ? ((-14089 ^ ((min((arr_22 [i_9] [9]), 1))))) : -var_15));
                        arr_36 [i_9] [i_5] = (((max(-58, (arr_22 [i_9 - 1] [i_9 - 1])))) ? -200 : -9517);
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        arr_39 [i_12] |= ((((!((max(81947623, -6546468429184787210))))) && ((((var_14 ? var_12 : var_0))))));
                        var_27 = (max(var_27, var_8));
                        arr_40 [i_5] [i_10] [i_10] [11] = ((((-(((!(arr_24 [i_5] [i_5] [18]))))))) ? (72 / 2421524918) : (max(((var_14 ? (arr_19 [i_12]) : (arr_26 [i_5] [i_9] [i_5] [i_5]))), (max(51, 7139233617070362373)))));
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        var_28 = ((((((((var_0 ? var_7 : 1))) ? ((-(arr_33 [i_5] [i_5] [i_5] [i_5]))) : (arr_24 [i_9] [i_9 - 1] [i_9 - 1])))) ? (((((arr_18 [i_9 - 1]) <= var_11)))) : ((var_9 ? 1873442377 : (arr_31 [i_10] [i_10] [i_10])))));
                        arr_44 [i_5] [i_9] [i_13] [i_13] &= (max((arr_30 [i_9 - 1]), ((((max((arr_19 [11]), 43892))) ? ((((arr_43 [i_13]) ? -37 : 135))) : (max((arr_22 [i_5] [i_5]), var_11))))));
                    }
                }
            }
        }
    }
    var_29 -= var_11;
    #pragma endscop
}
