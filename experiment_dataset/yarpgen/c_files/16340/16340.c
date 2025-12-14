/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_1 [5]) == 5379763276858402736));
        var_14 = (((((((arr_0 [i_0]) == var_12)) ? 5379763276858402754 : (((~(arr_1 [i_0])))))) == (min(1, 5379763276858402736))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_15 = var_3;
                        var_16 = (max(var_16, (((~(((1 == var_4) ? (5379763276858402750 == 15935034295974545851) : (min((arr_1 [i_0 - 1]), (arr_1 [i_0]))))))))));
                        arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 2] = var_3;
                        var_17 = (max(var_17, (((((-(arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_3] [i_2 + 1]))) + (((arr_8 [i_0 - 1] [i_1] [i_2] [i_2 + 1] [i_2] [i_2]) ? (arr_8 [i_0 - 2] [i_0 - 2] [10] [i_2 + 1] [i_2 + 1] [i_0]) : (arr_8 [i_0 + 1] [i_0 + 1] [1] [i_2 + 1] [i_1] [6]))))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_18 &= (max((-32767 - 1), 3));
                        var_19 = var_4;
                        var_20 &= ((-(min((((var_5 ? 5379763276858402742 : 1))), (max((arr_9 [i_4] [i_5] [i_5] [6]), 56157))))));
                        arr_22 [i_4 - 2] [i_5] = var_0;
                        var_21 = var_9;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_26 [i_5] [i_5] = 1004363469;
                        var_22 = (max(var_22, ((max(((~(!-5379763276858402744))), (((!((max((arr_0 [i_4]), var_0)))))))))));
                        var_23 = (max(var_23, (((((~(arr_2 [i_4 - 2] [i_5 + 1]))) | (arr_13 [i_6 + 1]))))));
                        arr_27 [i_4] [i_4] [i_4] [i_5] [i_4] [i_5] = ((!(((5379763276858402736 == var_6) == (arr_13 [1])))));
                    }
                    var_24 = ((((~((-47 ? 5379763276858402736 : var_3))))) == ((var_9 - (arr_19 [i_4 - 2] [i_5] [i_6 + 1] [i_6 + 1] [i_5]))));
                }
            }
        }
        arr_28 [i_4] [i_4 - 2] = ((-var_10 ? -var_8 : ((((arr_4 [i_4 + 1] [i_4 + 1]) == (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [6]))))));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        arr_31 [i_9] = (((-123 == 4611686018427387903) == ((-(arr_30 [i_9])))));
        var_25 -= (((((218 * ((0 ? 47 : (arr_29 [i_9])))))) / ((-(arr_30 [i_9])))));
        var_26 = var_6;
    }
    var_27 = (min(232, (max(((-5379763276858402736 ? var_3 : 5379763276858402727)), ((-494133227 ? var_0 : var_11))))));
    #pragma endscop
}
