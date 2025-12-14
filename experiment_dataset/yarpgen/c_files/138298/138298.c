/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-1 * 5493262781639670844) ? var_11 : var_5));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] [9] [i_1] = 5493262781639670836;
            var_21 = 129;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_2] [i_0] = (-127 - 1);
            arr_9 [i_0] [i_2] = (var_16 / 242);
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_0] [i_3] = ((~var_1) + (((((!var_19) < var_14)))));
            arr_14 [10] &= (((arr_12 [i_0] [i_0] [i_3]) + (((var_17 ? (arr_10 [i_0] [i_0]) : (arr_10 [1] [1]))))));
            arr_15 [2] [i_3] = (((var_19 ? ((120 + (-127 - 1))) : ((121 ? 120 : 1)))) ^ ((((1 ? var_7 : (arr_12 [6] [9] [6]))))));
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_18 [i_4] = ((!((((arr_4 [i_0]) ? var_0 : var_5)))));
            var_22 = (min(var_22, -var_9));
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 9;i_6 += 1)
            {
                {
                    arr_25 [i_6 - 1] [i_0] [i_5 - 1] [i_0] |= ((((((max(281337537757184, var_12))))) + (min((((arr_24 [i_0] [i_0] [9]) ? var_6 : 4262644939)), (((var_14 ? (arr_21 [i_5 + 1]) : (-127 - 1))))))));
                    var_23 &= ((((((((arr_7 [i_0]) ? (arr_21 [i_0]) : var_17))))) < ((((max(var_16, (arr_0 [i_0])))) ? 18446462736171794405 : ((((arr_1 [i_5]) ? -60 : var_19)))))));
                    var_24 = (min(((-60 ? 32761 : -2147483637)), (arr_22 [1] [i_0])));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        arr_29 [i_7] = ((((((var_19 ? (arr_27 [i_7] [i_7]) : 279223176896970752)) + (arr_28 [i_7] [23]))) + (!1)));
        var_25 = (max(var_25, ((((((1 * (((((arr_28 [i_7] [i_7]) && 32765))))))) ? (min((((-2147483637 ? var_7 : (arr_27 [i_7] [10])))), (max(126, 281337537757184)))) : (!var_11))))));
        var_26 = -132;
    }
    #pragma endscop
}
