/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((-((var_9 ? var_14 : var_14))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 = (max(((max((arr_0 [i_0]), ((496209806 << (-4176779820868058709 + 4176779820868058728)))))), (min((~22), (((~(arr_0 [i_0]))))))));
        var_19 = ((~(arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((((min((arr_2 [1]), 0))) >> 1));
        arr_4 [i_0] = (arr_1 [1] [i_0]);
        var_20 = (((arr_2 [i_0]) > ((((arr_2 [i_0]) != (((arr_2 [i_0]) | var_1)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (max((((arr_0 [i_1]) == (arr_0 [i_1]))), ((var_16 || (arr_0 [i_1])))));
        var_21 = (((((arr_2 [i_1]) ? (arr_6 [i_1] [i_1]) : 3798757481)) >> (arr_2 [i_1])));
        arr_8 [i_1] [16] |= -23;
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                {
                    var_22 = -4;
                    var_23 = (max(var_23, 1879048192));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_24 *= (max((arr_15 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3]), (arr_12 [i_1] [i_1] [1] [i_1])));
                                var_25 = (max(var_25, (arr_12 [i_1] [i_1] [i_1] [i_4])));
                                arr_20 [i_1] [i_4 + 2] [i_3 + 1] [i_4] [i_1] [i_3 + 1] [i_4] = -22;
                                var_26 ^= var_3;
                                var_27 = (min(var_27, 49821));
                            }
                        }
                    }
                    var_28 = (min(var_28, (((-(min((arr_17 [i_3 + 1] [i_2] [i_3] [i_2 + 1] [i_3 - 3] [14]), (((496209806 <= (arr_2 [14])))))))))));
                }
            }
        }
        arr_21 [2] [14] &= ((254 << (9007199253692416 - 9007199253692400)));
    }
    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            arr_26 [i_6 - 1] [i_6] [i_6 + 2] = (((arr_17 [4] [i_6] [i_6 + 2] [i_6] [i_6 + 1] [i_6]) ? (arr_17 [i_6] [i_6] [5] [0] [i_6 + 2] [i_6 - 1]) : (arr_17 [11] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6 + 1])));
            var_29 += (((arr_5 [i_6]) != (arr_10 [i_7 - 1])));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_30 [i_6] = ((((min((~0), (arr_29 [i_6])))) >= (max(((min(12172, (arr_1 [i_6 + 2] [i_6 + 2])))), (arr_27 [i_6])))));
            var_30 -= 496209806;
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            arr_33 [i_9] = 366;

            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                arr_38 [i_6] = ((((arr_37 [i_10] [i_9] [i_10] [i_6 + 1]) << (arr_34 [i_6 + 1] [i_9] [1]))) % 248);
                var_31 = (max(var_31, (arr_12 [i_10] [i_9] [i_9] [i_10])));
                arr_39 [i_6] [5] [i_6] = (((arr_15 [i_10] [i_9] [1] [1] [1] [i_9]) ? ((((((238 ? (arr_0 [i_6]) : -4)) == var_5)))) : (arr_16 [i_9] [i_9])));
                var_32 = (-23 > (-23 | 3798757510));
            }
            var_33 += var_10;
        }

        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    {
                        arr_47 [i_11] = 12;
                        arr_48 [i_12] [i_11] [i_12] [i_12] [i_12] = (((~111) ? (((((7438498333848360614 > var_13) <= 349)))) : var_12));
                    }
                }
            }
            var_34 = max((((~((180 ? var_9 : 366))))), ((((((arr_12 [i_6] [i_11] [i_6] [i_6]) << (((-18 + 49) - 31))))) ? -106 : (min((arr_0 [i_6 + 2]), var_15)))));
            arr_49 [i_11] = max(((((max(138, 53363))) ? (arr_29 [i_6 + 1]) : -var_11)), var_13);
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_35 = arr_5 [i_6 + 2];
            var_36 = (max(var_36, ((((arr_11 [i_6 + 1]) == (arr_11 [i_6 - 1]))))));
        }
    }
    for (int i_15 = 1; i_15 < 9;i_15 += 1) /* same iter space */
    {
        arr_56 [i_15] = ((((var_2 & (arr_54 [i_15 + 1] [i_15]))) == (~var_6)));
        arr_57 [i_15] = (arr_5 [i_15]);
        var_37 = ((475056872 == (((-var_16 <= (((arr_25 [i_15]) + (arr_19 [i_15 - 1] [i_15 - 1] [i_15] [i_15] [i_15] [i_15] [i_15]))))))));
    }
    var_38 = (min(var_38, ((((((28850 ? 106 : 0))) ? (max(((208 ? 1 : -969)), ((min(var_8, var_2))))) : -116)))));
    #pragma endscop
}
