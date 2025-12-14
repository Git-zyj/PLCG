/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(-105, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = -256;
        var_16 = (arr_0 [i_0]);
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    var_17 ^= (!var_11);
    var_18 ^= var_6;

    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = var_8;

        /* vectorizable */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_19 = (max(var_19, -108));
                            var_20 = (arr_7 [i_2] [i_1]);
                            arr_15 [i_1] [i_2] [i_3] [i_3] = (arr_14 [i_1] [1] [i_2] [i_1] [9]);
                        }
                        arr_16 [i_2] [i_1] = (arr_5 [i_1]);
                    }
                }
            }
            var_21 = (arr_3 [i_1]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_22 = (arr_8 [i_1] [i_1] [i_7]);
                        var_23 = (!var_3);
                        var_24 = ((arr_18 [0] [i_1 + 1] [i_1 + 1]) > (arr_8 [i_1] [i_2 - 1] [i_6]));
                    }
                }
            }
            var_25 = var_5;
            arr_23 [i_1] [i_1] [i_1] = ((-(arr_0 [i_2 + 2])));
        }
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            var_26 = (min(var_3, (~var_2)));
            var_27 += var_6;
            arr_26 [i_1] [i_8] [i_1] = (arr_11 [i_1 - 2] [i_1 - 3]);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {
                        var_28 = ((min(((-(arr_32 [i_1] [i_8] [i_9] [i_10] [i_1]))), var_5)));

                        for (int i_11 = 3; i_11 < 15;i_11 += 1)
                        {
                            var_29 = (min(var_29, (arr_7 [i_1 - 2] [i_10])));
                            var_30 = ((~((((32764 || var_4) >= ((-(arr_25 [i_1 - 2]))))))));
                            var_31 = (min(var_31, (arr_17 [i_10])));
                            var_32 = -32747;
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            var_33 *= (min(65524, ((min(32756, -32751)))));
                            arr_39 [i_1] [i_8] [i_8 - 1] [i_9] [i_8] [i_1] = ((~(arr_38 [i_12] [i_8] [i_9] [i_8])));
                            var_34 = (((-(arr_1 [i_1 - 1] [i_1 + 1]))));
                            var_35 ^= (arr_5 [i_10]);
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                        {
                            var_36 += arr_28 [i_1 - 1];
                            var_37 = (arr_28 [i_1 - 3]);
                            arr_43 [i_10] [i_13] [i_1] [i_1] [i_13] [i_10] [10] = (arr_13 [i_1 - 2] [i_1 - 1] [i_1] [i_8 + 1] [i_8 - 1]);
                            arr_44 [i_1] = (var_1 - var_12);
                            var_38 ^= (arr_21 [i_8 - 1] [i_1 + 1]);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            arr_48 [i_14] [i_1] [i_1] = var_7;
            arr_49 [i_1] = 1;
            var_39 = 1;
        }
        for (int i_15 = 3; i_15 < 17;i_15 += 1)
        {
            var_40 = (arr_1 [i_1] [i_15]);
            var_41 = 17;
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    {
                        var_42 = ((-(arr_34 [i_1] [i_15] [i_15] [i_17] [i_1])));
                        var_43 ^= (min((arr_33 [i_15] [i_15]), (min((arr_54 [i_1] [i_15 - 2]), -32759))));
                        var_44 ^= ((+((min((arr_38 [i_1] [i_1] [i_15 - 1] [0]), (arr_38 [i_1] [i_15] [i_15 + 1] [1]))))));
                    }
                }
            }
            var_45 += min((min(var_7, var_6)), (arr_51 [i_1] [i_15]));
        }
        var_46 ^= var_0;

        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            arr_60 [i_1] [i_18] [2] |= ((~((min((arr_37 [i_1 - 1] [12] [i_1 - 2] [i_1] [i_1 - 2]), (arr_37 [i_1] [4] [i_1 + 1] [4] [i_1 - 1]))))));
            var_47 = ((-(min((1 + var_8), (min((arr_58 [i_1] [i_1] [i_1]), (arr_33 [i_18] [i_1])))))));
            var_48 = 65535;
            var_49 = var_8;
        }
        for (int i_19 = 0; i_19 < 18;i_19 += 1) /* same iter space */
        {
            var_50 = (min((((arr_25 [i_1 - 2]) % (arr_25 [i_1 - 2]))), (min(var_2, (arr_25 [i_1 + 1])))));
            var_51 = (((arr_20 [i_19] [i_19] [i_19] [i_19] [i_19]) != -19));
        }
        for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
        {
            var_52 = (max(var_52, (arr_29 [i_1] [i_20])));
            var_53 = -115;
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 18;i_21 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 18;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 18;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 18;i_24 += 1)
                    {
                        {
                            var_54 = (arr_58 [i_1 - 3] [i_1] [i_1 - 3]);
                            var_55 = (arr_31 [i_24] [i_24] [i_24]);
                            arr_76 [i_1] [i_1] [i_1] [10] [9] = (~32762);
                            var_56 = (max(var_56, (~var_6)));
                        }
                    }
                }
            }
            var_57 = -var_6;
        }
    }
    #pragma endscop
}
