/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_10 &= (var_9 + var_5);
        var_11 &= 17151982294772460015;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            var_12 = ((~(arr_3 [i_2 - 1])));
            var_13 = (max(var_13, (((((var_4 | (arr_3 [i_1]))) * 1294761778937091601)))));
            var_14 ^= ((!(arr_2 [i_2 + 4])));
            var_15 = (max(var_15, (arr_2 [i_2 - 1])));
        }
        arr_7 [i_1] = (((arr_4 [i_1] [i_1] [i_1]) ? (((arr_4 [i_1] [i_1] [i_1]) | (arr_4 [i_1] [i_1] [i_1]))) : (((arr_3 [i_1]) + (arr_5 [i_1])))));
        var_16 = (max(var_16, ((((((-57 <= (arr_4 [i_1] [i_1] [i_1])))) * 47)))));
        var_17 = 10;
    }
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_18 = (min((arr_8 [i_3]), ((-(arr_9 [i_3 + 3] [i_3])))));
        var_19 = 0;
        var_20 = (arr_6 [i_3] [i_3 + 2] [i_3]);
        var_21 = (min(var_21, ((min((arr_0 [1]), (max(var_4, 0)))))));
        var_22 = (~var_2);
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        arr_12 [i_4] [i_4] = (((!var_2) ? (~123) : ((-(arr_1 [i_4])))));
        var_23 = (!((((arr_6 [i_4] [i_4] [i_4]) ? 206 : 2312540614835291240))));
        var_24 = arr_11 [i_4] [i_4];
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_25 = 1294761778937091600;
            arr_19 [i_6] = var_0;
            var_26 = (max((arr_13 [i_5] [i_6]), (((arr_16 [i_6] [i_6] [i_6]) ? 216 : (arr_6 [i_5] [i_5] [i_6])))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                var_27 = (arr_23 [i_8] [i_7] [i_5]);
                arr_24 [i_7] [i_7] [i_8] = (arr_2 [i_8]);
                var_28 = (((arr_16 [i_7] [i_7 + 1] [i_7]) ? (arr_16 [i_7] [i_7 + 1] [i_7]) : (arr_16 [i_7] [i_7 + 1] [i_7])));
                var_29 = (max(var_29, (((255 + (arr_16 [i_5] [i_7 + 1] [i_8]))))));
                var_30 = (arr_6 [i_7 + 1] [i_7 + 1] [i_7 + 1]);
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                var_31 -= (((var_7 | 60) ? (arr_5 [i_5]) : var_0));

                for (int i_10 = 1; i_10 < 17;i_10 += 1)
                {
                    var_32 = (min(var_32, (arr_28 [i_10] [i_9] [i_7] [i_5] [i_5])));
                    var_33 = 1294761778937091607;
                    var_34 = ((((!(arr_16 [i_7] [i_7] [i_9]))) ? var_5 : (arr_21 [i_7])));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_35 = (((arr_18 [i_5] [i_5] [i_5]) ? var_5 : (arr_18 [i_7] [i_9] [i_11])));
                    var_36 = (((arr_30 [i_5] [i_7] [i_7] [i_7]) % (arr_15 [i_11] [i_5])));
                    var_37 = arr_22 [i_11] [i_9] [i_7] [i_5];
                    var_38 = (~-var_6);
                }
                for (int i_12 = 3; i_12 < 17;i_12 += 1)
                {
                    arr_37 [i_5] [i_7] = (arr_6 [i_5] [i_7 + 1] [i_9]);
                    var_39 = (((((arr_22 [i_5] [i_7] [i_9] [i_12]) && (arr_33 [i_7] [i_12]))) ? (arr_28 [i_5] [i_7] [i_12] [i_12] [i_5]) : (((arr_5 [i_5]) ? var_8 : 17151982294772460006))));
                }
            }
            var_40 |= ((var_6 * (((arr_13 [i_5] [i_7]) ? -20 : (arr_21 [i_5])))));
        }
        arr_38 [i_5] [i_5] = (max((~60), (min((min(var_8, 17151982294772460006)), (min(var_9, var_0))))));
        var_41 = ((((((arr_17 [i_5]) >> (-var_4 - 2499896851689078626)))) ? ((min(((-20 ? -87 : var_6)), (arr_3 [i_5])))) : ((0 ? var_8 : (max(-5, (arr_26 [i_5] [i_5] [i_5])))))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
    {
        arr_43 [i_13] = (arr_27 [i_13] [i_13] [i_13] [i_13]);
        var_42 = (max(var_42, (arr_29 [i_13] [i_13] [i_13] [i_13] [i_13])));
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
    {
        var_43 = (min(var_43, (((!((((((~(arr_26 [i_14] [i_14] [i_14])))) ? (42 + 118) : 10))))))));
        var_44 -= ((((!(((98 ? (arr_4 [i_14] [i_14] [i_14]) : -122))))) ? (((arr_42 [i_14]) * (arr_23 [i_14] [i_14] [i_14]))) : (((-var_5 && ((min(42, -25))))))));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    {
                        var_45 = ((-((~(((var_7 != (arr_52 [i_14] [i_15] [i_16] [i_17]))))))));
                        var_46 = (max(var_46, (arr_18 [i_16] [i_16] [i_16])));

                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
                        {
                            var_47 = (arr_31 [i_14] [i_15] [i_16 + 1]);
                            arr_58 [i_14] = (((arr_18 [i_16 - 1] [i_16] [i_16 - 1]) ? (arr_4 [i_16 + 1] [i_16 + 1] [i_16 - 1]) : (arr_25 [i_17] [i_17] [i_16 + 1] [i_16 - 2])));
                            var_48 = (min(var_48, (((13432333848778182482 && (arr_16 [i_14] [i_16] [i_16 + 1]))))));
                            var_49 = ((((213 > (arr_17 [i_18]))) ? (arr_40 [i_16 - 2]) : (arr_41 [i_16 + 1] [i_16 - 2])));
                            var_50 = (1294761778937091601 + -74);
                        }
                        for (int i_19 = 0; i_19 < 18;i_19 += 1) /* same iter space */
                        {
                            arr_62 [i_14] = var_5;
                            var_51 = (((((!(((66 ^ (arr_34 [i_19] [i_17] [i_16] [i_14]))))))) > (((arr_46 [i_14]) ? (((!(arr_27 [i_14] [i_15] [i_17] [i_19])))) : (1294761778937091603 && var_6)))));
                        }
                        var_52 = ((+(((arr_18 [i_16 - 2] [i_16 - 1] [i_16 - 2]) ? (arr_57 [i_16 - 2] [i_16 - 1] [i_16 - 2]) : (arr_55 [i_16 - 2] [i_16 - 1] [i_16 - 2] [i_16 + 1] [i_16 - 1])))));
                    }
                }
            }
        }
    }
    var_53 = var_5;
    var_54 = ((var_7 ? (((0 ? 94 : -65))) : (min(var_2, var_7))));
    #pragma endscop
}
