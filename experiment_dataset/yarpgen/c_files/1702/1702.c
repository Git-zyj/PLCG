/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 += (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [8] [i_1] [i_1] |= ((-((var_9 ? var_7 : (arr_0 [i_0])))));
            arr_6 [i_0] = (arr_4 [1] [1] [i_1]);
            var_19 -= var_5;
            var_20 = -1141219322;

            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                arr_9 [i_0] [i_1] [i_2] = 3153747974;
                arr_10 [i_0] [i_1] [i_1] = (1141219345 < 3153747944);
            }
        }
        for (int i_3 = 3; i_3 < 7;i_3 += 1)
        {
            arr_14 [i_3] = (4992327129144296052 < (((~(arr_12 [i_0] [i_0])))));
            var_21 = (max(var_21, ((((3153747983 > 3962072514) + 3871028379)))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_19 [i_0] [i_4] [i_0] [2] [i_5] [i_5] &= 1141219327;
                        var_22 = (min(var_22, (((1 ? (((var_2 - (arr_18 [i_0] [i_0])))) : ((-1985185270 ? 1141219312 : 4992327129144296031)))))));
                        var_23 = (min(var_23, ((((var_14 >= -7515781840292974382) | 2457825543012629832)))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_24 [i_0] [i_6] [8] = (((arr_22 [i_0]) & (arr_18 [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 6;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 8;i_8 += 1)
                {
                    {
                        var_24 = ((var_13 & var_7) ? ((236 ? 56867 : 3893469577)) : 35);
                        arr_29 [i_0] [i_6] [5] &= ((~5260855928082408819) ? 1600753508 : ((1 ? 4992327129144296054 : (arr_4 [i_0] [i_0] [i_8 - 1]))));
                        arr_30 [i_7 + 1] [i_6] [i_6] = var_1;
                    }
                }
            }
            arr_31 [i_0] = (((arr_25 [i_0] [i_0] [i_0] [i_0]) <= (arr_4 [i_0] [i_0] [i_6])));
        }

        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        var_25 = ((!((var_2 < (arr_15 [i_10] [i_11])))));
                        arr_40 [i_0] = -32729;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 9;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            arr_49 [i_14] [4] [i_14] [i_0] [i_13] [i_12] [i_14] = (((arr_16 [i_9] [i_12] [i_13] [i_14]) ? ((var_0 ? (arr_38 [8] [i_9] [i_12] [8]) : (arr_17 [i_0] [i_9] [i_12] [i_13] [i_13] [i_14]))) : (arr_46 [i_13 + 1] [i_13] [i_14] [i_13])));
                            arr_50 [2] [i_13] [i_12] [i_13 + 1] [i_14] = ((1 <= (((arr_0 [9]) ? var_10 : var_12))));
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
        {
            arr_54 [i_0] [i_0] [i_15] = (i_15 % 2 == 0) ? ((((((var_6 >> (((arr_46 [i_0] [i_15] [i_15] [5]) - 170))))) ? (-1985185291 != 0) : (arr_28 [i_0] [i_15] [i_0] [i_0])))) : ((((((var_6 >> (((((arr_46 [i_0] [i_15] [i_15] [5]) - 170)) + 48))))) ? (-1985185291 != 0) : (arr_28 [i_0] [i_15] [i_0] [i_0]))));
            var_26 &= (((var_6 - var_13) && (arr_37 [i_0] [i_15])));
        }
        for (int i_16 = 1; i_16 < 6;i_16 += 1)
        {
            var_27 |= ((var_15 != (arr_55 [i_0] [i_0])));
            var_28 = (var_1 * var_0);
        }
        var_29 = (((arr_15 [i_0] [i_0]) ? (arr_47 [i_0] [i_0] [i_0] [i_0] [i_0]) : ((2832442440 ? var_8 : (arr_36 [i_0] [i_0] [i_0] [1])))));
    }
    #pragma endscop
}
