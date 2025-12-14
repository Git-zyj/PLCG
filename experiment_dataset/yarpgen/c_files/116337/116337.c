/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_13 = (arr_2 [1]);
        var_14 = (191 - 30752);
        var_15 -= ((((255 <= (arr_0 [i_0]))) ? (min((arr_2 [i_0]), var_7)) : ((((arr_1 [i_0]) - 255)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_16 -= (((arr_4 [i_1] [4]) || ((max((arr_4 [i_1] [i_1]), var_0)))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_17 = (((((arr_0 [i_1]) < (((arr_6 [i_1]) % var_9)))) ? (max((arr_6 [i_1]), (arr_0 [i_2]))) : (arr_6 [i_1])));
            var_18 = ((((min(186, 228))) ? 4294967295 : (((max(17226470215272072488, (arr_1 [12]))) % (48744 ^ var_4)))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_19 *= (arr_6 [i_1]);

            for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_17 [i_1] [i_1] [1] [i_1] [i_1] [11] [i_1] = ((-59 ? 848265730 : (arr_16 [i_6 + 2] [i_3])));
                            var_20 += (~-848265716);
                        }
                    }
                }
                arr_18 [12] [12] [1] = (((!848265741) ? (~-1) : (63 < var_1)));
                arr_19 [i_1] [i_1] [i_3] [i_4] = ((arr_2 [i_1]) ? 848265736 : 524287);
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
            {
                var_21 = (((arr_13 [i_1] [13] [i_1] [i_1]) >> (18446744073709551611 - 18446744073709551585)));
                var_22 = (max(var_22, var_0));
            }
            for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
            {
                var_23 = (max(var_23, (((var_4 ? (((1 <= (arr_13 [12] [12] [5] [7])))) : (arr_6 [4]))))));
                arr_27 [i_1] [3] [5] = (!((((arr_21 [i_1]) ? -9223372036854775801 : 524302))));
            }
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                var_24 = (arr_26 [0] [11] [11] [11]);

                for (int i_10 = 4; i_10 < 12;i_10 += 1)
                {
                    var_25 = (~3);
                    var_26 = 1956970922;
                    var_27 += var_4;
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 12;i_12 += 1) /* same iter space */
                    {
                        var_28 = var_12;
                        var_29 = (min(var_29, (((((var_11 > (arr_5 [i_12 + 1] [i_11] [2]))) ? (arr_23 [9] [i_9 - 1] [5]) : (arr_35 [i_12 + 1] [2] [2] [8] [i_12 + 1] [i_12 + 1] [i_3]))))));
                        var_30 = (max(var_30, ((((arr_13 [i_9 - 1] [1] [i_11] [9]) ? 0 : (arr_31 [i_1] [i_1] [i_1] [i_1]))))));
                    }
                    for (int i_13 = 1; i_13 < 12;i_13 += 1) /* same iter space */
                    {
                        var_31 = (((arr_30 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1]) ? (arr_34 [0] [i_13 - 1] [12] [i_13 + 1] [i_9 - 1]) : -24256));
                        arr_39 [10] [i_3] [i_9] [i_3] [i_13] = (((13 ? 9 : 7446332484612131805)));
                        var_32 = (max(var_32, (arr_9 [i_13 + 2] [i_9 - 1] [2] [3])));
                        var_33 |= (arr_34 [i_1] [5] [5] [i_11] [5]);
                    }
                    var_34 -= (-2459689604567758184 > var_2);

                    for (int i_14 = 2; i_14 < 13;i_14 += 1)
                    {
                        arr_43 [7] [i_14] [i_11] [1] [i_3] [i_1] = (arr_34 [i_14 + 1] [i_14] [i_14 + 1] [i_14 - 2] [i_9 - 1]);
                        arr_44 [10] [i_3] [i_9 - 1] [i_11] [3] = ((!(arr_38 [i_9 - 1] [i_14 - 1] [i_14 - 1] [i_11])));
                    }
                    var_35 = ((((848265748 ? 1 : -848265742))) || -1);
                }
            }
            var_36 = 848265742;
        }
        arr_45 [i_1] [7] = 524290;
    }
    var_37 = var_0;
    var_38 = var_6;
    #pragma endscop
}
