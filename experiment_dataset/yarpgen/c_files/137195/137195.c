/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (max(((var_2 ? var_0 : ((var_4 ? var_4 : var_10)))), (((~var_6) ? (min(0, var_3)) : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((max((!var_4), ((!(arr_6 [i_0] [i_1]))))))));
                arr_8 [i_0] = ((((-((-(arr_3 [i_0])))))) ? ((((!3066334371756901254) <= ((((arr_4 [i_0]) == 3477)))))) : ((((var_5 ^ (arr_7 [i_0] [0] [0]))) & (arr_5 [i_0] [i_0] [i_0]))));
                var_13 = (min(var_13, (((-(((arr_2 [i_1]) % (arr_5 [i_0] [i_1] [i_1]))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            arr_13 [i_3] = (((arr_12 [i_3 - 2]) ? (arr_12 [i_2]) : 9314674997683468982));
            arr_14 [i_3] = var_4;
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_18 [i_2] [i_2] = ((~((var_4 + (arr_17 [i_4])))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        {
                            var_14 = (((~var_4) ? (max(511, var_3)) : var_0));
                            var_15 &= ((~(((((arr_10 [i_2]) >= var_5)) ? (arr_17 [i_2]) : (!var_3)))));
                            arr_28 [i_6] = (max(1068437329, 3485));
                            arr_29 [i_5] [i_5] [i_5] [i_6] &= (min((((!(arr_26 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7])))), 3477));
                            arr_30 [1] [12] [i_5] [i_5] [i_6] = ((-(var_5 / var_7)));
                        }
                    }
                }
            }
            var_16 = ((!((((30 ? (arr_21 [i_2] [i_2]) : (arr_21 [3] [6]))) < (((min((arr_19 [i_2] [i_2] [i_2] [i_4]), 85))))))));
            var_17 = ((((9223372036854775788 ? 8573 : 4294966804)) <= ((max((arr_27 [13] [13] [13]), -1725869182)))));
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 23;i_9 += 1)
                {
                    {
                        arr_38 [i_8] [i_4] [i_2] [i_2] = ((((var_7 && (((62059 ? (arr_25 [14] [1] [i_2] [i_2] [i_2] [17] [i_2]) : -2045178526))))) ? var_4 : ((((!(-6469 && -948943066)))))));
                        var_18 = ((((((arr_25 [i_4] [i_9] [i_8] [1] [i_4] [i_2] [i_2]) ? (((!(arr_33 [i_2] [i_8])))) : (((arr_19 [i_2] [i_4] [i_8] [i_9 + 1]) - (arr_37 [i_2] [i_4] [i_8] [4])))))) ? ((min(-8557, 32765))) : (arr_17 [i_2])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    var_19 -= max(var_5, ((2862117521735350947 ? (arr_10 [i_2]) : (arr_10 [i_2]))));
                    arr_46 [i_2] [i_10] [i_11] |= var_10;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_20 = (arr_52 [i_2] [5] [i_11] [15] [i_2]);
                                var_21 -= (((((~(arr_41 [i_11] [i_11] [i_11])))) > ((-var_2 ? 12 : ((min(var_7, var_8)))))));
                            }
                        }
                    }
                    var_22 = (max(var_22, (((-26170 ? ((3066334371756901279 ? var_8 : var_4)) : ((-(((arr_27 [i_2] [i_2] [i_2]) ? (arr_45 [15] [15] [15] [20]) : (arr_43 [i_2] [i_10]))))))))));
                }
            }
        }
        var_23 = (min(var_23, (arr_10 [i_2])));
        arr_53 [15] = var_4;
    }
    for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
    {
        var_24 = ((1 ? (arr_48 [9] [9] [i_14]) : (!-841386997)));
        arr_58 [i_14] &= ((max((~32746), -8579)) != var_3);

        /* vectorizable */
        for (int i_15 = 2; i_15 < 23;i_15 += 1) /* same iter space */
        {

            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                arr_63 [21] [i_15] [i_16] = (((var_2 ? (arr_33 [i_14] [i_15]) : 23882)));
                var_25 = ((((((((var_2 ? (-9223372036854775807 - 1) : var_2)) + 9223372036854775807)) + 9223372036854775807)) >> (((arr_54 [i_14]) - 22073))));
                var_26 = var_2;
            }
            var_27 = (((arr_44 [i_14]) ? (arr_44 [i_14]) : var_5));
        }
        for (int i_17 = 2; i_17 < 23;i_17 += 1) /* same iter space */
        {
            arr_67 [23] [i_17] [i_17] = (((((((var_10 ? (arr_26 [13] [i_14] [i_14] [i_14] [i_17 - 1] [i_17]) : var_6))) ? (min((arr_21 [i_14] [i_14]), 3484)) : (((-(arr_47 [17])))))) >= ((max(((var_8 ? (arr_49 [i_17] [i_17] [i_14]) : var_9)), (((var_3 ? (arr_48 [i_14] [0] [i_14]) : (arr_33 [i_14] [i_17])))))))));
            var_28 = (min(var_28, 0));
            arr_68 [i_14] [1] [5] = var_8;
        }
    }
    var_29 = 4398044413952;
    #pragma endscop
}
