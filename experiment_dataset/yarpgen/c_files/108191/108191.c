/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [15] = (-var_1 ? (((((var_9 << (((-30769 + 30772) - 2))))) ? (((arr_0 [i_0] [i_0]) ? var_2 : 195)) : (((var_8 >> (192 - 182)))))) : ((((!(((11 ? 8396 : var_1))))))));
        var_11 &= (arr_0 [i_0] [i_0]);
        var_12 = (max(var_12, ((((-194162357 % 65532) ? (max(var_6, (arr_1 [i_0] [i_0]))) : (((-614841398 ? (arr_0 [i_0] [i_0]) : -1))))))));
        var_13 = (((~4113719590906543742) != 1));
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_14 *= ((+(((arr_6 [i_1] [i_1]) ? var_0 : var_7))));
        arr_8 [15] = ((60 ? ((-32 ? (!8) : ((15325 ? 0 : var_8)))) : (min((arr_7 [i_1]), ((var_5 ? var_10 : var_0))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_16 [i_4] [i_1] [i_2] [i_2] [i_1] [10] &= ((~(min(((1 ? 1024204446 : (arr_11 [1] [1] [i_3]))), (var_5 + var_1)))));
                        var_15 = (max(var_15, (((((16340861652292459979 == ((min(var_4, 1)))))) / (arr_7 [i_3 - 1])))));
                        arr_17 [i_4] [i_2] [i_3 - 1] [i_2] [i_1] = ((2047 ? (max(0, var_6)) : (~1)));
                    }
                    arr_18 [i_1] [1] [i_2] = ((((min(16646144, (~0)))) != (((((var_10 ? (arr_7 [i_1]) : var_8))) ? ((min(1159963593, 201))) : ((var_10 ? var_9 : (arr_11 [i_3] [i_1] [i_1])))))));

                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        arr_22 [i_5] [i_2] [i_2] [i_5] = (max(531, (max(1, -2))));
                        var_16 = (min((~var_0), (!11)));
                        arr_23 [i_1] |= 9793;
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        arr_28 [i_3 - 1] [i_3] [i_2] = ((13 ? var_1 : 9252276326965713449));

                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            var_17 = (max(var_17, (!1)));
                            arr_31 [i_1] |= 5839582873876648492;
                        }
                    }
                    for (int i_8 = 3; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_2] [i_3] [i_2] = (((((60 ? (arr_5 [14] [i_8]) : 65533))) ? (arr_29 [i_3 - 1] [i_2] [i_2] [i_3 - 1] [i_2] [i_1] [i_1]) : (((arr_4 [i_3 - 1]) - (arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                        arr_35 [i_1] [i_2] [i_2] [i_8] = 43;
                    }
                    arr_36 [i_2] = ((0 ? 12444718299616790603 : 0));

                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            arr_41 [i_1] [i_2] [i_2] [i_3] [i_9] [i_10] [i_1] &= var_7;
                            arr_42 [i_2] [i_2] [i_2] [i_2] [i_2] = 19383;
                            arr_43 [i_2] = ((1 ? (658743746 | 1) : 6));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                        {
                            var_18 = (min(var_18, ((((((arr_12 [16]) ? (arr_25 [i_1]) : -1))) ? (((var_0 + 2147483647) >> (2305843009213693952 - 2305843009213693923))) : (arr_40 [i_1] [i_11] [i_3] [i_11] [i_9 + 1])))));
                            var_19 |= ((9 ? (arr_44 [1] [i_3 - 1] [22] [22] [i_3 - 1] [i_3 - 1] [i_1]) : ((var_1 ? var_9 : var_9))));
                            arr_47 [i_1] [i_2] = (((-10223 == var_0) <= ((-(arr_13 [i_2] [i_1] [i_2] [i_1])))));
                            var_20 = (((arr_15 [i_9 - 1] [i_3 - 1]) % 10));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                        {
                            var_21 = (((((65516 ? var_3 : -5839582873876648493))) - ((-1119506776023935372 ? var_6 : (arr_45 [i_2])))));
                            arr_52 [19] [i_2] [i_2] = ((1384898350 ? var_3 : (1 / 7168)));
                            arr_53 [i_2] [i_2] = (~var_7);
                        }
                        var_22 = ((arr_30 [i_2] [i_9] [i_9] [i_2] [i_2]) + ((10222 ? 65532 : 1)));
                        var_23 |= 4858309450486613302;
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, (((!var_8) << (var_9 - 1006449714)))));
    #pragma endscop
}
