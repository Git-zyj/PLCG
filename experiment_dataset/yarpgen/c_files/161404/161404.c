/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = (max((((!(arr_3 [i_0] [i_0])))), (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_15 ^= (arr_6 [i_0] [i_1] [i_2]);
                        var_16 = ((((((-(arr_6 [i_2] [i_2] [i_1]))))) == (max((var_6 & var_6), ((max(64, 1)))))));
                        var_17 = (max(var_17, 67));
                        var_18 -= (arr_4 [3]);
                    }
                }
            }

            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_19 *= (((((-(arr_13 [i_1] [i_4])))) * var_12));
                var_20 = (arr_9 [i_4] [i_1] [i_0]);
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
            {
                var_21 = ((((((arr_15 [i_1] [i_1]) ? (arr_0 [i_5]) : -12081))) ? (arr_14 [i_5] [i_1] [i_1] [i_0]) : ((((((arr_15 [i_1] [i_1]) && 3590197813)) && (arr_0 [i_0]))))));
                var_22 = (((((arr_0 [i_5]) == var_13)) ? (((arr_0 [i_0]) ? (arr_5 [i_5]) : (arr_5 [i_0]))) : ((max((arr_0 [1]), (arr_5 [i_0]))))));
                var_23 = (((((~(arr_6 [3] [3] [i_0])))) || (4294967295 * 0)));
                var_24 = -67;
            }
            arr_16 [i_1] = ((((max((((!(arr_14 [i_1] [i_1] [10] [i_0])))), 0))) ? (((!(((1 ? (arr_9 [i_0] [i_1] [i_1]) : (arr_8 [i_1] [i_0] [i_1]))))))) : (((!(!-32))))));
            var_25 = (min(var_25, ((((13275 ? (arr_14 [i_0] [i_0] [i_1] [i_1]) : var_11))))));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_26 -= -24941;
            var_27 = (min(var_27, ((((((-8665567332546582722 ? 40594 : 52261))) ? (arr_7 [i_6] [i_0]) : var_3)))));
        }
        /* vectorizable */
        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            var_28 = 0;

            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                arr_24 [i_8] = (arr_18 [i_7 - 2] [i_8 + 2] [i_8 - 2]);
                var_29 = (((arr_21 [i_0]) ? (arr_21 [i_7 - 4]) : (arr_21 [i_7 - 1])));

                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_30 = ((52290 & (arr_23 [i_7 - 1])));
                    arr_27 [i_9] [i_8 + 1] [i_8] [1] [i_0] [i_0] = (((arr_22 [i_0] [i_0]) ? (arr_3 [i_7] [i_7]) : 41));
                    var_31 = (min(var_31, ((!(arr_26 [i_8 + 1] [i_7 + 2] [i_7 - 1] [i_7 - 1])))));
                }
            }
            for (int i_10 = 1; i_10 < 10;i_10 += 1)
            {
                var_32 *= (52742 || 24939);
                var_33 = ((var_11 ? (~4108216215) : var_12));
                arr_30 [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_0] [6]);
            }
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                var_34 |= 65535;
                var_35 = ((~((63 ? 25085 : 16))));
                var_36 = ((!(arr_4 [i_11])));
                arr_33 [i_0] [1] [i_11] = (arr_2 [i_11] [i_0]);
            }
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {
        var_37 |= var_5;
        arr_37 [i_12] [i_12] = (max((arr_29 [i_12] [i_12]), (((var_4 ? (arr_32 [i_12] [i_12]) : var_12)))));
        var_38 = (min(var_38, (arr_6 [i_12] [i_12] [i_12])));
        arr_38 [i_12] = var_3;
    }
    var_39 = -var_7;
    var_40 = (1 || var_1);
    var_41 = var_10;
    #pragma endscop
}
