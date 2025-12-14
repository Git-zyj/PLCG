/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_8 [i_2] = (~var_2);
                var_17 = (min(var_17, var_4));
            }
            var_18 ^= (arr_1 [i_0]);
        }
        for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_19 = (~5849748380940697569);
                        var_20 = ((5849748380940697569 | (arr_17 [i_0] [i_0] [i_0] [i_3 - 1] [i_0] [i_4 + 2])));
                    }
                }
            }
            var_21 = ((((var_7 | (arr_0 [7]))) % (arr_9 [i_3] [i_3 - 2])));
            var_22 = (~(arr_5 [i_0] [i_0] [4] [i_3]));
            var_23 = (min(var_23, var_14));
            var_24 = var_0;
        }
        for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                arr_25 [i_7] [0] [i_6] [i_0] = ((~((~(arr_21 [1])))));

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_25 = (((arr_27 [i_0] [i_6 - 2] [i_7] [i_8]) ? (arr_1 [i_8]) : 104));

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_26 = (arr_1 [i_0]);
                        var_27 = (var_13 ? (0 ^ var_1) : (~-53817859));
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        arr_35 [i_6] [i_6] [9] [i_10] [i_10] = (-5849748380940697570 || 0);
                        var_28 = 47;
                        arr_36 [i_10] [1] [i_7] [i_8] [i_8] [i_6] = ((-(arr_10 [i_0] [i_6 - 1] [i_0])));
                        var_29 = (arr_2 [i_0]);
                        var_30 = ((!(arr_15 [i_0])));
                    }
                    arr_37 [7] [1] [i_7] [4] = (((arr_1 [i_0]) + ((((arr_3 [i_0]) ? var_14 : (arr_9 [i_8] [i_8]))))));
                    var_31 += (((((arr_1 [i_6 - 1]) + 9223372036854775807)) >> (((arr_17 [i_0] [i_6 + 1] [i_7] [i_7] [i_6 - 2] [i_6 + 1]) + 2517))));
                }
                var_32 = var_6;
                var_33 = (max(var_33, ((((((~(arr_0 [5])))) ? ((((arr_32 [i_0] [i_6] [i_6] [i_7] [i_0]) ? (arr_20 [i_0] [i_6]) : 976707581))) : ((-5040 ? (arr_1 [i_0]) : -5044)))))));
            }
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                var_34 += (arr_32 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11]);
                arr_41 [15] [i_6 - 2] [15] [i_11] = ((~((0 ? 30291 : 2080722933069939495))));
                var_35 = (arr_6 [i_0] [i_0] [6] [i_0]);
            }
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                var_36 -= (arr_44 [i_6 - 1] [10] [i_6 - 1] [i_6]);
                arr_46 [i_0] [i_6 - 2] [10] [14] = ((!(arr_13 [i_0] [i_6] [i_12] [i_0])));
            }
            var_37 = ((var_12 | (arr_26 [i_6 - 1] [i_6 - 1] [11] [i_6 + 1])));
            var_38 |= (arr_33 [i_6 - 2] [i_6 - 1] [i_6 - 1]);
        }
        var_39 = var_1;
        /* LoopNest 2 */
        for (int i_13 = 3; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 15;i_14 += 1)
            {
                {
                    var_40 += -var_3;

                    for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                    {
                        arr_56 [i_14] [i_13 + 4] [7] [5] = ((var_6 ? 1 : (((arr_21 [i_0]) | (arr_14 [i_0] [i_0] [i_0] [i_0])))));
                        var_41 = (arr_53 [8] [11] [8] [i_14]);
                        arr_57 [i_13 + 1] [i_14] = ((-(arr_47 [i_13 + 2] [i_13 + 4] [i_14 - 1])));
                    }
                    for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
                    {
                        var_42 &= var_16;
                        var_43 += ((((arr_31 [i_0] [i_0] [i_13] [4] [i_16]) - (arr_32 [i_0] [9] [i_14 - 1] [i_16] [i_16]))));
                        var_44 ^= (((var_6 ^ (arr_21 [i_0]))));
                    }
                    var_45 &= ((var_1 * (~5053)));
                }
            }
        }
    }
    var_46 |= (min((min(5849748380940697569, (0 + var_3))), (max(((min(var_12, var_15))), ((-5849748380940697570 ? -5063 : 5849748380940697548))))));
    #pragma endscop
}
