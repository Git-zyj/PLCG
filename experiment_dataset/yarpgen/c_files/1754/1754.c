/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((5824401371177331241 || ((min(var_8, var_2)))))) ^ 27627));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_13 = (((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) || (1 && -124));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((((min((!var_7), (((arr_0 [i_0] [i_0]) & var_0))))) ? (((arr_6 [i_2] [6] [i_0]) >> ((((var_0 ? (arr_0 [i_2] [i_1]) : 3451377338312500631)) - 18446744073709551442)))) : (~-301969055)));
                    arr_8 [i_0] [i_1] [i_0] [8] = min(-23806, (((~100) ? (min(0, 7495910597881015310)) : (arr_6 [i_2] [i_1] [i_0]))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] = (min(var_5, var_1));
                        var_14 = (max(var_14, (((-(((!(arr_2 [i_0] [i_0])))))))));
                        var_15 *= (arr_6 [i_1 - 2] [i_1 - 2] [i_1 + 1]);
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_16 = ((-(min((arr_4 [i_1 - 1] [i_1 - 1]), 0))));

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_17 = (~-1221551828);
                            arr_17 [i_5] [i_5] [6] [i_5] [i_0] = var_7;
                            var_18 = (min(-25698, (arr_1 [i_0] [i_5])));
                            var_19 += (min((arr_2 [i_1 - 1] [i_1 - 2]), -17697));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_20 = ((+(((arr_19 [i_1 - 1] [i_1 - 1] [i_6] [i_1 - 2]) ^ 2899341697))));
                            var_21 = (min((min(-38, (arr_14 [i_0] [i_1 - 2]))), (min((arr_14 [i_2] [i_6]), (arr_14 [i_0] [i_0])))));
                            var_22 ^= var_2;
                            var_23 = (min(var_23, 0));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_7] = (arr_15 [i_2] [i_2] [i_7]);
                            var_24 = (min(((min(-67, 134217727))), (!var_2)));
                            var_25 *= ((var_11 ? ((min((arr_4 [i_1 - 1] [i_1 - 1]), var_4))) : ((((arr_5 [i_1 - 1] [i_1] [i_1 - 2] [i_1 - 1]) && (arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 2]))))));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_2] [i_8] [4] = var_2;
                            var_26 -= var_2;
                            var_27 = (min(((var_7 ? 84 : (arr_14 [i_1 - 1] [i_1 - 2]))), (((((min(var_4, (arr_22 [i_8])))) || var_0)))));
                        }

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_28 = (arr_11 [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1 + 1]);
                            arr_32 [i_1 - 2] [i_2] [i_9] = (!37111);
                        }
                    }
                }
            }
        }
        var_29 = (min((arr_14 [i_0] [i_0]), -19079));
        var_30 = -124;
        arr_33 [i_0] [i_0] = ((((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? -8656504802691346614 : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_11 = 1; i_11 < 9;i_11 += 1)
        {
            arr_38 [i_10] [i_10] = ((5824401371177331241 / (arr_19 [i_10] [i_10] [i_10] [i_11])));
            var_31 = (((arr_30 [i_10] [i_11 - 1] [i_10] [i_11]) < 123));
            var_32 ^= ((~(arr_2 [i_11 - 1] [i_11 + 1])));
        }
        for (int i_12 = 4; i_12 < 7;i_12 += 1)
        {
            arr_41 [i_10] = (min(-1837457864, (((var_1 || 4294967295) ? 270843001 : ((~(arr_13 [i_12] [i_10] [i_12] [i_10] [i_10])))))));
            arr_42 [i_10] = (((((((((arr_21 [i_10] [i_10] [i_10] [i_12] [i_12]) | var_3))) && (arr_2 [i_12 + 2] [i_12 + 3])))) != (((var_1 / 5) >> (arr_11 [i_12] [i_12] [i_10] [i_10] [i_10] [i_10])))));
        }
        var_33 = (min((min((((arr_6 [i_10] [i_10] [i_10]) >> (var_10 + 119))), ((min(1, 1))))), (arr_20 [i_10])));
        arr_43 [i_10] [i_10] = ((982255660 << (((min((arr_14 [i_10] [i_10]), 123)) - 123))));
        var_34 = (arr_21 [8] [i_10] [i_10] [i_10] [i_10]);
    }
    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
    {
        var_35 = (((!(arr_1 [i_13] [i_13]))));
        var_36 -= ((-124 ? (((((arr_31 [i_13] [0] [i_13] [i_13] [i_13] [i_13]) + 2147483647)) >> 1)) : (((arr_5 [i_13] [i_13] [i_13] [i_13]) ? var_5 : 1))));
        arr_48 [i_13] = (((arr_2 [i_13] [i_13]) % (((arr_2 [i_13] [i_13]) ? (arr_2 [i_13] [i_13]) : (arr_2 [i_13] [i_13])))));

        for (int i_14 = 4; i_14 < 9;i_14 += 1)
        {
            var_37 = (max(var_37, (min(var_10, ((min((arr_36 [2]), (arr_36 [2]))))))));
            var_38 = 15578032808871998760;
        }
    }
    var_39 = (var_1 != var_7);
    #pragma endscop
}
