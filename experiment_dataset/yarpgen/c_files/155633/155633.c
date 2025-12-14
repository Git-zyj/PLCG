/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (((((min(4750, -1714385466218768959)))) ? 30344 : var_10));
        arr_5 [i_0] [i_0] = arr_0 [i_0];
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (max(-118, (max((max(var_11, 3196665460)), (min((arr_7 [i_1]), 3196665440))))));

        for (int i_2 = 4; i_2 < 16;i_2 += 1)
        {
            var_12 = var_6;
            var_13 = (((min((max(var_7, var_0), var_5)))));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] = var_0;
            arr_16 [i_1] [i_3] = ((((!3650602616) >= (min((arr_10 [i_3]), 1098301837)))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_14 = (max((arr_13 [i_1] [i_1 - 1] [i_4]), (max((arr_13 [i_1] [i_1 - 1] [i_1]), 6284950300353639304))));
            var_15 = (min(var_15, (((((min(((min(0, var_0))), (max(var_3, 12347399056531578668))))) ? var_9 : (arr_13 [i_1] [i_1] [i_4]))))));
            arr_19 [8] [i_4] [i_4] = ((6284950300353639314 ? (((max(var_5, 1)))) : (max((arr_17 [i_1 - 1] [i_1 - 1]), (min(6, 38697))))));
        }
        var_16 = (arr_17 [i_1 - 1] [i_1]);
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_17 |= 1;

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_18 = ((((arr_25 [i_5] [i_5] [i_6]) ? -var_7 : 183)));

            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    arr_32 [i_5] [i_6] [i_7] [i_7] [1] = (((((+((((arr_21 [i_5] [i_6]) < 65)))))) ? ((max(1, var_10))) : ((~(max(var_5, 11))))));
                    arr_33 [i_5] [i_6] [i_7] [i_8] = max((min((((arr_7 [i_8]) - var_2)), var_3)), (arr_29 [i_7 - 1] [i_6] [i_5]));
                }
                var_19 = ((var_11 == (min(((-(arr_20 [i_6]))), (!-25359)))));
                var_20 = (min(var_20, 1));
                arr_34 [i_5] [i_6] [i_7] [i_7] = (min(6284950300353639304, var_9));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_21 = 0;
                var_22 = (((max(5062413504085295998, var_3))));
                var_23 = 205;
            }
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_24 *= ((var_9 >= (((min(var_6, (arr_13 [9] [i_6] [i_10])))))));
                var_25 = 1;
            }
            arr_39 [i_6] = 150;
            var_26 = ((65535 <= (min((max(1, 1734699636351530365)), var_10))));
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
        {
            var_27 = (max(1, 700424081));
            var_28 = (max((575433062 && 180), 0));
            arr_43 [i_11] [i_11] [i_5] = ((var_3 == (min(var_6, (max(131071, 9))))));
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
        {
            arr_46 [i_5] [1] &= (1622611802 & var_9);
            var_29 = (max((max(var_6, (arr_38 [i_5] [i_5] [i_5] [i_12]))), (var_1 & 9605352453758016633)));
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        var_30 = (~var_4);
        var_31 = var_7;
        arr_51 [i_13] = var_10;
        var_32 = 1;
    }
    var_33 = ((max(1, var_9)));
    #pragma endscop
}
