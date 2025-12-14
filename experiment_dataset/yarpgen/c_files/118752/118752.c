/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 - 3] |= 206;
        var_12 = var_1;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_13 ^= (arr_9 [i_0] [i_1] [9] [i_3]);
                        var_14 = ((~(((arr_7 [i_0 - 4] [i_2 - 3]) ? (arr_5 [i_0] [i_1] [i_2 - 2]) : 30651))));
                        arr_11 [i_3] [i_1] [i_2 + 1] [i_3] = ((~(max(36381042, 1))));
                    }
                }
            }
        }
        var_15 += max(((-(arr_3 [i_0 - 2]))), ((min((arr_3 [i_0]), (arr_3 [i_0 - 4])))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_16 = var_3;
        arr_14 [i_4] = 2136018991;
        arr_15 [i_4] [i_4] = (!-2297);
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_17 = (min(var_17, 30675));
                                var_18 += ((-11237 >> ((((arr_22 [i_5 + 1] [i_5 - 1] [i_7 - 2] [i_8]) >= -552318967)))));
                            }
                        }
                    }
                    var_19 = (min(var_19, (arr_6 [i_4] [i_4] [i_4] [3])));

                    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        var_20 |= -36381055;
                        var_21 = var_7;

                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            var_22 ^= (((arr_19 [i_6]) ? (-32767 - 1) : (arr_17 [i_4] [i_4])));
                            var_23 ^= (arr_26 [i_5] [i_9] [i_10 - 1]);
                            var_24 = (min(var_24, var_4));
                            arr_31 [i_4] [i_4] [i_6] [0] [12] [i_4] = (min(((((((1 ? 1949849092 : 154))) ? 59581 : 87))), ((3159831641 % (arr_1 [i_5 - 2])))));
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            var_25 = (min(var_25, ((((((((-25883 >= (arr_6 [i_4] [i_5] [i_9] [i_11]))) != (arr_20 [i_11])))))))));
                            var_26 = (((((-11237 && (arr_33 [i_5] [i_5] [i_5] [i_4] [i_5 - 1])))) >= var_5));
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            var_27 = (max(var_27, ((((-1011193473 <= 1011193464) >= ((-(arr_27 [i_4] [i_6] [i_9]))))))));
                            var_28 = (((max(var_3, 3159831639))) ? (arr_32 [i_4] [i_4] [i_5] [i_6] [i_9] [i_12]) : (arr_32 [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 1] [i_5]));
                        }

                        for (int i_13 = 4; i_13 < 13;i_13 += 1)
                        {
                            var_29 += ((-23623 / (((((187 ? (arr_37 [i_4] [i_5 - 2] [i_6] [4] [i_13] [i_13]) : 3366381790))) | -1692449212259098959))));
                            var_30 = (max(var_30, -5374));
                        }
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                    {
                        var_31 += (arr_25 [2] [i_5] [i_5] [i_5] [i_5]);
                        arr_47 [i_4] [i_4] [i_6] [i_4] = var_10;
                        var_32 ^= (7293616823026537398 <= 3);
                        var_33 = ((~(((((var_11 ? 30675 : 252))) ? (189 % 8278065401204157004) : (arr_6 [i_4] [i_4] [i_6] [i_14])))));
                    }
                    var_34 += (arr_37 [i_4] [i_4] [i_4] [i_5 - 2] [i_5] [i_6]);
                }
            }
        }
        arr_48 [i_4] [i_4] = 0;
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
    {
        var_35 = (min(var_35, 65525));
        var_36 = (min(var_36, var_2));

        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 12;i_18 += 1)
                {
                    for (int i_19 = 3; i_19 < 12;i_19 += 1)
                    {
                        {
                            arr_62 [i_15] [i_16] [i_16] [i_17] [i_18 + 1] [i_18 + 2] [i_18] = (!243);
                            var_37 = var_7;
                            var_38 *= (arr_28 [8] [i_16] [i_16] [5]);
                        }
                    }
                }
                var_39 ^= (((((max((arr_26 [i_16] [i_16] [i_17]), 6)))) ? (arr_53 [i_15] [i_16] [i_16] [i_17]) : (min((arr_34 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]), ((~(arr_32 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))))));
                arr_63 [i_16] [i_16] [8] = 1963869158;
            }
            for (int i_20 = 0; i_20 < 14;i_20 += 1)
            {
                var_40 = ((-(((arr_50 [i_15]) ? 81488241 : (arr_50 [i_16])))));
                var_41 = var_6;
                arr_67 [i_15] [i_15] [i_16] [i_20] = (min((((arr_20 [i_20]) || (arr_58 [i_15] [i_15] [i_16] [i_20] [i_20] [i_20]))), 16));
            }
            arr_68 [i_15] [i_15] [i_16] |= 2295857948;
        }
        for (int i_21 = 0; i_21 < 14;i_21 += 1)
        {
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    {
                        var_42 = (243 & 252);

                        for (int i_24 = 3; i_24 < 13;i_24 += 1)
                        {
                            var_43 = ((!(!35)));
                            var_44 = -5872768821531881115;
                            var_45 += 137438953471;
                        }
                    }
                }
            }
            var_46 = (arr_64 [i_15] [i_21] [i_21]);
            var_47 = (max(var_47, var_5));
        }
        var_48 &= (max(8278065401204156994, ((13 ? 16 : 26))));
        /* LoopNest 2 */
        for (int i_25 = 3; i_25 < 13;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 14;i_26 += 1)
            {
                {
                    var_49 = (max(var_49, (((arr_82 [i_25 - 2] [i_25] [i_25 - 3]) && ((max((arr_82 [i_25 + 1] [i_25 - 1] [i_25 - 1]), (arr_82 [i_25 - 2] [2] [i_25 - 2]))))))));

                    /* vectorizable */
                    for (int i_27 = 2; i_27 < 12;i_27 += 1)
                    {
                        var_50 *= var_6;
                        arr_86 [i_15] [i_25] = (arr_24 [11] [i_25] [6]);
                        var_51 &= -7505435248573469321;
                    }
                    arr_87 [i_15] [i_15] [i_25] [i_26] = (arr_74 [i_25] [i_25]);
                }
            }
        }
    }
    var_52 += var_1;
    #pragma endscop
}
