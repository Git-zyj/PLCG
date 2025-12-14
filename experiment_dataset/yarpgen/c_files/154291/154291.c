/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 += ((~(((((78 ? var_0 : 1744))) ? -58 : 25))));
        var_18 = arr_1 [i_0];
        arr_3 [i_0] = (((max(56, -1034642633))) ? (arr_2 [i_0]) : ((66 | (arr_1 [i_0]))));
        var_19 = ((-(((var_12 ? var_12 : var_1)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_20 *= (((~var_16) ? (~var_7) : ((((~(arr_1 [i_1]))) | (~var_16)))));
        arr_7 [1] [i_1] &= (~-1677424959);
        var_21 = (min(((min(var_3, (arr_4 [i_1])))), (((arr_4 [i_1]) ? (arr_4 [i_1]) : var_6))));

        for (int i_2 = 3; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_22 -= ((((((3275060734 ? var_15 : -35)) ? 59 : ((var_16 ? 65 : 1644911351020607843))))));
            var_23 &= var_11;
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 14;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] = var_9;
            var_24 = (min(var_24, 3190939));
            arr_13 [i_1] [i_1] |= (arr_0 [i_3 - 3] [i_3 - 1]);
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_16 [4] [i_4] [i_4] = (max(47, var_7));

            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                var_25 &= 1873924014;
                arr_20 [0] [i_4] [i_4] [i_1] &= ((((-((var_2 ? var_2 : var_8)))) == (((~(-127 - 1))))));
                var_26 = (arr_10 [i_5 - 1] [i_4]);
            }
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                var_27 = (min(var_27, (max(305440081, ((~(min(var_8, var_14))))))));
                arr_24 [i_6] [i_4] = (max(((((arr_4 [i_6 - 2]) != (arr_19 [i_6 + 1])))), ((65 ? (arr_4 [i_6 - 3]) : var_4))));
                var_28 = ((-(((arr_1 [i_6 - 2]) ^ var_8))));
            }
            /* vectorizable */
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                arr_27 [10] = ((var_0 ? (arr_2 [i_1]) : 935761200));
                var_29 = (var_5 != var_12);
                var_30 &= var_8;
                var_31 += -21;
            }
            var_32 = var_5;
            arr_28 [1] [i_4] [i_4] = 60;
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_33 = (min(var_33, (max(var_16, ((((((1644911351020607851 == (arr_15 [i_8]))))) / (((arr_26 [11] [i_8] [i_8]) ? var_15 : (arr_6 [i_8])))))))));

        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
        {
            var_34 &= (((max(-119, 9271524644839571138)) == ((((arr_25 [3] [i_9] [i_9] [i_9]) ? var_2 : -83)))));

            for (int i_10 = 4; i_10 < 12;i_10 += 1)
            {
                var_35 = (min(var_35, (((var_13 ? (min((min(7718428395217187499, 5970519254444928613)), (arr_5 [i_8]))) : (arr_17 [i_8] [i_8] [i_10 + 3]))))));
                arr_37 [13] [i_9] = (max((((-(arr_15 [i_10 + 2])))), ((-6497244970573419582 % (((arr_21 [i_8] [i_9] [i_8]) ? (arr_33 [i_8]) : 59))))));
                arr_38 [i_8] = ((-(var_12 / 14)));
                var_36 = ((-((15166278052566403277 ? 53 : 7492134536298089798))));
            }
            for (int i_11 = 2; i_11 < 14;i_11 += 1)
            {
                arr_41 [i_11] [i_9] [i_8] = 9223372036854775807;
                var_37 = (max(var_37, (((var_0 < (arr_40 [i_8]))))));
                var_38 = (max((arr_21 [i_8] [i_11 - 1] [i_8]), var_10));
                arr_42 [i_8] [5] [i_9] [1] = 18446744073709551610;
            }
            arr_43 [i_8] [i_8] [i_8] |= -6497244970573419590;
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
        {
            var_39 = (min(var_39, var_8));
            var_40 = var_0;
            var_41 += (((((arr_29 [i_8] [i_8]) ? 96 : (arr_29 [1] [i_12])))) ? ((((!(arr_30 [i_8] [i_8]))))) : (max(13850398232352061253, (((var_1 ? 6568971423041931787 : var_16))))));
            arr_46 [7] [i_12] &= -var_2;
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            arr_49 [i_13] = var_6;
            var_42 = (max(var_42, ((((arr_15 [i_8]) % (arr_15 [i_8]))))));
        }
        arr_50 [i_8] &= (max((arr_33 [i_8]), (((arr_17 [i_8] [i_8] [i_8]) ? var_0 : var_14))));
    }
    var_43 = (var_2 == -97);
    #pragma endscop
}
