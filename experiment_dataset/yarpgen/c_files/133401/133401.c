/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = (max(var_18, 9035));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [3] = (~var_11);
        var_19 = var_7;
        arr_3 [10] = (~9048);
        var_20 += 2123013053;
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_21 = max(((~(arr_5 [i_1] [1]))), ((((arr_5 [i_1] [i_1]) == ((var_11 ? (arr_5 [i_1] [i_1]) : var_14))))));
        var_22 = ((((max(3, 2)) ? -1393716498 : (max(2761043504602112736, (arr_6 [i_1]))))));
        var_23 = (min(var_23, 65535));
    }
    for (int i_2 = 4; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = 31105;
        arr_11 [i_2] = (max(7738128696719326691, ((((!1) ? ((56501 ? 1601826426 : 1)) : ((max(9034, (arr_9 [i_2] [i_2 - 4])))))))));
        var_24 -= (arr_8 [20]);
        var_25 = (((((-(arr_6 [i_2])))) ? ((~(arr_6 [i_2]))) : ((var_2 ? (arr_6 [i_2]) : var_13))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_14 [1] [i_3] = (max((((((var_14 ? var_16 : (arr_8 [i_3])))) ? (max((arr_13 [i_3] [i_3]), var_12)) : var_14)), 9036));

        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                var_26 = (((arr_8 [i_3]) ? var_6 : 9384927330617332281));
                var_27 = var_0;
                var_28 = (max(var_28, var_9));
            }
            var_29 = ((((max((arr_9 [i_3] [10]), -1353648256))) != 1097752663));
        }

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_30 = (1 * var_16);

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                arr_26 [15] = ((((max(1, var_4))) ? (((-1353648251 ? var_13 : 9048))) : var_3));
                var_31 ^= 9053;
            }
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                arr_29 [i_3] [i_6] [i_8] = ((!(var_15 ^ var_7)));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    arr_32 [i_3] = ((var_3 * (((((arr_15 [i_3] [i_3]) > var_10))))));
                    arr_33 [i_3] [i_3] [i_3] [i_9] = ((-1353648252 ? 56508 : var_6));
                    arr_34 [i_3] [i_3] [i_3] [i_3] [i_3] [i_9] = ((242898516 >= (arr_27 [i_3] [i_8 - 1] [i_3] [i_8 - 1])));
                    var_32 = (max(var_32, ((~(arr_15 [i_9] [i_8])))));
                }
                arr_35 [i_8] = (max(1, 1724572229566880346));
            }
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                var_33 = (!0);
                arr_38 [i_3] [2] [13] [i_3] = var_8;

                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    var_34 = (min(var_34, ((!((((max((arr_24 [i_3] [i_6] [i_6] [i_11]), (arr_9 [i_6] [i_11])))) || (arr_12 [i_3] [i_6])))))));
                    var_35 = (max((max(var_15, (arr_5 [i_3] [10]))), 198));
                    var_36 = (((max((((16424 >= (arr_21 [i_3]))), var_8)))));
                    var_37 = (max((((arr_4 [i_10]) ? (((arr_27 [i_3] [i_10] [i_3] [i_10]) ? (arr_30 [i_10] [i_10] [i_10] [i_11] [i_10] [12]) : 25294)) : (((((arr_25 [i_3] [i_6] [i_11]) != (arr_21 [14]))))))), var_4));
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_45 [i_3] [i_6] [i_3] [i_12] = (arr_27 [i_3] [i_3] [i_10] [11]);
                    arr_46 [10] [10] [10] [10] [i_12] = (arr_22 [i_6] [i_3]);
                    var_38 += (max((max((7 >= var_13), ((var_9 ? (arr_22 [i_3] [i_3]) : 1)))), var_8));
                    arr_47 [8] [0] = var_13;
                    arr_48 [3] [i_10] [3] = (((~var_10) ? var_3 : var_11));
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
        {
            var_39 = ((~((var_4 >> (((arr_21 [i_3]) + 856494898))))));
            arr_51 [1] [1] [i_13] = 2123013053;
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
        {
            var_40 = (min(var_40, 2123013053));
            arr_56 [i_3] [i_14] [i_3] = (var_1 / 18446744073709551584);
            var_41 = (((arr_19 [6] [6] [6]) / (((22 ? -31107 : var_2)))));
        }
    }
    var_42 = 1;
    #pragma endscop
}
