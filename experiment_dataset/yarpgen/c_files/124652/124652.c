/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_11 = (min(var_11, 2607109895));
            var_12 = var_0;

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_13 = 4309045903881390016;
                var_14 = (max(var_14, ((min((min(106, (max((arr_3 [i_2] [i_1] [i_0]), 2979219738959846575)))), ((min((arr_7 [i_0] [i_0] [i_2]), 26444))))))));
                arr_8 [i_0] [i_1] [10] [i_0] = (1062466202927594678 - (((min((arr_0 [15]), (arr_0 [i_1]))))));
                var_15 = (max((arr_4 [i_0 + 3] [i_0]), (arr_3 [i_0 + 1] [i_0 + 1] [i_2])));
            }
            for (int i_3 = 4; i_3 < 21;i_3 += 1) /* same iter space */
            {
                var_16 += (max((arr_6 [i_0] [i_0] [5]), ((((min((arr_7 [i_3] [i_1] [i_0 - 2]), var_5))) ? (1062466202927594678 || 17384277870781956925) : var_4))));
                var_17 = ((17384277870781956926 ? (max(-9030594609199035129, (arr_1 [i_0 - 2]))) : (((var_6 ? (arr_1 [i_0 + 1]) : (arr_2 [i_0 - 1] [i_0 + 1]))))));
            }
            for (int i_4 = 4; i_4 < 21;i_4 += 1) /* same iter space */
            {
                var_18 = (min(var_18, (((!((((1062466202927594667 ? 17384277870781956925 : (arr_14 [i_0] [i_0] [i_0]))))))))));
                var_19 = (0 - 24213);
                var_20 = (min(var_20, (arr_3 [i_0] [8] [i_4 + 1])));
            }
            for (int i_5 = 4; i_5 < 21;i_5 += 1) /* same iter space */
            {
                var_21 = ((!(arr_0 [1])));
                arr_18 [10] [i_1] = max((5033 ^ 1939), (arr_17 [i_0 - 1] [i_0 + 1]));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((max(96, -9030594609199035129)))));
                            var_23 = 39;
                        }
                    }
                }
                var_24 = ((((min(((max(var_3, (arr_10 [i_0 - 2] [i_0 - 2] [i_5])))), (min(-512, 1062466202927594698))))) ? var_6 : ((min(var_9, (arr_0 [i_0 + 1]))))));
                var_25 ^= (min((arr_6 [i_0] [i_0] [i_0]), ((~(arr_23 [i_5 + 1])))));
            }
            var_26 = (min(89, (((arr_17 [6] [6]) ? (max(511, (arr_15 [i_1] [i_1] [i_1]))) : (((min((arr_6 [2] [i_1] [0]), var_2))))))));
        }
        for (int i_8 = 3; i_8 < 19;i_8 += 1)
        {
            var_27 = (max(var_27, 0));

            /* vectorizable */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_28 *= (arr_30 [i_10 + 1] [i_10 + 3]);
                            var_29 = (min(var_29, (!var_8)));
                        }
                    }
                }
                var_30 = 1;
            }
        }
        arr_38 [i_0] = -344459084574629750;
        arr_39 [i_0] [i_0] = (max((min((arr_21 [i_0] [14] [2] [4] [8]), (((62 ? var_0 : 5564))))), 1062466202927594698));
        var_31 &= min(31, (min(-101, 1062466202927594678)));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        var_32 = (max(var_32, (var_2 || 1517572554)));

        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
        {
            var_33 ^= (arr_22 [6]);
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 14;i_15 += 1)
                {
                    {
                        var_34 = (max(var_34, ((-512 & (arr_40 [i_14])))));
                        arr_50 [i_12] = 292857132;
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
        {
            var_35 &= ((5703 << (334598914 - 334598905)));
            var_36 = 334598914;
        }
        for (int i_17 = 2; i_17 < 14;i_17 += 1)
        {
            var_37 = ((var_8 ^ (arr_47 [i_12])));
            arr_57 [i_12] = var_4;
            var_38 &= (((arr_5 [i_17 - 2]) ? (arr_5 [i_17 - 1]) : (arr_5 [i_17 - 2])));
        }
    }
    var_39 = (!-5708);
    #pragma endscop
}
