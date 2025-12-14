/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = ((((((var_9 && (arr_8 [i_3] [i_2] [i_1] [i_0]))) || (arr_6 [i_1]))) ? (((!(arr_5 [i_0] [i_4 - 3] [i_2])))) : ((((((arr_12 [i_0] [i_1] [i_2] [i_4]) && (arr_4 [i_0]))) || (!var_4))))));
                                var_21 = (min(var_21, ((max((((((max(var_3, var_8)))) + (max((arr_5 [i_1] [i_1] [i_1]), var_14)))), ((max((arr_13 [i_4 - 1] [i_4] [i_4] [i_4] [i_4 - 2] [i_4]), (arr_13 [i_4 - 3] [i_4] [i_4] [i_4] [i_4 + 1] [i_4])))))))));
                                var_22 = ((((((((var_12 | (arr_11 [i_3] [i_3] [i_3] [i_3])))) ? var_9 : ((~(arr_7 [i_0] [i_1] [i_1])))))) ? ((~(var_2 | var_15))) : ((((((arr_6 [i_0]) ? var_17 : var_12)) ^ ((var_7 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_4] [i_1]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_23 = (max((max((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : var_8)), ((var_15 + (arr_4 [i_0]))))), (((arr_16 [i_6 + 3] [i_6] [i_6] [i_6] [i_6] [i_6]) - ((var_14 - (arr_10 [i_0])))))));
                                var_24 = (((max(var_10, (arr_2 [i_5 - 1] [i_0]))) + ((((arr_2 [i_0] [i_5 + 1]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_1]))))));
                                arr_20 [i_1] [i_5] [i_6] = 4294967295;
                                var_25 = (((((var_8 - (arr_1 [i_0] [i_2])))) ? var_16 : (((min(var_1, var_11))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 -= (max(((var_1 ? var_4 : var_11)), var_16));
    var_27 = (max(var_27, (((var_3 | ((((max(var_18, var_13))) ? var_1 : var_18)))))));

    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        var_28 = ((((min(var_14, (arr_0 [i_7 + 2])))) >> (((((arr_18 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 + 2]) ? (arr_18 [i_7] [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 + 2]) : (arr_18 [i_7] [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 + 1]))) + 8574))));

        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        var_29 = (min(21, 14));
                        var_30 = ((((~(((var_15 && (arr_24 [i_7] [i_8])))))) >= (((!(arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]))))));
                        var_31 &= ((!((((-2586918210535058200 && 1) ? 77 : (!1))))));
                    }
                }
            }
            var_32 = (arr_21 [i_7 + 2]);
            var_33 = (((((((max(var_7, var_2))) ? -var_12 : var_3))) ? (64425 < 0) : ((-24 ? (126 && -2147483631) : 4294967254))));
            var_34 = (((((-(arr_2 [i_7] [i_8])))) ? ((+(((arr_17 [i_7] [i_7] [i_7] [i_8] [i_8]) + (arr_5 [i_7] [i_8] [i_8]))))) : (((((arr_19 [i_7] [i_7] [i_7] [i_8] [i_8]) ? (arr_30 [i_8] [i_8] [i_7] [i_7]) : var_6)) & (~var_1)))));
        }
    }
    #pragma endscop
}
