/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_16 = max(((min(-105, (arr_0 [i_1 - 3])))), (min((max(-8, var_10)), var_10)));
            var_17 = (max(var_17, (((var_8 ? ((max((116 + var_8), ((var_2 ? (arr_4 [i_1 + 2] [4] [i_0]) : (arr_0 [3])))))) : (~var_12))))));
        }
        var_18 = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 14250150725566938684));
        var_19 = ((-((1367340933595502546 * ((5 ? 97 : 2462512389067781252))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_20 = arr_6 [i_2];
        var_21 = ((((((((min(var_14, -127)))) + (64 & var_9)))) ? (min((~14250150725566938684), 0)) : (arr_1 [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        var_22 = ((((arr_2 [5] [i_3 - 2]) % -57)));
        var_23 &= 119;

        for (int i_4 = 4; i_4 < 10;i_4 += 1)
        {
            var_24 = ((!(arr_13 [i_3 - 1] [i_4 + 1])));
            var_25 = (((((var_7 ? (arr_5 [i_3] [i_3] [13]) : 1))) && -183198769697477236));

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        {
                            var_26 = (min(var_26, (arr_22 [i_3] [i_5] [i_3] [i_3] [10] [i_3])));
                            var_27 = ((((57 ? (arr_15 [i_4 + 3] [8] [6]) : var_7))) ? (arr_10 [i_3]) : ((((7185389601146520464 >= (arr_19 [6] [10] [4] [i_6]))))));
                            var_28 = (min(var_28, (var_12 + var_1)));
                        }
                    }
                }
                var_29 = (35184372023296 << (var_14 + 137));
            }
            var_30 = 4048800652773503259;
        }
        for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_31 = ((-(-127 - 1)));
            var_32 ^= ((~((115 ? -4 : (arr_19 [i_3] [i_3 - 1] [i_3] [6])))));
        }
        for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 4; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 11;i_11 += 1)
                {
                    {
                        var_33 = (max(var_33, (arr_22 [i_11 - 1] [i_9] [i_9] [i_11] [i_11 - 1] [i_11])));

                        for (int i_12 = 3; i_12 < 11;i_12 += 1)
                        {
                            var_34 = (arr_12 [i_3 - 3]);
                            var_35 = (max(var_35, var_4));
                            var_36 = var_5;
                        }
                        for (int i_13 = 1; i_13 < 10;i_13 += 1)
                        {
                            var_37 = ((arr_26 [i_9 + 2]) ? ((var_8 ? 16556330171090231399 : var_4)) : 6);
                            var_38 &= ((var_8 ? (arr_20 [i_10] [11]) : (var_7 | -1)));
                        }
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            var_39 = ((arr_38 [i_10 + 1] [i_9 - 1] [4] [i_11 - 1]) | (-127 - 1));
                            var_40 = (min(var_40, ((((arr_35 [i_9 + 1] [i_11] [i_11 + 2] [i_14]) ? var_8 : (arr_35 [i_9 + 1] [i_10] [i_11 - 1] [i_11]))))));
                            var_41 = (arr_13 [i_3 - 3] [i_3]);
                            var_42 -= ((-(arr_37 [i_3] [i_3 - 2] [i_3] [10] [i_3 - 3] [i_9 + 1] [i_14])));
                        }
                    }
                }
            }
            var_43 *= (11457824074514636942 ? var_6 : (arr_36 [i_9 + 1] [i_3 - 1] [i_3] [i_3] [i_3 - 2]));
        }
        var_44 = ((!(arr_27 [i_3])));
        var_45 -= ((arr_37 [i_3] [i_3] [1] [i_3] [i_3 - 3] [i_3 + 1] [1]) ? -9 : (arr_1 [i_3] [11]));
    }
    /* LoopNest 3 */
    for (int i_15 = 1; i_15 < 20;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 19;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 18;i_17 += 1)
            {
                {
                    var_46 = (min((~-95), -1));
                    var_47 = ((~((5 ? (-127 - 1) : ((min(13, 69)))))));
                }
            }
        }
    }
    var_48 = var_12;
    #pragma endscop
}
