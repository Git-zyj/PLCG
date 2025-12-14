/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_18 - (var_18 - 2920)));
    var_21 = (max(var_21, var_18));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_22 |= max((((arr_1 [i_0]) ? (arr_1 [i_0]) : 255)), (((!(arr_1 [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] &= (-127 - 1);
                        var_23 = (min(var_23, ((((arr_7 [i_0] [i_0]) ? (arr_5 [i_3] [i_1] [i_2]) : 126976)))));
                        var_24 += 1;
                        var_25 ^= (arr_3 [i_0] [i_0]);
                        var_26 = (max(var_26, var_2));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        var_27 += (arr_3 [i_4 + 2] [i_1 - 2]);
                        var_28 = (max(var_28, (((32767 ? 1 : 29818)))));
                        var_29 = (max(var_29, ((((var_6 - 16) ? (arr_11 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_2] [i_4]) : (((arr_0 [i_0] [i_0]) - var_8)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_30 = (min(var_30, ((((-32762 + (arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [6])))))));
                                var_31 = (min(var_31, 32767));
                                var_32 &= 2147483647;
                                var_33 = (min(var_33, (((((arr_4 [i_0 - 1] [i_0 - 1]) ? (arr_4 [i_2] [i_5]) : (arr_9 [i_0 - 1] [i_1 - 2] [i_2] [i_5] [i_6] [i_6])))))));
                                var_34 |= ((((-(arr_8 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_1 - 2] [i_1]))) >= (max((arr_8 [i_0] [i_0] [i_0] [i_0 - 1] [i_1 + 2] [i_5]), (arr_8 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_2])))));
                            }
                        }
                    }
                    var_35 += (arr_14 [i_0] [i_2] [i_2]);
                    var_36 |= 315325926;

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_37 ^= 483718980;
                        var_38 ^= arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7];
                        var_39 |= -483718993;

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_40 &= (!((max(654380785, (arr_2 [i_0 - 1])))));
                            arr_27 [i_0] [i_0] [i_1] [i_1] [i_7] [i_8] |= ((arr_18 [i_0 - 1] [i_0 - 1] [i_7] [i_1]) ? (((arr_25 [i_1] [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1] [i_1 - 2] [i_1]) ? (arr_20 [i_1] [i_1]) : (((var_17 ? var_0 : var_15))))) : 8309);
                            var_41 = (min(var_41, var_18));
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_42 = (min(var_42, (arr_24 [i_0] [i_1] [i_0] [i_0] [i_9] [i_0] [i_2])));
                            var_43 = (max(var_43, ((min((-620943894 != 620943894), 620943908)))));
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            var_44 += (((max((arr_21 [i_0 - 1]), (arr_21 [i_0 - 1]))) * (((arr_21 [i_0 - 1]) ? (-32767 - 1) : (arr_21 [i_0 - 1])))));
                            arr_32 [8] [i_1] |= (max(620943908, ((max(33, 32767)))));
                            var_45 ^= ((arr_0 [i_1] [i_0 - 1]) ? ((max((arr_7 [i_0] [i_0 - 1]), ((4518867576823565835 ? 315325926 : 47864))))) : ((59170 ? 13061 : ((1456 ? var_13 : 620943893)))));
                            var_46 += (((((!(!33))))) / ((-483718981 ? 2530210116 : 7)));
                        }
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_47 ^= 17285325836474994290;
                        var_48 ^= -483718960;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        var_49 = (max(var_49, ((!(((~((-(arr_16 [i_2] [i_1] [i_2]))))))))));
                        var_50 = (min(var_50, (((~(((arr_30 [i_1 - 2] [i_0] [23] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) ? -var_8 : 0)))))));
                        var_51 += (((-32767 - 1) || ((((((1202 ? (arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_2] [i_12]) : (arr_13 [i_0 - 1] [i_1] [8] [i_2] [i_0 - 1])))) ? (((min((arr_15 [i_0] [i_0] [i_0]), 127)))) : 28)))));
                    }
                }
            }
        }
    }
    var_52 = (min(var_52, ((min((6982 * 70), ((-4367659599338324456 ? var_12 : (((var_2 ? -854619608 : var_10))))))))));
    #pragma endscop
}
