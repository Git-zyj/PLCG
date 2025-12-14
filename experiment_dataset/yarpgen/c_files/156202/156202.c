/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((0 << 1) | ((var_2 ? var_4 : (var_9 ^ 7823552827448818489)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_12 = (max(var_12, (((-(max(183761013, (arr_5 [i_0]))))))));
            var_13 = (1 * var_2);
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                arr_11 [i_0] [i_2] [i_2] [i_3] = (min(1, var_9));
                arr_12 [i_0] [i_2] [i_2] = var_3;

                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    arr_16 [i_2] = 4095;
                    arr_17 [i_2] = ((-183761013 ? ((-20613 ? var_2 : ((var_5 ? 65520 : -27600)))) : (!var_6)));
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_14 = ((2819734114453502464 != (min((arr_14 [i_5 - 1] [i_5 - 1] [i_3 - 1] [i_5 - 1] [i_0] [i_2 - 1]), 1))));

                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        arr_23 [i_0] [i_2] [i_3] [i_5] [i_6 - 1] = (arr_0 [i_2]);
                        arr_24 [i_2] [i_2] [i_2] [i_3 + 1] [i_5] [i_6 - 1] = ((~((255 ? (arr_20 [i_3] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_2]) : -183761013))));
                        var_15 = (min(var_15, var_3));
                    }
                }
                for (int i_7 = 4; i_7 < 10;i_7 += 1)
                {
                    var_16 = (max(var_16, (((max(((var_2 ? 11728670777164704101 : var_6)), ((((arr_5 [i_2]) ? 1 : (arr_1 [i_0] [i_2])))))) == (((~(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    var_17 = (!var_9);
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    arr_29 [i_0] [i_2] [i_3] [i_2] = ((var_2 + ((~(arr_4 [i_0] [i_0] [i_0])))));
                    var_18 = 183761011;
                    arr_30 [i_0] [i_0] [i_2] [i_0] [i_0] = ((~(15529938569805051779 + var_5)));
                }
                arr_31 [i_0] [i_2] [i_0] [i_2 + 1] = var_0;
            }

            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
            {
                arr_35 [i_0] [i_2] [i_9] = (((((var_10 + (119 - 2819734114453502474)))) ? (arr_10 [i_9] [i_2] [i_2]) : 1));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            arr_43 [i_11] &= (((arr_7 [i_9] [i_10] [i_11]) ? (((2819734114453502464 | 1) * (!var_5))) : var_1));
                            var_19 += var_1;
                        }
                    }
                }
                arr_44 [i_2] [i_2] [i_9] = ((var_1 ^ (((var_3 >> 1) ? var_9 : (arr_4 [i_0] [i_2 + 2] [i_2 + 2])))));
                var_20 = (min(var_20, ((((((-(arr_33 [i_0] [i_2 - 1] [6])))) != ((max(((var_6 + (arr_25 [i_0] [i_2] [i_0] [i_2 - 2] [i_2 + 2]))), var_4))))))));
            }
            for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            arr_55 [i_0] [i_2] [i_0] = (min(var_8, (((var_7 | var_8) ? (min(var_3, var_8)) : ((((var_9 && (arr_54 [i_0] [i_0] [i_12] [i_13] [i_14])))))))));
                            arr_56 [i_2] = ((+(((!4095) & (var_6 * var_0)))));
                            var_21 = (min(var_21, (arr_37 [i_2 + 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        {
                            var_22 ^= (max((~18446744073709551593), (((max(0, var_0))))));
                            var_23 *= ((((var_3 * (((arr_49 [i_15 + 1] [i_15] [i_15 + 1] [i_15 + 1] [i_15]) * var_0)))) / (((-((18446744073709551615 ? 16 : var_1)))))));
                        }
                    }
                }
                arr_64 [i_2] = 0;
                arr_65 [i_0] [i_0] [i_2] [i_2 - 1] = ((-((((max(var_3, 0))) + -27600))));
            }
            for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
            {
                arr_68 [i_2] = (((arr_15 [i_17] [i_0] [i_0] [i_0] [i_0]) & 53466));
                arr_69 [i_0] [i_0] [i_0] [6] &= ((var_7 ? (((!(((1 ? (arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 1)))))) : (((arr_54 [i_2 + 1] [i_0] [i_2 + 1] [i_0] [i_0]) ? (arr_54 [i_2 - 2] [i_2] [i_2 + 1] [i_0] [i_0]) : (arr_54 [i_2 - 2] [i_2] [i_2 - 1] [i_0] [i_0])))));
                arr_70 [i_0] [i_0] [i_0] [i_2] = var_6;
            }
            arr_71 [i_2] = ((~(((((var_2 >> (var_5 + 22134)))) ? (arr_58 [i_0] [i_0] [i_2] [i_2] [i_2 + 2] [i_0]) : var_5))));

            for (int i_18 = 3; i_18 < 12;i_18 += 1) /* same iter space */
            {
                var_24 = (~(~1));
                arr_75 [i_0] [i_2] [i_0] [i_0] = (((min((max(var_9, var_3)), 4469))) < ((-((min(var_3, var_0))))));
            }
            for (int i_19 = 3; i_19 < 12;i_19 += 1) /* same iter space */
            {
                var_25 = (((((2916805503904499853 && (((var_6 ? var_3 : var_10)))))) - ((var_5 ? 1 : var_2))));
                var_26 = var_8;
            }
            for (int i_20 = 3; i_20 < 12;i_20 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 11;i_22 += 1)
                    {
                        {
                            var_27 = ((max((arr_4 [i_2] [i_20 + 1] [i_20]), var_8)));
                            var_28 = ((((arr_34 [i_2] [i_2] [i_22]) ? var_7 : -7)) % (((arr_10 [i_0] [i_2] [i_2]) ? (arr_3 [i_20 - 3] [i_20 + 1]) : (arr_3 [i_20 - 3] [i_20 + 1]))));
                        }
                    }
                }
                arr_88 [i_0] [i_0] [i_2] = (!-13);
            }
        }
        for (int i_23 = 0; i_23 < 13;i_23 += 1)
        {
            arr_91 [i_0] [i_23] [i_0] = (min((arr_60 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (max((min((arr_18 [i_0] [i_0] [i_23]), var_5)), var_0))));

            for (int i_24 = 0; i_24 < 13;i_24 += 1) /* same iter space */
            {
                arr_95 [i_0] [i_0] [i_0] = ((((arr_26 [i_0] [i_24] [i_24] [i_23] [i_24] [i_24]) * var_3)));
                arr_96 [i_24] [i_23] [i_0] = (((min(((((arr_53 [i_0] [i_0] [i_0] [i_23] [i_0] [i_0]) ? 4197419339 : (arr_1 [i_0] [i_0])))), (arr_74 [i_23]))) <= ((((((arr_18 [i_24] [i_23] [i_23]) & 1))) ? var_3 : (max((arr_74 [i_23]), var_1))))));
                var_29 ^= ((var_1 ? (max(((var_5 ? var_4 : 2916805503904499827)), (((var_8 ? var_4 : var_5))))) : ((((((max((arr_6 [i_0]), var_3))) < ((min(var_4, 1)))))))));
                arr_97 [i_0] [i_24] = (((((arr_26 [i_0] [i_0] [i_24] [i_0] [i_23] [i_0]) ? (1 << var_6) : (-183761003 & var_9))) >> (((((arr_78 [i_23]) & var_3)) - 1010))));
                arr_98 [i_0] [i_0] [i_0] = (((arr_89 [i_0]) < ((var_8 ? (min(var_6, 14680064)) : (!var_0)))));
            }
            for (int i_25 = 0; i_25 < 13;i_25 += 1) /* same iter space */
            {
                arr_102 [i_0] [i_23] [i_23] [i_0] = ((((((arr_4 [i_0] [i_23] [i_25]) ? ((min(248, var_6))) : var_2))) ? (~2916805503904499817) : (((var_3 ? var_7 : var_3)))));
                arr_103 [i_0] [i_0] [i_0] [i_0] = (~(var_9 & -28003991));
                var_30 = (min(var_30, ((max(((((min(var_3, 183761003)) + var_4))), (arr_90 [i_25]))))));
            }
        }
        var_31 *= var_8;
        var_32 = var_3;
    }
    #pragma endscop
}
