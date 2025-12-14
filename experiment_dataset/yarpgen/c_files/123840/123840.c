/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(-1046547324, var_5);

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((max((arr_1 [i_0 + 2]), var_5))) ? (arr_2 [i_0]) : (max(var_4, var_12))));

        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_18 = (max(var_18, (((~((((arr_2 [i_2]) & (arr_8 [i_1] [i_1] [i_1] [i_2])))))))));
                var_19 = (min(var_1, ((((arr_0 [i_0] [i_0 - 1]) % 1483218083)))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] [i_3] [i_2] [i_0] [i_0] = (((!116) ? (((0 >> (140 - 129)))) : 1124375134568725779));
                            arr_17 [i_0] [i_1] [i_0] [i_3 + 3] [i_3] [i_4] = ((((5359 ? 5369 : 17322368939140825820)) % (~126)));
                        }
                    }
                }
            }
            arr_18 [i_0 - 2] [i_0] [i_0] = ((+((var_9 ? (arr_15 [i_0] [i_0] [i_1 + 1] [i_0] [i_1] [i_1 - 3]) : (arr_4 [3] [i_0 + 2])))));
            var_20 *= ((~((var_4 ? ((-(arr_4 [i_0] [i_1 + 2]))) : (((max((arr_1 [i_0]), var_15))))))));
        }

        for (int i_5 = 4; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_21 &= (((((-((~(arr_10 [i_5 - 4] [i_5] [i_0 - 1] [i_5] [i_0 - 2])))))) ? 926735721 : (arr_12 [i_5 - 3] [i_5 - 3] [2] [i_5 + 3] [i_5])));
            var_22 *= 17461;
        }
        /* vectorizable */
        for (int i_6 = 4; i_6 < 14;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    {
                        var_23 *= (~var_11);

                        for (int i_9 = 4; i_9 < 16;i_9 += 1)
                        {
                            var_24 = (max(var_24, (((!(arr_30 [i_9 - 3] [7] [i_9] [i_8 - 1] [i_0 + 2]))))));
                            var_25 = (((arr_13 [i_0] [i_6 - 4] [i_7]) + (arr_2 [i_0])));
                            var_26 *= (arr_14 [i_9 - 2] [i_9 - 1] [i_9 - 4] [i_9 - 2] [i_9 - 4] [i_9] [i_9 - 1]);
                            var_27 &= ((~(arr_5 [i_6 - 2])));
                        }
                    }
                }
            }
            var_28 = (!var_14);
        }
        arr_32 [16] &= (arr_22 [i_0 + 3] [11]);
    }
    for (int i_10 = 3; i_10 < 14;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                {
                    var_29 = (min(var_29, (arr_25 [i_10 + 3] [i_10 + 1] [i_10] [i_11])));
                    arr_41 [i_12] = 53828942285392707;

                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_30 = (arr_24 [i_12] [i_12]);

                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            arr_47 [i_10] [i_10] [i_12] [i_13] [i_12] = ((((1 ? 13102 : 2147483645)) << (((var_1 + 5946674189493339347) - 11))));
                            var_31 = ((~(((!var_3) + var_5))));
                        }
                        arr_48 [i_10 - 1] [i_12] [10] [i_13] [i_12] = ((((var_2 ? ((var_5 ? var_10 : 7390453070064938794)) : (var_7 != var_3))) + (~15)));
                    }
                }
            }
        }

        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            var_32 = ((((((arr_26 [i_15]) ? var_0 : (arr_8 [i_15] [i_15] [i_10 + 4] [i_15])))) ? (((arr_45 [1] [i_10 - 1] [i_10 - 3] [i_10 + 2]) ? 48814 : 14974)) : var_6));
            var_33 *= ((arr_42 [i_10] [i_15] [i_15] [2] [i_15] [16]) & (((((arr_36 [i_10 + 3]) || (arr_10 [i_10 - 2] [i_10 + 2] [i_10 - 2] [i_15] [i_10 - 2]))))));
            var_34 = (arr_44 [7] [i_15] [3]);
            var_35 = ((139 < (6 | 19474)));
        }

        for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
        {
            var_36 = ((min((arr_38 [i_16]), 8090089806966787969)));

            for (int i_17 = 0; i_17 < 18;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 18;i_19 += 1)
                    {
                        {
                            var_37 = ((8336123860197667520 ? (127 - 105989671) : var_6));
                            var_38 &= (((arr_31 [i_17] [i_10 + 3]) ? (34965 > 9015628831292063453) : (((((arr_42 [i_10] [i_16] [i_16] [i_18] [i_19] [i_18]) ? 30570 : 761)) << (((-var_6 + 159) - 23))))));
                            var_39 = (max(-685157865, 11409065559499149467));
                        }
                    }
                }
                var_40 = (((arr_33 [i_10 - 3]) - (min((arr_33 [i_10 - 3]), (arr_33 [i_10 + 1])))));
                arr_65 [i_10] [i_10] [i_10 + 1] = (min((!var_16), (!var_12)));
            }
            var_41 = (arr_58 [i_16] [i_10] [i_16] [i_16] [i_16]);
        }
        for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
        {
            var_42 = (max(var_42, 25080));
            /* LoopNest 2 */
            for (int i_21 = 2; i_21 < 17;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 18;i_22 += 1)
                {
                    {
                        arr_72 [i_22] [i_22] = ((~(arr_33 [i_10 + 2])));
                        var_43 &= (max(var_4, (arr_68 [i_10 + 3] [i_10 - 1] [i_10 + 2])));
                        arr_73 [i_21] &= var_8;
                    }
                }
            }
        }
        arr_74 [i_10 - 1] [i_10] = ((min((!var_7), var_12)));
    }

    for (int i_23 = 1; i_23 < 24;i_23 += 1)
    {
        var_44 = 1124375134568725791;
        var_45 = var_6;
        var_46 = ((!(((-(arr_77 [i_23 + 1]))))));
    }
    #pragma endscop
}
