/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (min(var_11, 47154));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_12 = (((((((min((arr_2 [i_0]), (arr_1 [i_0] [i_0])))) ? -2098616007 : -var_6))) ? (2098616006 % 500347635) : (((((((arr_2 [i_0]) ? var_4 : (arr_2 [i_0])))) && (arr_2 [i_0]))))));
        var_13 = 0;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] = 567631774;
        arr_6 [i_1] = (((arr_0 [i_1]) + (arr_2 [i_1])));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
        {
            arr_11 [i_2] [i_3] = 4;
            arr_12 [i_2] [i_3] [i_2] = (min((arr_0 [i_3 + 4]), (((arr_0 [i_3 + 2]) ? (arr_0 [i_3 - 1]) : (arr_0 [i_3 - 1])))));
            arr_13 [i_2] = (arr_7 [i_2] [i_3]);
        }
        for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
        {
            var_14 = (arr_10 [i_2] [i_2]);
            var_15 += (38 | 55509);
        }
        for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_16 = max(((min(var_6, (arr_8 [i_5 + 4])))), (max((arr_24 [i_2 + 1] [i_2 + 2] [i_2] [i_2] [i_2]), 54715)));
                        var_17 -= ((-2098616000 ? (arr_14 [i_7] [i_7] [i_7]) : (((((arr_2 [i_6]) ? 5341 : var_0)) | 32763))));
                    }
                }
            }
            arr_26 [i_2] [i_5] [i_5] = (max(((((~var_7) < 58))), (arr_1 [i_2] [i_5])));
        }
        for (int i_8 = 3; i_8 < 12;i_8 += 1) /* same iter space */
        {
            var_18 = (min(var_18, var_3));
            arr_31 [i_2] [8] &= 1832850906;
            arr_32 [i_2] = (min((min((var_0 + 0), (((-(arr_17 [i_2])))))), (arr_17 [i_2])));
            arr_33 [i_2] = (min(((8460637279178440048 ? (((arr_1 [i_2] [i_2]) ? (arr_27 [i_2] [i_2] [i_8]) : (arr_10 [i_8] [i_2]))) : (min(var_6, (arr_1 [i_2] [i_2]))))), 0));
        }
        arr_34 [i_2] [i_2] = (((((arr_21 [i_2] [i_2]) ? -2098616010 : (arr_9 [i_2]))) & ((((((max(-2, -567631775))) >= (((arr_30 [i_2]) ? 122 : var_6))))))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] [i_9] = (((var_8 | var_2) | 10));
        var_19 = ((-2117895358 ? (arr_8 [i_9 + 3]) : (arr_8 [i_9])));
    }

    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_20 = 3911802810928975557;
        var_21 -= 10005;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
        {
            var_22 = ((((max(696771817, (arr_1 [i_11] [i_11])))) & (((arr_39 [i_11]) + (arr_40 [i_11])))));
            /* LoopNest 2 */
            for (int i_13 = 4; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    {
                        var_23 -= (-1832850906 ? (((arr_40 [i_12]) ? 55533 : ((((arr_42 [i_11] [i_12]) == var_7))))) : ((((((arr_40 [i_14]) - 32760)) != 13520))));
                        var_24 = (min(var_24, ((min((max((36394 % var_4), var_5)), var_9)))));
                        arr_49 [i_11] [i_11] [i_11] = (((((arr_0 [i_11]) ^ 0))) ? (((var_2 ? (((arr_46 [i_11] [i_12] [i_12]) & (arr_48 [i_11] [i_11] [i_11] [i_11]))) : ((2098615999 ^ (arr_43 [i_11] [i_11])))))) : (max(1, ((var_5 | (arr_46 [i_11] [i_11] [i_14]))))));
                        var_25 = (((((((((arr_0 [i_11]) ^ 567631774))) ? ((55491 ? 9987 : 17057814920359802279)) : ((var_5 ? var_8 : 4760075434191860659))))) ? (((min(-1, 237942734)))) : var_6));
                    }
                }
            }
            arr_50 [i_11] = (max((((min(10002, -567631756)))), (arr_40 [i_11])));
            var_26 = (min(var_26, ((((-(~16588767749819523626))) & (max(567631755, 18446744073709551615))))));
        }
        for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
        {
            var_27 = (min(var_27, (((-2 & (min(-1094205355, ((-31 ? -8718267681393443216 : (arr_41 [i_15]))))))))));
            var_28 -= ((((max(18446744073709551604, ((min(567631774, 3070604049917913668)))))) ? 567631755 : ((max(-127, (arr_46 [i_11] [i_11] [i_11]))))));
        }
        /* vectorizable */
        for (int i_16 = 1; i_16 < 21;i_16 += 1)
        {
            var_29 = (arr_39 [i_11]);
            arr_55 [i_11] [i_11] = -var_7;
        }
        arr_56 [i_11] = var_1;
        var_30 |= 18725;
        arr_57 [i_11] = ((!(!1857976323890027983)));
        var_31 = ((-(((arr_2 [i_11]) / (arr_38 [i_11])))));
    }
    var_32 = (-10 | var_2);
    #pragma endscop
}
