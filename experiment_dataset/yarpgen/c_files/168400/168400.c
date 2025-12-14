/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 15;i_4 += 1)
                            {
                                var_15 = arr_6 [i_0] [i_0] [i_2];
                                var_16 = (min(var_16, ((((arr_8 [i_0] [i_0] [i_2] [i_3] [i_2 + 1]) ? (arr_11 [1] [i_3] [1]) : var_0)))));
                                arr_13 [i_2] [i_2] [i_2 - 1] [i_3] [i_4] = (arr_1 [i_4 - 1]);
                                arr_14 [i_0] [i_0] [0] [i_2] [i_2] = var_3;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                arr_18 [i_2] = (((arr_16 [i_2 + 1] [i_2] [i_2 + 1] [8] [8] [i_2] [i_2 + 1]) ? (arr_16 [i_3] [i_2] [i_2 - 1] [12] [4] [i_2] [i_1]) : 2048));
                                var_17 = var_12;
                                arr_19 [i_0] [i_0] [i_2] [i_2] [i_2] [i_5] = -90;
                            }
                            for (int i_6 = 3; i_6 < 14;i_6 += 1)
                            {
                                var_18 = ((((arr_5 [1] [i_2] [i_2] [i_0]) ? var_8 : (((arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_11 : var_0)))));
                                var_19 = var_1;
                                arr_23 [i_0] [1] [i_0] [i_0] [i_0] [i_0] [i_0] |= var_9;
                                arr_24 [i_0] [i_0] [i_2] [7] [i_0] = (min(-88, (~var_13)));
                                arr_25 [i_0] [i_0] [6] [6] [i_0] &= ((0 ? ((~(((!(arr_6 [i_6] [i_6 + 2] [4])))))) : 113));
                            }
                            for (int i_7 = 0; i_7 < 16;i_7 += 1)
                            {
                                var_20 = ((~((((!(arr_7 [i_0]))) ? ((max(1, 1))) : ((~(arr_12 [i_7])))))));
                                var_21 = (max(var_21, (arr_26 [6] [i_0])));
                                var_22 = (var_1 + -489204180);
                                var_23 = ((((!((min(-110, (arr_1 [i_3])))))) ? ((((!(!-116))))) : ((~((var_12 ? var_13 : (arr_8 [i_7] [i_3] [i_2] [i_1] [i_0])))))));
                            }

                            for (int i_8 = 0; i_8 < 16;i_8 += 1)
                            {
                                var_24 = (min(var_24, (!1)));
                                var_25 = var_13;
                                var_26 = (max((arr_3 [i_0]), (((((var_1 & (arr_17 [i_0] [i_0]))) < var_1)))));
                                var_27 ^= (min((min((arr_29 [i_0] [i_1] [i_1] [i_0] [i_2 + 1]), (arr_20 [i_0] [11] [0] [14] [i_2 - 1]))), var_2));
                            }
                            var_28 = ((1 > (!1)));
                            var_29 &= var_6;
                            var_30 = 24;
                        }
                    }
                }
                var_31 = (arr_15 [11] [11] [i_1] [i_1] [i_1] [i_1]);
            }
        }
    }
    var_32 = -var_1;
    #pragma endscop
}
