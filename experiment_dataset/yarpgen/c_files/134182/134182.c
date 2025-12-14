/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] = (min(281580234, (max(1233219647, 8619992040645195742))));
                    arr_9 [i_0] [i_0] = ((-(((~801484568) ^ ((var_8 ? (arr_2 [11]) : (arr_2 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = (max((((-(min(var_9, -6))))), ((0 ? -8418262286766951931 : 11))));
                                var_17 = (((((~(max((-2147483647 - 1), (arr_2 [i_3])))))) <= (max((max((arr_0 [i_0]), var_14)), (arr_5 [i_3 - 1] [i_1 + 1])))));
                                var_18 = (min((((arr_6 [i_1 + 1] [i_1] [i_2]) * (arr_6 [i_1 - 2] [i_1 - 2] [i_1]))), (arr_6 [i_1 + 1] [i_2] [i_1])));
                            }
                        }
                    }
                }
                var_19 = (max(var_19, (max((min((min((arr_6 [i_0] [i_0] [i_0]), -7504434504296019670)), 174)), ((((((var_4 ? var_6 : var_8))) ? ((var_0 ? (arr_3 [i_0] [i_0]) : var_14)) : ((max(var_5, 174))))))))));
            }
        }
    }
    var_20 = ((var_7 << (!var_11)));

    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            var_21 |= (((arr_17 [i_5]) << (-var_11 - 3137947744951946998)));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    {
                        var_22 += var_8;

                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            arr_31 [i_6] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = 16989;
                            var_23 = -174;
                            var_24 = 81;
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_25 = (var_13 ? (arr_26 [i_10] [1] [1] [i_5]) : var_3);
                            arr_34 [i_5] [i_5] [i_5] |= (((0 && (arr_33 [i_5] [i_6 + 2] [i_5] [i_8] [i_10]))) && (((arr_18 [i_7]) && var_3)));
                        }
                    }
                }
            }
        }
        var_26 = (max(var_26, var_7));
        var_27 = (((((arr_32 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_27 [i_5]) : (arr_27 [i_5]))) >> (var_14 + 763699269)));
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        var_28 = (max(var_28, ((min(-801484568, 1)))));

                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            var_29 = (min(((1 >> ((((var_15 ? (arr_37 [i_14]) : var_12)) + 16)))), var_14));
                            var_30 = (((min(var_15, (min(82159223, var_14))))) ? ((min((!var_6), ((var_5 ? var_0 : (arr_22 [i_12] [i_12] [i_12] [i_12])))))) : (arr_38 [i_11] [i_12] [i_13]));
                        }
                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            var_31 ^= (~-11009);
                            var_32 = (min((((1 ? -1388610435 : (23098 && 134184960)))), (-9223372036854775807 - 1)));
                            var_33 = ((4436826650404697200 >= ((min((arr_27 [1]), (arr_17 [i_11]))))));
                            var_34 = (max(var_34, (((max(((min((arr_26 [i_12] [i_16] [i_13] [14]), var_2))), (arr_27 [i_12])))))));
                        }
                    }
                }
            }
        }
        var_35 = (max(var_35, var_11));
        var_36 = -10;
        var_37 = (min(var_37, 1));
    }
    for (int i_17 = 0; i_17 < 21;i_17 += 1) /* same iter space */
    {
        var_38 = (min(801484568, (min((102 - 196), (min((arr_16 [i_17]), var_5))))));
        arr_50 [i_17] = ((!var_6) ? (1256792819 % 10547) : (-82159224 && 0));
        arr_51 [i_17] [i_17] &= ((!((min(((var_5 * (arr_16 [i_17]))), ((var_13 ? (arr_22 [i_17] [i_17] [i_17] [i_17]) : var_2)))))));

        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {
                for (int i_20 = 3; i_20 < 19;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        {
                            var_39 = (4294967295 || ((max((max(var_4, var_8)), (-1566881440 || 1056964608)))));
                            arr_68 [i_17] &= (max((((arr_61 [i_17] [i_18] [i_17] [6]) * (arr_61 [i_17] [i_18] [i_21] [0]))), (((~(arr_65 [i_20 - 3] [i_20 - 1] [i_20 + 2]))))));
                        }
                    }
                }
            }
            var_40 ^= var_10;
            var_41 += (max(((max((max((arr_43 [i_17] [i_17]), 275126070)), var_1))), (max((var_2 - -413266690651361022), -13155))));
            /* LoopNest 2 */
            for (int i_22 = 1; i_22 < 20;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 21;i_23 += 1)
                {
                    {
                        var_42 = (!9);
                        var_43 = ((+((((((arr_19 [i_17] [i_18] [i_22]) % var_0))) ? (arr_28 [i_17] [i_18] [i_22] [i_23] [i_17]) : (((((arr_19 [i_17] [i_18] [i_22]) == 1))))))));

                        for (int i_24 = 3; i_24 < 20;i_24 += 1)
                        {
                            var_44 += (((min(var_3, (!1))) & ((max((arr_25 [i_22 - 1] [i_17] [i_22] [i_24] [i_24 - 2] [i_24]), (arr_73 [i_22 - 1] [1] [i_22 + 1] [i_24 - 1]))))));
                            var_45 = -var_9;
                        }
                        for (int i_25 = 0; i_25 < 21;i_25 += 1)
                        {
                            var_46 = (max(var_46, (min((min((~0), (((var_9 >> (9323 - 9308)))))), var_13))));
                            var_47 = ((!((((var_0 ? 174 : var_13))))));
                        }
                    }
                }
            }
        }
        for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
        {
            var_48 = 2199022993408;
            var_49 = (arr_80 [i_17] [i_17] [i_26]);
        }
    }
    #pragma endscop
}
