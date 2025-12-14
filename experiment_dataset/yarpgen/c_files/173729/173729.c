/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((6480 >= -28628) ^ ((var_6 ? (~var_6) : -1)));
    var_16 = (max(var_16, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((((((arr_1 [16]) ^ (max((arr_3 [i_0] [i_1]), var_1)))) ^ (min((arr_1 [14]), ((var_11 ? (arr_3 [i_1] [i_0]) : var_2)))))))));
                var_18 = (max(var_18, -var_6));
                var_19 = var_12;
                var_20 = (max(var_20, (((((max(((65 ? 8037 : 32756)), (arr_0 [6] [6])))) ? (max(-12133, ((-1 ? -12133 : 12133)))) : ((var_11 ? (arr_1 [2]) : (arr_1 [16]))))))));

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_21 = (min(var_21, ((((0 & ((((!(arr_7 [i_0] [16] [16] [i_2])))))))))));
                    var_22 = (max(var_22, (((0 ? 0 : 1)))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (((var_8 ? 28627 : -var_4)));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_23 = (arr_8 [i_3 + 2] [i_3 + 2] [i_3 + 1]);
        arr_12 [i_3] = ((var_5 ? var_7 : var_7));

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_24 = (min(var_24, ((((arr_3 [7] [i_3 - 2]) ? var_11 : (arr_3 [i_3 + 1] [i_3 - 2]))))));
            arr_15 [i_3] = (((var_11 ? var_3 : (arr_10 [i_4]))));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_25 = var_11;
            var_26 = (max(var_26, (((var_5 ? (arr_1 [2]) : var_4)))));

            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {

                for (int i_7 = 4; i_7 < 11;i_7 += 1)
                {
                    var_27 = ((-(arr_22 [i_3] [i_3] [i_6] [3])));
                    var_28 = (max(var_28, ((((((!(arr_17 [4] [4])))) / var_2)))));
                }
                var_29 = (min(var_29, (~var_14)));
                var_30 = (max(var_30, (arr_22 [i_3 + 1] [i_6] [i_3] [i_3 - 2])));
            }
            var_31 = (((var_11 ? var_12 : var_2)));
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_32 = var_2;
            var_33 = (max(var_33, (((arr_13 [i_8]) * (arr_5 [i_3 - 1] [i_3 - 2] [i_8])))));
            arr_28 [i_3 + 2] [i_3 + 2] [i_3] = -var_6;
        }
        var_34 = (max(var_34, ((((var_10 ? (arr_22 [i_3] [6] [i_3] [6]) : (arr_4 [i_3] [i_3]))) ^ (arr_19 [i_3 - 1])))));
    }
    for (int i_9 = 2; i_9 < 21;i_9 += 1)
    {
        var_35 = (max(var_35, ((max(((-var_9 ? (arr_29 [i_9 - 2]) : (arr_30 [i_9 - 2]))), (arr_30 [i_9]))))));

        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            var_36 = (min(var_36, (((~(max((min(-7847311859685687407, var_12)), (((var_2 ? var_0 : var_3))))))))));
            var_37 = (min(var_37, -7847311859685687407));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    {
                        var_38 = (arr_29 [i_9 - 2]);
                        var_39 = (max(var_39, 30));
                        var_40 = (max(var_40, (((((max(var_5, (arr_31 [i_9] [i_11])))) ? (((+(min((arr_34 [i_9] [i_10] [i_11]), 65529))))) : (((min((arr_30 [i_11]), (arr_37 [i_9 + 1] [i_9 + 3] [i_10] [i_11] [i_9 + 1] [i_12]))) & ((max(var_7, -7847311859685687407))))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {
                        arr_44 [i_13] = ((((((arr_33 [i_9 + 2] [i_9 + 1] [i_9 + 2]) * var_14))) < (min(((~(arr_37 [i_9] [i_10] [i_9] [i_13] [i_13] [i_9]))), (var_2 % var_4)))));
                        var_41 = (max(var_41, (((((max((arr_38 [i_9 + 1] [i_9 + 1] [i_9 + 1] [1] [i_9 - 2]), (arr_38 [i_9 + 2] [i_9 + 2] [i_9 + 2] [3] [i_9 - 2])))) ? (((var_7 ? var_1 : (arr_33 [i_10] [i_13] [i_14])))) : (min((arr_29 [i_9 + 2]), (((arr_43 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_14]) ? var_1 : var_9)))))))));
                        var_42 = (min(var_42, (!var_0)));
                        var_43 = (min(var_43, var_13));
                        var_44 = (max(var_44, (((-(((!(((~(arr_32 [i_14]))))))))))));
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
        {
            var_45 = min((((((var_6 ? (arr_37 [i_15] [0] [0] [i_9 + 2] [0] [0]) : -1820163760))) ? var_4 : ((min(var_10, var_13))))), var_0);
            var_46 = (max(var_14, ((~(arr_33 [i_9 + 1] [i_9 + 2] [i_9 + 2])))));
        }
        for (int i_16 = 2; i_16 < 20;i_16 += 1)
        {
            arr_53 [i_16] [i_16] = (max(-22, (((2977867885 > var_1) ? (!var_12) : ((var_11 ? (arr_52 [i_16]) : var_6))))));
            var_47 = (max(var_47, (((~(arr_38 [i_9] [i_16 + 4] [i_16 - 2] [i_9 + 1] [i_9 + 1]))))));
            var_48 = (min(var_48, (((!var_3) ? var_5 : ((((arr_47 [i_16 + 3] [i_9 - 1]) % (arr_47 [i_9 + 3] [i_16 + 3]))))))));
            /* LoopNest 2 */
            for (int i_17 = 2; i_17 < 22;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    {
                        var_49 = ((~((-1054360216 / (max(var_2, (arr_38 [i_17 - 2] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 + 2])))))));
                        var_50 = (min(var_50, (arr_37 [i_18] [i_17] [i_17 - 2] [i_16 - 1] [i_16 - 1] [1])));
                    }
                }
            }
        }
    }
    for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
    {
        var_51 = (~var_7);
        var_52 = (min(var_52, ((((((arr_38 [i_19] [i_19] [i_19] [3] [i_19]) ? (arr_38 [1] [i_19] [i_19] [i_19] [1]) : var_9)) / (arr_64 [i_19] [i_19]))))));
    }
    for (int i_20 = 0; i_20 < 23;i_20 += 1) /* same iter space */
    {
        var_53 = (max(var_53, (((-(max((((arr_47 [i_20] [i_20]) - -1)), ((-12152 ? var_10 : var_10)))))))));
        arr_68 [i_20] [i_20] = (max(28855, 1));
        var_54 = ((((min((max(14310802521830027388, 9223372036854775807)), 1))) ? (max(18446744073709551610, ((min(1, 65531))))) : -7796178325817589489));
    }
    var_55 = (max(var_55, var_11));
    #pragma endscop
}
