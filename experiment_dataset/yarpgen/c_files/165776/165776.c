/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1331891712;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (min(((((arr_0 [i_0]) == (arr_4 [i_1 - 2] [i_2 - 1] [i_2 - 1])))), (min(var_7, (((arr_4 [i_0] [10] [i_0]) ? var_9 : (arr_3 [1] [i_1 - 3] [i_2])))))));
                    var_18 = arr_3 [13] [i_1] [i_2];
                }
            }
        }
        arr_9 [i_0] = 2963075584;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_13 [i_3] = (+((1797662541033543470 ? (arr_11 [i_3]) : 514765574)));
        var_19 = (min(var_19, (!var_3)));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        var_20 -= (~(arr_12 [i_4]));

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_18 [i_4] [i_4] = (arr_14 [i_4 + 1]);
            var_21 = ((34969 ? (arr_15 [i_4 + 1]) : (arr_15 [i_4 - 1])));
            var_22 = (max(var_22, 0));
        }
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            var_23 = 2963075581;
            var_24 = ((1331891710 ? (((0 ? 1331891711 : 103))) : 18446744073709551615));
            var_25 = (((arr_17 [i_4]) ? (arr_17 [9]) : (arr_17 [i_4])));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_26 = (max(var_26, (((4294967295 - ((((arr_25 [i_4 + 1]) ? (arr_14 [7]) : var_15))))))));
            var_27 |= ((-1647017351 >= (arr_16 [i_4])));
            arr_26 [2] [i_7] [i_4] = (((arr_21 [i_4 - 1] [i_4 - 1] [i_7]) ? (arr_23 [i_4 + 1] [i_4 + 1]) : (arr_17 [i_4])));
            var_28 += (!1);
        }
        for (int i_8 = 3; i_8 < 16;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                arr_33 [i_4 + 1] [i_9] = (!4294967286);
                var_29 ^= ((-(((arr_12 [i_9]) | (arr_30 [i_4] [2] [12] [3])))));
            }
            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {
                var_30 ^= var_8;
                var_31 ^= 3780201703;
                arr_37 [i_8] [i_10] = (arr_31 [i_4 - 1] [i_8 - 3] [i_4 + 1] [i_8 - 3]);
                arr_38 [1] [i_8] [i_10] = var_16;
                var_32 = ((var_2 >= (~var_7)));
            }
            for (int i_11 = 1; i_11 < 14;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    var_33 = ((-(arr_35 [1] [i_8] [i_11] [i_12])));
                    arr_44 [i_4] [i_4] [i_11] [i_11] [i_11] = ((~(arr_27 [i_11] [i_8] [14])));
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            var_34 = (((arr_35 [i_11 + 2] [i_11 + 2] [0] [i_4 + 1]) ? (arr_23 [i_13] [i_14]) : ((9615120406701759552 ? 0 : 1331891700))));
                            var_35 = var_4;
                        }
                    }
                }
            }

            for (int i_15 = 2; i_15 < 16;i_15 += 1)
            {
                arr_52 [i_4 - 1] [i_8 - 2] = (((arr_25 [i_4 + 1]) >> (arr_25 [i_4 - 1])));
                var_36 *= (arr_36 [i_4] [i_4] [i_8 - 2] [i_15]);
                arr_53 [i_4] [i_8 - 1] [15] = (arr_15 [i_4 - 1]);
            }
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                arr_56 [4] [i_8] [3] = var_2;
                arr_57 [i_4] [8] [8] = (~var_16);
            }
            for (int i_17 = 1; i_17 < 1;i_17 += 1) /* same iter space */
            {
                var_37 = (max(var_37, (0 / 3455949373981725482)));
                var_38 *= ((var_8 ? (arr_22 [13] [i_17 - 1] [i_8 - 3]) : (arr_48 [i_17] [i_17] [i_17] [i_17] [i_17 - 1] [i_8 + 1])));
                var_39 -= (arr_58 [i_4] [i_8]);
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            arr_64 [i_8] [i_8] [i_17] [i_18] [1] [i_4] [i_17] = var_13;
                            var_40 += (arr_34 [i_17] [i_17] [i_17] [i_17 - 1]);
                        }
                    }
                }
            }
            for (int i_20 = 1; i_20 < 1;i_20 += 1) /* same iter space */
            {
                arr_67 [10] [1] [i_20] [i_20 - 1] = 16649081532676008146;
                var_41 = ((-(arr_21 [i_8 - 1] [i_8] [i_20])));
            }
            var_42 += (((var_6 >= 32747) != 9615120406701759552));
        }
        arr_68 [i_4] = (((arr_58 [i_4 - 1] [i_4]) & (arr_40 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1])));
    }
    #pragma endscop
}
