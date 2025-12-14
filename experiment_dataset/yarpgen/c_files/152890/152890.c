/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((((max(8388576, -94))) & ((var_1 ? var_1 : var_11))))), (max(194, var_9))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 ^= var_7;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_1] [i_0] [i_1] = ((((((~8388578) ? (((var_1 ? (arr_2 [i_1] [i_1]) : 46030))) : (min(-32754, 4746627973126545162))))) ? 201 : (((~((min(-26739, var_6))))))));
            var_14 = (max(var_14, (((+((((min((arr_2 [i_0] [i_0]), var_2))) * ((var_6 ? var_1 : var_9)))))))));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_15 = (max(((var_10 ? (arr_10 [i_3 - 1] [i_3 - 2] [i_1] [i_1] [i_1] [i_0]) : 3938213498)), ((((arr_10 [i_4] [i_1] [i_1] [i_1] [i_0] [i_0]) ? var_5 : -81)))));
                            var_16 = 11019598919794887759;
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_0] &= (((min(var_3, (arr_13 [i_2] [2] [i_1] [i_2])))) ? (min(6381730717860512475, 9223372036854775807)) : ((((var_6 ? var_7 : var_1)))));
                    arr_16 [i_1] [i_1] = ((min(1, (~865511773))));
                    var_17 = (max(var_17, ((((((-(arr_13 [i_2] [i_2] [i_1] [i_2])))) ? ((11019598919794887747 & (arr_12 [i_0] [i_2] [i_1] [i_0] [i_0]))) : (((max((arr_12 [i_2] [i_1] [i_1] [i_1] [i_2]), (arr_0 [i_5] [i_1]))))))))));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_22 [2] [i_0] [2] [i_0] [i_0] &= ((-(arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])));
                        var_18 ^= ((~(max(((var_6 % (arr_11 [i_7] [i_2] [i_6] [i_2] [i_2] [i_0]))), ((max((arr_10 [i_7 - 1] [i_2] [i_2] [i_2] [i_1] [i_0]), var_6)))))));
                        var_19 = (!(0 && 2650740349471065416));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_20 = 78;
                        var_21 = 9223372036854775807;
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_28 [i_9] [i_1] [i_2] [i_1] [12] = 31744;
                        var_22 ^= ((var_6 ? 177 : var_9));
                        var_23 = (max(var_23, ((((arr_12 [i_0] [i_0] [i_0] [i_1] [i_0]) ? var_5 : var_8)))));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_24 *= ((!(!-var_2)));
                        var_25 = ((((((arr_0 [i_6] [i_2]) ^ var_11))) ? var_2 : (var_5 & var_3)));
                        var_26 = var_4;
                        arr_31 [i_1] [i_1] [i_1] [i_1] [i_0] = ((((min(var_2, ((122 ? var_1 : var_2))))) ? (min((0 + 0), -115)) : (var_2 <= var_2)));
                        arr_32 [i_10] [i_1] [i_2] [i_2] [0] [i_1] [i_0] = ((((((arr_25 [i_1] [i_6] [i_0] [i_0] [i_1] [i_1]) / (((max(-31744, 177))))))) ? (max((((arr_20 [i_1] [i_6] [i_1] [i_2] [i_1] [i_0] [i_0]) ? var_11 : (arr_6 [i_1] [i_6] [i_2] [i_1]))), var_1)) : ((((min((arr_29 [i_1] [4] [5] [4] [i_1]), 239)))))));
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        var_27 ^= ((((1 ^ (arr_5 [i_0]))) | (((-(max(115, var_11)))))));
                        arr_35 [i_11] [i_6] [i_1] [i_1] [1] [1] = (((31744 >= 33554431) != ((9223372036854775807 ? (arr_30 [i_11] [i_6] [i_1] [i_1] [i_1] [i_0]) : var_3))));
                        var_28 = ((-(0 * 0)));
                    }
                }
                arr_36 [i_1] [i_1] [i_1] [i_1] = ((((max(var_2, (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [11]))))));
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_29 = ((-(min(var_4, 1862868775))));
                            arr_42 [3] [i_1] [i_12] [i_2] [i_1] [i_1] [i_0] = ((-(((arr_1 [i_13 - 1] [i_12 - 2]) * 143))));
                            var_30 = var_0;
                            arr_43 [i_1] [i_2] [i_1] [i_1] = ((-(((arr_1 [i_2] [5]) ? -110 : (arr_21 [i_1] [5] [i_2] [5] [5] [i_1])))));
                            var_31 = (max(9223372036854775801, (~-31737)));
                        }
                    }
                }
            }
            var_32 = (min(((1 ? 31737 : 6401035465447876523)), (((!(((0 ? 858940873175430596 : (arr_8 [i_1] [i_1] [i_1] [i_1])))))))));
        }
    }
    #pragma endscop
}
