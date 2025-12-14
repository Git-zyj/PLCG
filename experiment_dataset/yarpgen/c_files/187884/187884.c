/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0])));
        var_16 &= (arr_0 [10]);
    }
    var_17 = (max(var_8, (max((var_13 && var_6), ((var_1 ? var_6 : var_12))))));

    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_18 = (i_1 % 2 == zero) ? (((((((((arr_1 [i_1 - 1]) >> (((arr_2 [i_1] [i_1]) + 146340537)))) | (arr_1 [i_1 + 2])))) ? (((arr_3 [i_1]) ? (arr_0 [i_1]) : (((arr_6 [i_1]) ^ 6879)))) : (arr_0 [i_1])))) : (((((((((arr_1 [i_1 - 1]) >> (((((arr_2 [i_1] [i_1]) + 146340537)) - 1331288551)))) | (arr_1 [i_1 + 2])))) ? (((arr_3 [i_1]) ? (arr_0 [i_1]) : (((arr_6 [i_1]) ^ 6879)))) : (arr_0 [i_1]))));
        var_19 = ((((min((arr_5 [i_1 + 2] [i_1]), (arr_5 [i_1 - 1] [i_1])))) + (arr_5 [i_1 + 1] [i_1])));
        var_20 = ((!(((arr_1 [i_1 + 2]) && (arr_3 [i_1])))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_21 = (arr_1 [i_3]);
                var_22 = ((((~(arr_9 [i_1 + 1] [i_2] [i_2]))) | (((4142362599 > (arr_9 [i_1 - 1] [i_1 - 1] [i_2]))))));

                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    var_23 = (((arr_0 [i_1]) || ((min((min((arr_5 [i_2] [i_1]), (arr_2 [i_1] [i_2]))), ((((arr_10 [i_1] [i_2] [i_3] [i_4]) > -1))))))));
                    var_24 = (((-(arr_4 [i_1 + 2]))));
                    var_25 = (max(var_25, ((((arr_11 [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4]) ? (min((arr_11 [i_4 + 1] [i_4 + 3] [i_4 + 3] [5]), (arr_11 [i_4 + 1] [i_4] [i_4] [i_4]))) : (((7487 ? 7 : -106))))))));
                    arr_14 [i_1 - 1] [i_1] = (((((arr_2 [i_1] [i_2]) - (arr_2 [i_1] [i_2]))) << ((((((-(arr_4 [i_3]))))) + 13079))));
                }
                arr_15 [i_3] [i_1] [i_1] = ((var_0 * ((-8 ? (arr_0 [i_1]) : (((arr_2 [i_1] [i_1]) % (arr_7 [i_1])))))));
            }
            var_26 = (max(var_26, (arr_5 [i_1 + 2] [i_2])));
            arr_16 [i_1] [i_2] [i_1] = ((((((min((arr_13 [i_1]), 225)) - (((195 % (arr_7 [i_1]))))))) ? ((-((min(1, 195))))) : 48));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_27 = (((arr_13 [i_1]) == (((8 ? -15280 : (arr_11 [i_5] [i_5] [i_5] [i_5]))))));
            var_28 = (arr_5 [i_5] [i_1]);
            arr_19 [i_1] [i_5] [i_5] = (arr_4 [i_1]);
            var_29 ^= 27;
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_30 = max(6, (arr_22 [i_1]));
            var_31 = ((-(((min((arr_10 [i_1] [7] [i_6] [7]), (arr_7 [i_1])))))));
            var_32 = (+(((((arr_3 [i_1]) && (arr_4 [i_6]))) ? (arr_1 [i_1]) : (arr_7 [i_1]))));
            var_33 = (arr_17 [i_1 - 1] [i_6] [i_1]);
            var_34 = ((((max((arr_20 [i_1 - 1] [i_1 + 2] [i_1 + 1]), (arr_2 [i_1] [i_6])))) / (max((arr_6 [i_1]), (arr_6 [i_1])))));
        }
        var_35 -= (!5417215858004529699);
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        arr_26 [i_7] = (arr_23 [i_7 - 1] [i_7 - 1] [i_7 - 1]);
        var_36 = ((((352096898 | (arr_9 [i_7] [i_7 - 1] [i_7 - 1]))) > (((min((arr_9 [i_7 - 1] [i_7 - 1] [i_7 - 1]), (arr_10 [i_7 - 1] [i_7] [i_7] [12])))))));
        var_37 = (max(var_37, (1 || -1859760031)));

        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
        {
            var_38 += ((((arr_21 [6]) > (arr_21 [0]))) || ((((((arr_3 [4]) <= var_11)) ? (arr_21 [10]) : (arr_8 [i_7] [0])))));
            var_39 = ((((max(31, (-127 - 1)))) | (arr_20 [i_7 - 1] [i_7 - 1] [i_7 - 1])));
            arr_29 [i_8] [i_8] [i_8] = (arr_1 [i_8]);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
        {
            var_40 = ((arr_10 [i_7 - 1] [12] [i_7 - 1] [i_7 - 1]) | (arr_25 [i_7 - 1]));
            var_41 ^= var_8;
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            var_42 -= (((((arr_33 [i_7] [i_7] [i_7 - 1]) ? (arr_5 [i_7] [4]) : (arr_5 [i_7 - 1] [0]))) / (arr_3 [0])));
            var_43 = (arr_2 [1] [i_10]);
        }
        for (int i_11 = 2; i_11 < 11;i_11 += 1)
        {
            var_44 -= (((arr_23 [i_7] [i_11 - 2] [i_7]) ? (((0 ? 31 : 195))) : (arr_23 [0] [i_7 - 1] [i_11 - 2])));
            var_45 = ((max((arr_10 [i_7 - 1] [10] [i_11 - 2] [i_11 - 2]), (min(-6, (arr_32 [i_11] [i_7 - 1]))))) <= ((((-(arr_6 [i_11]))) - (((~(arr_25 [i_7])))))));
        }
        var_46 = var_12;
    }
    #pragma endscop
}
