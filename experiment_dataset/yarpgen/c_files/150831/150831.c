/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((((7 <= var_5) ? ((var_9 ? -1 : 15452565499597692923)) : 55126))) ? ((-(var_9 && 10408))) : var_0);

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((arr_1 [i_0 + 2] [i_0 + 2]) ? (arr_3 [i_0]) : var_9)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (((~((var_4 ? -1218497475 : var_11)))));
                    var_21 = 8422;
                    arr_10 [i_0] [i_1 + 1] = ((((((-9223372036854775807 - 1) & var_4))) / ((var_14 ? var_6 : (arr_5 [i_0])))));
                    arr_11 [i_0] [i_1] [i_0] = (((min(var_8, (((var_10 | (arr_2 [i_1 - 1])))))) > ((min(122876164, (max(-1, 8442)))))));
                }
            }
        }
        arr_12 [i_0] = ((max(37898, var_15)));

        /* vectorizable */
        for (int i_3 = 3; i_3 < 6;i_3 += 1)
        {
            arr_17 [i_0] = -55158;
            var_22 = (max(var_22, -var_17));
            arr_18 [i_3 - 3] [i_3] [i_0] = var_19;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 7;i_5 += 1)
                {
                    {
                        arr_25 [i_0] [i_0] [i_3] [i_0] [i_0 + 1] = var_18;
                        var_23 = ((((arr_20 [i_0] [i_0] [i_0 + 2]) ? 8436 : (arr_3 [i_0 + 2]))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_24 = var_18;
            var_25 |= ((~(min(var_6, var_7))));
            var_26 = (-4938179325341723725 ? (1827077990 & 8428) : 37914);
        }
    }
    for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
    {
        var_27 = ((max((((var_18 ? var_11 : var_17))), (96 - 15180909729812766311))) % ((-(11510161656175119569 + 11054601116172563227))));
        var_28 = (max(var_28, ((min(18446744073709551607, (((arr_26 [i_7 + 1] [i_7 + 2] [i_7 + 1]) ? 27621 : ((2587140658 ? var_5 : 65535)))))))));
        arr_30 [i_7] [i_7] = var_4;
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 11;i_8 += 1)
    {
        var_29 = (((((arr_32 [i_8]) && (-2147483647 - 1))) && var_8));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    arr_37 [i_9] = ((var_1 < (((arr_34 [i_8 - 4] [13] [i_9]) + var_12))));
                    var_30 *= 7795834539930357853;
                    arr_38 [i_9] [i_9] [i_10] = ((10978546107048464471 ? (arr_31 [i_8 + 3]) : (10380 && 65535)));
                }
            }
        }
        arr_39 [i_8] = (arr_36 [i_8 - 1] [i_8] [i_8 - 4] [i_8]);
    }
    for (int i_11 = 3; i_11 < 18;i_11 += 1)
    {
        arr_43 [i_11 - 1] = (((var_18 && var_9) ? (min(((var_11 + (arr_41 [i_11 + 3]))), ((3 ? 56900 : 10400)))) : 55126));
        var_31 = (~678589226);
        arr_44 [i_11] = 49311;
    }
    #pragma endscop
}
