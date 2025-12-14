/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = 9223372036854775807;
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = (~60);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_3] [i_3] [i_3] = (((arr_7 [i_1]) * ((var_8 ? 67076096 : (arr_12 [i_4] [i_1] [i_1] [i_1])))));
                        arr_17 [i_2] [i_2] = (((arr_11 [0] [i_2] [i_3] [i_4]) > var_3));
                    }
                }
            }
            arr_18 [i_1] [i_1] [i_1] = (((max((arr_12 [i_1] [6] [i_2] [i_2]), (arr_11 [i_1] [i_1] [i_1] [1])))));
        }
        for (int i_5 = 4; i_5 < 12;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_29 [i_1] = 67076096;
                            arr_30 [i_1] = ((!((min((arr_11 [i_8] [i_7] [i_5] [i_5]), (max(var_15, 32091)))))));
                            arr_31 [i_1] [6] [i_6] [i_6] [i_6] = (min(((min((arr_9 [i_1] [i_5 - 2] [i_6]), (arr_9 [i_1] [i_7] [i_6])))), (arr_9 [i_5 - 4] [i_5] [i_6])));
                            arr_32 [i_5] [i_7] [i_6] [i_1] [i_5] [i_1] [i_1] = ((((((!(arr_7 [i_1]))))) * (max(-62, 1220537781755721544))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        {
                            arr_41 [i_1] [i_5] [i_1] [i_5] [i_11] [i_1] = -67076097;
                            arr_42 [i_1] [i_5] [10] [i_9] [i_9] [i_10] [i_10] = (arr_28 [i_1] [i_1] [i_1] [i_9] [i_1] [i_11]);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 4; i_12 < 12;i_12 += 1) /* same iter space */
        {
            arr_46 [i_1] [i_1] = (arr_6 [i_1]);
            arr_47 [i_12] [i_1] [i_12] = var_11;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 14;i_14 += 1)
                {
                    {
                        arr_53 [i_14] [i_1] [i_1] [i_1] = -10527;
                        arr_54 [i_13] [i_1] [i_1] [i_1] = ((-76 + (arr_50 [i_14] [i_14 + 1] [i_12 - 3] [i_1])));
                    }
                }
            }
            arr_55 [i_1] [i_1] [9] = ((((((arr_51 [i_1] [i_1]) ? (arr_40 [i_1] [6] [i_12] [10] [i_1] [i_1]) : var_5))) ? var_1 : (arr_51 [i_1] [i_1])));
            arr_56 [i_1] = (((((var_6 ? var_10 : 34))) % (((arr_50 [i_1] [i_1] [i_1] [i_12 - 3]) + (arr_28 [9] [i_1] [i_12 + 1] [i_12] [9] [i_1])))));
        }
        for (int i_15 = 4; i_15 < 12;i_15 += 1) /* same iter space */
        {
            arr_60 [14] = max(((var_14 - ((~(arr_9 [i_1] [i_15 - 3] [12]))))), (arr_52 [i_15 + 1] [5] [i_15 + 2] [i_15 - 1] [i_15 - 1] [i_15]));
            arr_61 [i_1] [i_1] = 63;
            arr_62 [i_15 + 3] [0] = (min((((((var_11 ? 532407189 : var_13))) - (max((arr_12 [i_15] [i_1] [i_1] [i_15]), var_10)))), ((max(var_5, -67076096)))));
            arr_63 [i_1] [6] [i_1] = (((1 << (-116 + 119))));
        }
        arr_64 [i_1] = (arr_10 [i_1] [i_1] [i_1] [i_1]);
    }
    for (int i_16 = 0; i_16 < 24;i_16 += 1)
    {
        arr_69 [i_16] = (max(var_15, (arr_68 [i_16] [i_16])));
        arr_70 [i_16] = ((var_5 >> (((max((max(var_14, var_7)), var_2)) - 161))));
    }
    var_16 = ((-336460814 ? (((18096073096221949261 ? var_1 : var_4))) : ((var_0 ? var_11 : (((48826 >> (var_3 - 3184690880))))))));
    var_17 = var_9;
    #pragma endscop
}
