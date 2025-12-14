/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_15 = (((arr_1 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : ((var_8 >> (var_2 - 196)))));
        var_16 ^= (!1);
        var_17 += (((((arr_1 [i_0 + 1]) & (arr_1 [i_0 - 1])))) ? ((((28 ? var_7 : var_0)) ^ (((1270557838086445627 ? (arr_2 [i_0]) : 207))))) : (max(207, var_7)));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_18 += (arr_1 [i_1 + 1]);
        var_19 = (((((var_3 ? (arr_5 [i_1] [i_1 + 1]) : 4))) ? 16890455043642664101 : (((arr_4 [i_1]) ? var_7 : (arr_3 [i_1] [i_1])))));
        var_20 = (((!(arr_4 [i_1]))));
        var_21 = var_8;

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_22 = 3548841703;

            for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
            {
                var_23 = (((-2120081245 ^ var_9) ? (arr_4 [i_1 - 1]) : (var_1 != 1)));
                var_24 = (((arr_9 [i_2] [i_2] [i_3]) ? var_8 : 1));
                var_25 = 2;
                var_26 = 12;
                var_27 = 1270557838086445637;
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_28 = (((arr_5 [i_1 - 3] [i_6 - 2]) ? (arr_3 [i_1 + 4] [i_6 - 1]) : var_8));
                            var_29 = ((((((arr_13 [i_6] [18] [i_2] [i_1]) || (arr_18 [i_1] [i_1] [i_4] [i_5] [i_6])))) != 0));
                            var_30 = ((arr_7 [i_5] [10]) ? ((var_9 ? var_10 : var_1)) : (arr_19 [8] [i_6 - 2] [i_2] [i_1 + 2] [i_1] [i_1 + 4] [i_1]));
                            var_31 = ((var_2 ? var_8 : (((((arr_6 [i_1]) == (arr_17 [i_4] [i_4] [i_4] [i_4])))))));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_32 = (((arr_0 [i_1]) && ((((arr_20 [i_7] [i_4] [i_2] [i_1 + 3]) ? var_2 : var_3)))));
                    var_33 = (((((614600788 ? (arr_6 [i_1]) : 14796676002468332108))) && (((arr_1 [i_4]) > (arr_10 [16] [16] [i_1])))));

                    for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_34 = (arr_2 [i_7]);
                        var_35 = (((((var_11 ? (arr_11 [i_8 - 1] [i_7] [i_2] [8]) : var_6))) ? (var_3 - -1294077593263223819) : (arr_5 [i_7] [i_8 + 1])));
                    }
                    for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_36 = (var_9 > 16865475449545692106);
                        var_37 = (~35184372088824);
                        var_38 = (((arr_20 [i_1] [i_4] [i_4] [i_7]) >> (((arr_22 [i_1] [i_1] [1] [i_1] [i_1 - 2] [i_1] [i_1 + 4]) - 2112549545))));
                        var_39 = (var_10 / (arr_4 [i_4]));
                    }
                    var_40 = (((arr_24 [i_1 + 4]) ^ (arr_25 [i_1 + 2])));

                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        var_41 = ((((((arr_22 [i_4] [i_4] [21] [i_4] [i_4] [i_4] [i_4]) + (arr_0 [i_1])))) ? (((arr_2 [i_2]) ? (arr_11 [i_1] [i_2] [6] [i_7]) : var_0)) : (arr_11 [i_2] [i_4] [i_7] [i_10])));
                        var_42 = ((-7467306677995306727 ? (arr_19 [i_1 + 3] [i_2] [i_4] [i_2] [9] [i_1 + 2] [i_2]) : var_7));
                        var_43 = (min(var_43, (((((arr_1 [i_2]) / (arr_11 [i_1] [i_4] [i_7] [i_10])))))));
                    }
                }
            }
            for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
            {
                var_44 ^= var_5;
                var_45 ^= (arr_12 [i_11]);
                var_46 = (((47 ? var_5 : (arr_3 [i_11] [i_11]))));
                var_47 = (arr_15 [20] [i_1 - 1] [i_1 - 1] [i_1]);
                var_48 = (((var_7 ? (arr_17 [i_11] [i_2] [i_2] [i_1]) : 1)));
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                var_49 = (((((var_11 ? var_1 : var_10))) ? (arr_6 [i_1]) : (arr_7 [i_1 - 3] [i_1])));

                for (int i_13 = 4; i_13 < 20;i_13 += 1)
                {
                    var_50 = (arr_2 [i_2]);
                    var_51 ^= -2042394887100718081;
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    var_52 *= 7467306677995306727;
                    var_53 = (~var_11);
                    var_54 = (arr_22 [i_14] [i_14] [i_14] [i_14] [i_1 - 3] [i_1] [i_1]);
                }
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    var_55 = (((arr_13 [i_1] [i_1 + 2] [i_12] [i_15]) + var_12));
                    var_56 = var_4;

                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        var_57 = (((arr_27 [i_1 + 4] [i_1 - 3] [i_1 - 1] [i_1] [i_1]) << (((arr_3 [i_1] [i_1 + 1]) - 15043218664691695831))));
                        var_58 = (((((arr_29 [i_1] [i_1] [i_1]) + 71)) / (((arr_36 [i_1 + 3] [i_1 - 1] [i_1]) ? (arr_0 [i_1]) : (arr_4 [i_2])))));
                        var_59 ^= ((((((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? var_0 : var_12))) ? (var_14 % var_5) : var_3));
                        var_60 = (arr_27 [i_1 - 1] [i_1] [i_1 + 2] [i_1] [i_1]);
                    }
                }
                var_61 = (((((var_2 ? (arr_20 [i_1] [i_1] [i_2] [i_12]) : (arr_20 [i_1 - 1] [i_1] [9] [20])))) % (arr_44 [i_12] [i_1] [i_2] [i_1] [i_1] [i_1] [i_1])));
            }
            var_62 = ((!(var_11 * 1)));
        }
        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            var_63 = (var_2 + var_5);
            var_64 = (arr_45 [i_1] [i_17] [i_17 - 1] [i_17] [i_17 - 1] [i_1 - 1] [i_1]);
        }
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            var_65 = (((arr_33 [i_1 + 3] [i_1 + 2] [i_1]) > 4278430174));
            var_66 *= 1;
        }
    }

    /* vectorizable */
    for (int i_19 = 1; i_19 < 19;i_19 += 1)
    {
        var_67 = var_8;
        var_68 = ((1595742231 && ((((arr_36 [i_19] [i_19] [i_19]) ? var_6 : var_10)))));
        var_69 = (min(var_69, -1));
    }
    for (int i_20 = 0; i_20 < 14;i_20 += 1)
    {
        var_70 = (((var_8 | var_8) != ((((arr_18 [i_20] [i_20] [i_20] [i_20] [i_20]) ? (arr_18 [i_20] [i_20] [i_20] [i_20] [i_20]) : var_1)))));
        var_71 = -1270557838086445628;
    }
    #pragma endscop
}
