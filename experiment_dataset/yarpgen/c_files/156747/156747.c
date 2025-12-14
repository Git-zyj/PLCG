/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_2] [10] [11] [1] = (((((-((1652909593213689610 ? 226 : 255))))) ? (arr_0 [i_1]) : (arr_3 [0] [i_1])));
                    arr_10 [5] [i_0] [i_0] [i_2] = (arr_7 [i_2]);
                    var_12 = ((((0 != ((1 ? 254 : 31603))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = ((!((min((arr_14 [i_0] [i_0] [6] [6] [i_4]), (((arr_0 [i_4]) << 1)))))));
                                var_14 = (((arr_5 [i_0 + 1] [i_0 + 2]) - (((arr_6 [i_0] [1] [i_0 + 2] [i_0 + 1]) ? (arr_6 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) : (arr_6 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1])))));
                            }
                        }
                    }
                    var_15 = ((((min((arr_7 [i_0 + 1]), (arr_7 [i_1])))) >= (((-626743835020425156 != 1) * -var_0))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_16 += var_7;
        var_17 = ((-((209 ? (arr_17 [i_5]) : (arr_17 [i_5])))));
        var_18 = (((arr_17 [i_5]) - (arr_17 [i_5])));
        arr_18 [1] [i_5] |= 3308085276376709683;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_19 = (arr_20 [i_6] [i_6]);

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_24 [i_7] [i_7] |= -24633;
            var_20 ^= (arr_22 [i_6] [i_7]);
        }
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            var_21 = 30;
            arr_27 [i_8] [i_8] [i_8] = var_9;

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                arr_30 [i_8] [i_9] = -255;

                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_22 = (max(var_22, ((((!5) | (arr_21 [i_6] [i_8 - 2]))))));

                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        var_23 = (max(var_23, (arr_34 [i_6] [i_8] [i_6] [i_10] [12] [i_6] [i_8])));
                        var_24 *= ((~(arr_22 [i_8 - 2] [i_8 - 2])));
                        arr_36 [i_6] [i_6] [i_9] [i_8] = var_4;
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        arr_40 [i_6] [i_8] [i_9] [i_8] [i_12] |= arr_25 [i_6];
                        arr_41 [17] [i_8] [i_8] [i_8] [i_12] [i_8 + 1] [i_10] = ((((((arr_38 [i_6] [i_6] [i_9] [i_10] [i_8]) || 1652909593213689595))) + var_0));
                    }
                    arr_42 [19] [i_8] [i_9] [i_8] = 1;
                    arr_43 [i_8] [i_8] [i_9] [i_9] [i_8] = var_7;
                    var_25 ^= ((!(arr_39 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8 + 1] [i_8 - 2])));
                }
                var_26 = var_6;
                arr_44 [i_6] [i_8] [i_8] [i_9] = ((-(arr_38 [19] [i_8 - 2] [i_8 - 2] [i_9] [i_8])));
                var_27 = (var_1 / var_8);
            }
        }
        var_28 = ((42656 - 110) - -31);
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                {
                    var_29 = 170;
                    var_30 = (min(var_30, (((-((((arr_22 [i_13] [i_6]) >= (arr_46 [i_6] [i_13] [i_14])))))))));
                }
            }
        }
        var_31 |= 16793834480495861983;
    }
    /* LoopNest 3 */
    for (int i_15 = 2; i_15 < 11;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                {
                    arr_57 [i_15] [i_16] [i_17] [6] = (min((min((arr_33 [i_15] [i_15 + 2] [i_15 + 1] [i_15] [4] [i_16] [i_17]), (arr_33 [i_15 + 2] [i_15 - 1] [i_15 - 1] [i_15] [i_17] [i_17] [i_17]))), (arr_33 [i_15] [i_15 - 1] [i_15 + 2] [i_15] [i_15] [i_16] [i_15])));
                    var_32 += ((((var_7 != (arr_22 [i_15] [i_17])))));
                }
            }
        }
    }
    #pragma endscop
}
