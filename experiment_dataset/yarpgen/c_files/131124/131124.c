/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_12 [i_1] [i_0] = 9394024387385376267;
                    var_12 ^= (arr_7 [0] [i_0 - 1] [0]);
                }
                for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_13 &= (max((max((arr_1 [i_0] [i_0 - 2]), (arr_1 [i_0] [i_0 - 2]))), ((max((min(var_2, -10543)), (max((arr_2 [4]), (arr_15 [i_0] [i_0] [i_0] [i_3 - 1]))))))));
                    arr_16 [i_0] [i_1] [i_1] [i_0] = 161;
                }
                for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    var_14 -= (~((~(min(2373994989786297230, var_8)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_15 = ((((!((min(132, 4207296678))))) ? ((max((arr_3 [i_5]), 13804429994696495325))) : (arr_0 [i_0])));
                                var_16 = ((((((17870283321406128128 ? (arr_17 [i_0] [i_1] [i_0]) : 13804429994696495343))) ? 55659 : ((4642314079013056290 ? 4642314079013056281 : 111)))));
                                arr_25 [i_0] [i_0] [i_5] [i_6] = ((max(4642314079013056290, 13804429994696495325)));
                                arr_26 [i_0] [i_1] [i_4 - 1] [i_0] [i_6] [i_1] = (~var_5);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_30 [i_0] [i_1] [i_4 - 2] [i_7] [i_4] [i_1] = var_10;
                        var_17 = var_11;
                        var_18 = (arr_15 [i_0] [i_1] [i_4] [i_1]);
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        arr_34 [i_0] = (min((((!(!0)))), ((~(!3191851170)))));

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_19 = (max((arr_9 [i_0] [i_4 - 2] [i_1] [i_0]), ((((min((arr_19 [i_4] [i_0] [i_4 + 1] [i_8] [i_9]), 25561))) ? var_7 : ((~(arr_3 [i_4])))))));
                            arr_39 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2] = (max((((var_3 ? var_11 : var_0))), ((min(((13804429994696495334 ? 20158 : var_10)), (arr_20 [i_0] [i_4]))))));
                        }
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            var_20 ^= ((min((((10272807337498631573 ? 31802 : 103))), 6494271576091805331)));
                            arr_43 [i_0] [i_1] [i_1] [i_8] [i_1] = (max(((min((max(19822, 0)), (!4642314079013056281)))), (min(((min(var_9, var_8))), ((24694 ? (arr_5 [i_0] [i_4 - 2] [i_0]) : 96))))));
                            var_21 = (min((((((max((arr_8 [i_4 - 2] [i_8] [i_0]), var_3))) ? (max((arr_7 [i_0] [i_1] [i_0]), var_1)) : ((var_3 ? var_10 : var_2))))), (max((max((arr_33 [i_0] [i_1] [i_0] [i_0] [i_10 - 2]), 13804429994696495321)), var_10))));
                        }
                        arr_44 [i_8] [i_0] [i_8] [7] [14] = (max((arr_15 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_4 - 2]), (min((min(13804429994696495335, var_6)), 31681))));
                        var_22 = (max(((-((var_8 ? (arr_40 [i_0 + 3] [i_4] [i_4] [i_4 + 1] [i_8]) : (arr_21 [i_0] [i_1] [8] [i_4] [i_4 - 1] [i_8]))))), (min(var_4, 26814))));
                        arr_45 [i_0] [i_8] [i_8] &= (min((min((min(9754, var_2)), var_4)), ((((arr_18 [i_0] [i_1] [i_1]) ? var_6 : var_10)))));
                    }
                }
                var_23 = (min(((min((!26814), (~96)))), (max((~14685552187084675713), var_6))));

                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {

                    for (int i_12 = 2; i_12 < 17;i_12 += 1)
                    {
                        arr_52 [i_11] [i_0] [i_11] = ((~((min((arr_9 [i_0] [i_0] [i_0] [i_0]), (max(var_3, 91)))))));
                        var_24 = -97;

                        /* vectorizable */
                        for (int i_13 = 2; i_13 < 15;i_13 += 1)
                        {
                            arr_55 [i_0] [i_0] [i_12] = (((arr_13 [i_13] [i_12 + 1] [i_1] [i_1]) ? (arr_13 [i_0] [i_1] [i_11] [i_12]) : (arr_3 [i_0 + 3])));
                            arr_56 [i_0] [i_1] [i_0] [i_12] [i_13 + 1] = (-1092609294 ? 255 : ((var_5 ? -1092609294 : 29334)));
                        }
                    }
                    var_25 = (max(var_25, ((max(((min((max(52168, 165)), ((min(-4, var_9)))))), ((-4 ? (min(var_9, (arr_22 [i_0 - 2] [i_1] [i_1] [i_1] [i_1] [i_11] [i_11]))) : ((max(-55, var_2))))))))));
                    arr_57 [i_0] = (max(((91 ? 29 : 17)), ((min((arr_40 [i_0 + 3] [i_0 + 3] [i_0] [i_0 - 1] [i_0 + 3]), (arr_40 [i_0] [i_1] [i_11] [i_0 - 2] [i_0]))))));
                }
            }
        }
    }
    var_26 = (max((min((min(var_8, var_11)), ((min(var_0, 0))))), (max((max(var_1, var_5)), ((max(var_9, 22)))))));
    var_27 = (min(((((~var_1) ? var_4 : var_0))), (((~4642314079013056279) ? (max(var_11, 962539292)) : (min(var_0, var_1))))));
    #pragma endscop
}
