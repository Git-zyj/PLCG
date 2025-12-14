/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_13 = (min(var_13, (arr_3 [i_0] [i_0])));
        arr_4 [i_0] = 1;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_1] = -1172626249;
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((88 * ((var_3 ? 1 : 141863388262170624))));
                    }
                }
            }
        }
        var_14 -= (((var_1 ? var_3 : 255)));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_15 = (((6580 < 0) * (arr_15 [i_4] [i_4])));

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_21 [i_4] [i_4] = ((((((((7077913579161133703 ? 0 : 1))) ? (arr_19 [13]) : -220))) ? (~64) : 1));
            arr_22 [i_4] = ((((arr_20 [i_4]) ? var_10 : (((-2147483647 - 1) ? (arr_19 [i_5]) : 2946331002)))));
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_16 = (min(var_16, ((((arr_23 [i_6] [i_6]) ? -255 : (max(18304880685447380996, 1)))))));
        var_17 = (max(var_17, (arr_24 [i_6])));
        arr_25 [5] [i_6] = ((!((((arr_24 [i_6]) ? (arr_24 [i_6]) : (arr_24 [i_6]))))));

        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_29 [i_6] [1] [1] = ((65528 == (arr_23 [i_6] [i_6])));
            var_18 = (arr_28 [i_6] [i_6]);
            arr_30 [i_6] = ((~(((!((((arr_26 [15] [15] [15]) ? (arr_24 [i_7]) : 0))))))));
            arr_31 [i_6] [i_6] = ((0 != ((((9007199252643840 ? (arr_24 [1]) : (arr_26 [1] [1] [1]))) | (-2147483647 - 1)))));
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            var_19 = (min(var_19, 145));
            var_20 = (max(var_20, (arr_28 [3] [3])));
            var_21 = ((~(((arr_26 [i_6] [i_6] [i_6]) ? 1030761035160669932 : (arr_24 [i_6])))));
        }
        var_22 -= ((((var_2 % ((32768 ? -6931842750425387779 : 1)))) & (arr_32 [i_6])));
    }
    var_23 = -844535396103723702;
    var_24 = 1;
    #pragma endscop
}
