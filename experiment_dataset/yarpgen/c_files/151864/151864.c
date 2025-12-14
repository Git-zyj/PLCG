/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_6));
    var_11 = var_1;
    var_12 &= ((-((var_1 >> (32065 - 32059)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_2 [6])));
        arr_3 [i_0] = (((max((min(11250051911840662699, 255)), ((max(255, 1))))) + ((max((arr_0 [i_0]), ((((arr_1 [i_0] [i_0]) > var_7))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_14 = ((((((arr_6 [i_1]) | ((((1 == (arr_6 [i_1])))))))) ? 511 : (min((arr_6 [i_1]), (arr_6 [i_1])))));
        arr_7 [0] &= (max((((!(arr_4 [10])))), (~var_3)));
        arr_8 [i_1] = (arr_4 [i_1]);
        arr_9 [i_1] [i_1] = (i_1 % 2 == zero) ? ((((((-(3 >= var_7)))) ? 253 : (min(((-(arr_6 [i_1]))), (((var_5 << (((arr_4 [i_1]) - 120)))))))))) : ((((((-(3 >= var_7)))) ? 253 : (min(((-(arr_6 [i_1]))), (((var_5 << (((((((arr_4 [i_1]) - 120)) + 230)) - 20))))))))));
        var_15 = var_0;
    }
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            arr_14 [i_2] [i_3] [i_3] = ((0 - (4294967295 - 433507681)));
            var_16 ^= ((((((-(1 * 3))) + 2147483647)) << (((!((65526 || (arr_13 [i_3] [i_3] [i_3]))))))));
            var_17 += ((((-((var_6 >> (var_7 - 219))))) + 11212));
        }
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            arr_18 [i_2] = (max(var_5, 7));
            var_18 = ((4294967295 | (((1 & (~0))))));
            var_19 &= ((!(!var_3)));
            var_20 += 3597860421;
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_23 [i_2 + 1] [i_2] [i_2 + 2] = (min((((!(1 + 251)))), (max((var_2 << 0), ((13648 ? 557699944 : -124))))));

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_27 [i_2] = ((((!(!12606))) ? ((-(arr_15 [5] [i_2] [20]))) : (arr_25 [i_2] [i_2] [i_6] [i_5])));
                var_21 += ((54983 && (((2384747867 ? (arr_19 [i_2 + 1] [i_6] [i_2 - 3]) : 12593)))));
                var_22 = (max((arr_12 [i_5] [i_6]), (((!((min(var_8, var_4))))))));
                var_23 = (-var_2 ? ((var_1 * ((min((arr_25 [i_6] [16] [i_6] [i_5]), var_7))))) : (((!var_8) - var_3)));
            }
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                arr_31 [i_2] [i_5] = ((~(min((arr_30 [i_2 - 1]), (max(2374, (arr_24 [i_7 - 1] [i_7] [i_5] [12])))))));
                var_24 = ((((var_3 ? -512 : (arr_22 [i_2] [i_2])))));
                var_25 = (max((14155339222072122160 < 22188), ((~(~var_6)))));
                var_26 ^= ((~((~(arr_26 [i_7] [i_7] [i_7 - 1] [i_7 + 1])))));
            }
            for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
            {
                arr_35 [i_2] = (!4291404851637429438);
                var_27 ^= (arr_15 [10] [i_5] [i_8 + 1]);
            }
            for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
            {
                var_28 = ((!((max(17041239246805127031, 433507681)))));
                arr_40 [i_5] [i_9] [i_5] [i_5] &= ((max((((var_7 ? -62 : (arr_10 [i_5] [i_5])))), (max((arr_12 [i_2] [i_2]), var_2)))) << (var_8 - 45939));
                arr_41 [i_2] = (min(1, ((!((min((arr_20 [i_2 + 3] [i_2]), (arr_30 [i_9]))))))));
                var_29 = ((!((min(var_0, (arr_25 [i_2 - 4] [i_2 + 2] [i_9 + 1] [i_9 + 1]))))));
            }
            var_30 += ((((-((0 ? 110 : 1)))) < (!var_0)));
        }
        var_31 = ((((arr_30 [i_2 - 4]) * 5193)) / (arr_30 [i_2]));
        var_32 = ((~(((!(arr_28 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2]))))));
    }
    var_33 = (max((var_3 & var_2), (((min(47, 923799957)) | ((max(var_4, var_6)))))));
    #pragma endscop
}
