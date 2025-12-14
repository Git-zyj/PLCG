/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_14 = ((var_1 - (arr_1 [i_1 - 1] [i_0])));
            var_15 = ((!(arr_0 [i_0])));
            arr_4 [i_0] [i_0] [i_0] = (var_3 < var_1);
            var_16 = ((1029789190 ? 0 : -64));
            var_17 -= ((var_9 ? ((((arr_0 [i_0]) ? 64 : (arr_1 [i_0] [6])))) : -1088642614159367028));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_18 = (((arr_6 [i_0] [i_2]) ? (arr_3 [i_2] [i_2 + 2]) : (!var_5)));
                var_19 = ((!(arr_6 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_20 = (((var_12 && -5) % (arr_11 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                            arr_13 [i_0] [i_0] = ((((!(arr_8 [i_0] [i_3] [i_4] [i_5]))) ? var_9 : (arr_0 [i_2 + 2])));
                        }
                    }
                }
                var_21 = (!var_10);
            }
            var_22 = (min(var_22, var_11));
        }
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_23 = (arr_18 [9] [i_6] [i_6 + 3]);
                            var_24 = ((+((var_8 ? (arr_20 [i_0] [i_6] [i_0] [i_7]) : var_8))));
                            var_25 = ((var_2 ? var_10 : ((var_7 ? var_8 : var_4))));
                            var_26 = ((((((arr_3 [2] [i_8]) ? (arr_18 [i_6] [i_6] [i_9]) : -1088642614159367028))) && (arr_7 [i_0] [i_0] [i_7] [i_6])));
                        }
                    }
                }
            }
            arr_23 [i_0] [i_6] = (((arr_16 [i_6 + 3] [i_6]) ? var_9 : (arr_16 [i_6 - 1] [i_6])));

            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            arr_32 [i_0] [i_0] [i_10] [i_11] [i_0] = ((~(((!(arr_9 [i_0] [i_10] [i_11] [1]))))));
                            arr_33 [i_0] [i_6] [i_10] [i_0] [i_12] = ((((((arr_6 [i_0] [i_0]) ? var_3 : (arr_1 [i_0] [i_0])))) ? var_2 : (var_9 / var_5)));
                        }
                    }
                }
                var_27 = ((!(arr_1 [19] [i_0])));
                var_28 = var_10;
                arr_34 [i_0] [10] [i_0] = 1297521772407088651;
            }
            var_29 = 4;
        }
        for (int i_13 = 1; i_13 < 19;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                arr_41 [i_13] [i_0] [i_0] [i_0] = ((var_2 ? var_7 : var_2));
                var_30 = var_4;
            }
            /* LoopNest 3 */
            for (int i_15 = 4; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 21;i_17 += 1)
                    {
                        {
                            arr_49 [i_0] [0] [i_0] [6] [i_0] = -var_2;
                            arr_50 [i_0] [i_13] [i_13 + 2] [i_15 - 2] [i_16 + 1] [i_17] = (arr_27 [i_0] [i_13 + 2] [i_17 + 1] [i_17 - 2] [i_17] [i_17]);
                            arr_51 [i_0] [i_16] [i_15] [i_13] [i_0] = var_0;
                            var_31 = (-9223372036854775807 - 1);
                            var_32 = ((var_11 != (arr_29 [i_17] [i_17] [i_17] [i_17 - 1] [i_17])));
                        }
                    }
                }
            }
            var_33 = (arr_6 [4] [i_13 + 1]);
            arr_52 [i_0] [i_0] = var_5;
        }
        var_34 = ((var_6 ? (var_9 / var_7) : var_6));
    }
    var_35 = (((((((var_11 ? var_0 : -67)) ^ (max(var_3, var_6))))) ? (((var_6 != ((min(var_6, var_8)))))) : (max(((var_2 ? var_4 : 228)), (max(var_0, 48))))));
    #pragma endscop
}
