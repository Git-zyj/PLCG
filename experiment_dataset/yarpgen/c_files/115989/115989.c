/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-((~(max(var_6, var_1)))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_19 ^= var_12;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] = (var_4 * 123);

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_20 = ((3680467048054939438 >> (((var_5 | var_8) - 7505278498692521209))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_21 = (((arr_13 [i_0 - 1] [i_0 + 1]) || -2868));
                            var_22 ^= (((-(arr_9 [i_3] [4] [i_3]))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2] = var_1;
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_23 |= (arr_11 [16] [i_0 - 2] [i_1] [i_0 - 2] [i_0 - 2]);
                    var_24 = -var_1;
                    arr_20 [i_6] [i_0] [i_0] [i_0] = ((var_11 >= (((var_12 - (arr_7 [i_6] [i_1] [i_0 - 1]))))));
                }
                arr_21 [i_0] [i_1] [i_0] [i_0] = ((var_8 - (arr_2 [17])));
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
            {
                var_25 = (1 == 57781);
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_29 [i_0] [i_1] [i_7] [i_0] [10] = ((var_2 ? ((18446744073709551599 ? (arr_5 [i_0] [i_0]) : var_3)) : 3120409659));
                            var_26 = -var_7;
                            arr_30 [i_1] [i_1] [i_0] [i_1] [i_1] [i_1] = (arr_23 [i_0]);
                        }
                    }
                }
                arr_31 [i_0] [i_1] [i_0] = ((arr_17 [i_0 + 2] [i_7] [i_0]) ? (arr_5 [i_0 + 1] [i_0]) : 16849191793955228739);
                var_27 = (max(var_27, 3120409659));
            }
            var_28 = (min(var_28, -49));
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 15;i_13 += 1)
                    {
                        {
                            arr_45 [i_0] [i_10] [i_11] = ((((min((~3120409659), var_7))) ? ((-(min(var_9, (arr_28 [i_0] [i_0] [i_10] [i_11] [i_12] [i_13]))))) : var_5));
                            var_29 -= var_1;
                            arr_46 [i_0] [i_10] [i_11] [i_0] [i_13] = (!593408836);
                            arr_47 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0] = (((!1174557633) && (!var_14)));
                            var_30 ^= var_16;
                        }
                    }
                }
            }
            var_31 = (max((min((arr_13 [i_0] [i_0 + 3]), (!var_16))), 3120409665));
            arr_48 [i_0] = (arr_2 [i_10]);
        }
        for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            arr_58 [i_0] [i_0] = var_4;
                            arr_59 [i_0 + 1] [i_14] [i_0 + 1] [i_16 + 2] [i_0] = (arr_25 [i_0] [i_15] [i_0] [i_15] [i_0] [i_14]);
                            var_32 = ((min(((3120409658 ? 3120409669 : (arr_42 [i_0 - 2] [i_14] [6] [i_14] [i_16] [i_17] [i_0])), 7))));
                        }
                    }
                }
            }
            var_33 -= ((((((((arr_49 [i_14]) ? var_15 : 53343))) ? var_10 : (arr_13 [14] [14]))) * (arr_33 [i_0 - 1] [i_0 + 1] [i_14])));
            arr_60 [i_0] [i_0] = 1530355772;

            for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
            {
                arr_64 [i_0] [i_0] = 65535;
                arr_65 [i_0] [3] [i_0] = ((((((arr_2 [i_0 + 3]) % var_2))) ? (((~((min(57822, 1)))))) : (min(var_3, (((var_0 >> (arr_23 [i_0]))))))));
            }
            for (int i_19 = 0; i_19 < 19;i_19 += 1) /* same iter space */
            {

                for (int i_20 = 1; i_20 < 18;i_20 += 1)
                {
                    var_34 -= ((min(((var_16 ? (arr_4 [i_14] [i_19]) : (arr_38 [i_0] [i_0] [i_0]))), ((((((arr_44 [i_0] [i_14] [i_0] [i_0] [i_14] [i_14] [i_20 + 1]) + 2147483647)) >> (166055242 - 166055230)))))));

                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        var_35 = (max(var_35, ((min(var_8, (arr_38 [18] [18] [18]))))));
                        arr_72 [i_0] [i_20 + 1] [i_21] = ((68 ? 15392 : var_16));
                        arr_73 [i_21] [i_0] [i_19] [i_0] [i_0 - 1] = ((-(((!(arr_53 [i_0] [i_0 + 2]))))));
                        arr_74 [i_0] [12] [12] [i_20 - 1] [i_21] [i_21] = -4294967295;
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 2; i_22 < 17;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 19;i_23 += 1)
                    {
                        {
                            var_36 += (min((arr_4 [i_0 + 3] [i_22]), (~var_0)));
                            arr_79 [i_0] [i_0] [i_22] [i_22] = (arr_28 [i_0] [i_14] [i_14] [3] [i_23] [i_14]);
                            var_37 |= 1;
                        }
                    }
                }
                arr_80 [i_0] [i_14] [i_0] = (arr_4 [1] [i_0]);
            }
            arr_81 [16] |= ((-2147483620 ? (((1 ? (arr_23 [14]) : (arr_44 [i_0] [i_0 - 2] [i_0] [i_14] [i_0 - 2] [i_0 - 2] [i_0 + 3])))) : var_1));
        }
        /* LoopNest 2 */
        for (int i_24 = 1; i_24 < 16;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 19;i_25 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 19;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 19;i_27 += 1)
                        {
                            {
                                arr_94 [i_0] = ((((min(var_5, (arr_54 [i_0 + 2] [i_24] [i_0 + 2] [i_26]))) * 3701918788)));
                                var_38 += 1630796621;
                                var_39 -= 14105957483507215984;
                                var_40 = (max(var_40, ((max(((var_13 ? ((var_13 ? (arr_56 [i_0 - 1] [18] [i_25] [i_26] [i_27]) : var_10)) : 1)), -1)))));
                            }
                        }
                    }
                    arr_95 [i_25] [i_0] [i_0] = var_7;
                }
            }
        }
    }
    #pragma endscop
}
