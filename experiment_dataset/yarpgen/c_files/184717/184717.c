/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -32761;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_21 = (max(var_21, var_18));
        var_22 = var_4;
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = ((-(-var_12 << var_0)));
        arr_7 [i_1] [i_1] = 32756;
        var_23 = ((-32767 - 1) == var_9);

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_1] [i_2] [i_2] |= (((var_6 + 3767746445) / ((min((min(2147483647, (arr_4 [i_1]))), (min((arr_1 [i_1] [i_1]), 13182)))))));

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_13 [i_1] [i_2] [i_1] = ((!var_16) >= (min((arr_12 [i_1] [0] [i_1 - 1]), (arr_12 [i_1 - 3] [i_1 - 3] [i_1 - 1]))));
                arr_14 [6] [i_2] = ((min((var_17 % var_13), ((-32766 % (arr_1 [i_1] [i_2]))))));
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                arr_18 [i_4] = var_11;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_24 |= (!10190877001106036621);
                            arr_24 [i_4] [i_2] [i_2] [i_2] [i_2] = (((((arr_2 [i_1] [i_2]) <= (((!(arr_1 [i_6] [i_4])))))) || (((min((arr_22 [i_1 - 1] [i_2] [i_4] [11] [5] [i_2] [i_4]), var_8)) <= var_3))));
                            var_25 = (min(var_25, ((min((((-(max(-891094226, (arr_1 [i_1 - 1] [i_2])))))), (--3469111697))))));
                        }
                    }
                }
                var_26 = (max(var_26, var_11));
            }
        }
        arr_25 [i_1 - 2] = (max(5, ((((arr_4 [i_1]) && var_15)))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {

                /* vectorizable */
                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {
                    arr_33 [i_8] [i_8] [5] [5] = var_2;
                    var_27 ^= (arr_31 [i_8]);
                }
                for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    var_28 = (max(var_28, (((!(arr_27 [3] [i_8]))))));
                    var_29 = (max(((min((arr_29 [i_10] [i_8]), (arr_29 [i_10] [10])))), (arr_31 [i_8])));
                    var_30 = var_16;
                }
                for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                {
                    var_31 = (max(var_31, var_14));
                    var_32 = (min(var_32, 17733017205367666480));
                }
                arr_41 [i_8] [i_8] = (arr_39 [i_7] [i_7] [i_8]);
            }
        }
    }
    var_33 = 32760;
    var_34 += 17733017205367666459;
    #pragma endscop
}
