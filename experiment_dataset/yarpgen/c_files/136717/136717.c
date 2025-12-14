/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = var_5;
                    var_17 = (min(var_17, (((((((((arr_5 [i_0]) & -1219755596)) | (((var_2 ? var_8 : 105)))))) ? (-105 & 102) : var_14)))));
                }
            }
        }
    }
    var_18 = ((var_12 ? -32 : -46));

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_19 = (min(var_19, (min((((min(var_4, var_11)))), ((((arr_2 [i_3]) + (arr_0 [6]))))))));
        var_20 = 1;
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_21 = ((22752 ? 44 : -1262455052));
                                arr_21 [15] [15] [i_5] [1] [i_4] = ((-1135327406 ? (min(2704267258, ((((arr_2 [13]) ? var_3 : 1))))) : (((max(1, (676245838 != -6380070080671534710)))))));
                                var_22 = ((min(3041612241, 137)));
                                arr_22 [i_3] [i_4] [i_4] [4] [4] = 16210824844012280643;
                            }
                        }
                    }
                    var_23 = (119 | 91);
                    arr_23 [i_4] = (-1724313784716864700 < 1);
                }
            }
        }
    }
    for (int i_8 = 4; i_8 < 21;i_8 += 1)
    {
        var_24 ^= ((~(122 % -105)));
        var_25 = (max(((max(-6163063787413772954, 97))), ((((((811621048823627923 ? 1 : 10736))) ? ((61401 ? 137 : 1)) : var_9)))));
        var_26 ^= var_10;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {

        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {
            arr_32 [i_9] [i_10] = (~366394249);
            var_27 += -90;
        }
        for (int i_11 = 3; i_11 < 14;i_11 += 1)
        {
            var_28 -= -3187860858142019112;
            arr_37 [i_9] [i_11] [i_11 - 1] = ((arr_31 [i_11] [i_9]) << (-var_10 + 18487));
            var_29 = (8 & 1);
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_30 = (max(var_30, (3 != var_13)));
                            var_31 = (-710873611 > 17033208960932543891);
                            arr_50 [i_9] [i_9] [i_14] [1] [11] [8] [i_15] = (arr_35 [i_14] [i_14]);
                            var_32 |= (arr_4 [i_9] [i_12]);
                        }
                    }
                }
                var_33 = ((!(var_1 | 1674573139)));
            }
            for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
            {
                var_34 ^= (arr_11 [i_9]);
                arr_54 [12] [i_16] [12] = var_7;
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        {
                            var_35 = (max(var_35, (9792341 / -710873626)));
                            arr_60 [i_16] [i_17 + 3] [4] = -105;
                            var_36 -= ((0 ? 32088 : -90));
                        }
                    }
                }
            }
            var_37 = (arr_7 [8]);
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 4; i_20 < 13;i_20 += 1)
                {
                    {
                        var_38 = (min(var_38, ((41282 ? 142 : 12904548860014700591))));
                        var_39 = ((arr_18 [12] [i_12] [12] [i_9] [i_19]) ? var_7 : 119);
                        var_40 &= ((((-102 ? 162 : 5542195213694851024)) + (3588962536 ^ var_5)));
                        var_41 = arr_7 [i_19];
                        arr_68 [i_9] [10] [i_19] [i_20] = (arr_49 [i_20] [i_19] [i_12] [i_12] [i_9]);
                    }
                }
            }
            var_42 = (arr_66 [i_9] [i_12] [i_9] [i_9]);
        }
        for (int i_21 = 0; i_21 < 16;i_21 += 1)
        {
            arr_73 [i_21] = (var_12 + 5542195213694851029);
            arr_74 [i_9] [i_9] = ((var_7 < (!1)));
        }
        var_43 = (((18614 ? 125 : 16695)));
        arr_75 [10] [10] = var_10;
    }
    var_44 = var_10;
    #pragma endscop
}
