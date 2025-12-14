/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 &= (min(((((80 != (arr_1 [i_0]))) ? ((((arr_5 [i_1]) ? (arr_2 [i_1]) : var_4))) : (min(var_6, (arr_1 [i_0]))))), var_10));
                var_17 *= min(var_14, ((var_3 ? ((min(var_13, var_13))) : (arr_0 [i_0] [i_1]))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_18 = (((arr_1 [i_0]) ? ((var_4 / (arr_9 [i_2] [i_2] [i_2] [i_1] [i_2]))) : (~2147483637)));
                        var_19 = 28038;
                        var_20 = ((var_14 >= (arr_11 [i_0])));
                    }
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        var_21 = ((var_10 ? (arr_7 [2] [11] [2] [i_4 + 1]) : (arr_7 [i_0] [i_0] [i_2] [i_4 - 1])));
                        arr_14 [i_0] [i_1] [i_1] [i_4] = ((var_12 & (~var_5)));
                        var_22 = (!var_11);
                        var_23 = 165;
                    }
                    arr_15 [i_0] [7] [2] = ((var_14 ? var_6 : 80));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_18 [i_0] [i_1] [i_1] [i_0] = (max((min(8589934591, 1517709290)), (((((min(var_5, (arr_0 [i_0] [6])))) ? (((max(var_5, var_5)))) : ((12475272622503119288 ? 0 : -14450313)))))));
                    var_24 = ((~(min(var_9, (!var_13)))));
                    var_25 = ((~(max((arr_8 [i_0] [i_1] [i_5] [2]), (arr_0 [i_5] [i_1])))));
                    arr_19 [i_5] [2] [i_0] = ((var_6 ? (max(5831421921491905376, ((((arr_13 [i_0] [4] [0] [0] [i_5]) & 527681616))))) : (((((max(var_8, var_13))) ? ((-(arr_17 [4]))) : (arr_16 [1]))))));
                }

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_26 = (max((max((arr_12 [i_0] [i_1] [i_6] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_1] [i_6]))), ((-(arr_1 [i_0])))));

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_27 ^= (~3767285676);
                        var_28 = (min(var_28, (~6970858849856401871)));
                        var_29 -= (((min(-1756455771, 1))) ? -var_2 : ((min(var_11, var_14))));
                    }
                    arr_24 [i_0] = ((((((min(0, var_4))) ? (((min(var_12, (arr_20 [i_0] [i_0] [i_6]))))) : (arr_10 [i_0]))) != (((((max(var_7, (arr_4 [i_6] [i_6] [i_6])))) ? (((arr_22 [i_1] [8] [i_6] [i_1]) ? var_9 : 527681608)) : (arr_23 [11] [i_6] [i_1] [i_0]))))));
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                {
                    var_30 = (arr_17 [i_0]);
                    arr_27 [i_0] [i_0] [i_0] = max((((var_7 % (arr_20 [i_0] [i_0] [i_0])))), ((12243284105701935627 ? 24 : -30)));
                    var_31 = (min(var_31, ((min((((arr_11 [i_1]) ? (max((arr_10 [5]), (arr_11 [i_1]))) : ((((arr_26 [i_8] [i_1] [i_0]) ? 30 : (arr_7 [i_0] [i_0] [0] [i_0])))))), 1)))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_32 &= (min((((var_7 << (((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) + 4176535447581737172)) - 27))))), (min(4294967272, (arr_12 [i_8] [i_9] [i_8] [i_1] [10])))));
                                var_33 = ((((1 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_10] [i_9] [i_8] [i_1] [i_0]))) & (arr_26 [i_10] [i_8] [i_1])));
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                {
                    var_34 = 8411683091522396970;
                    var_35 = (~var_2);
                    arr_35 [i_1] = (((arr_20 [i_11] [i_1] [i_0]) ? (arr_20 [i_0] [i_1] [i_11]) : ((min((arr_20 [i_0] [i_1] [i_11]), (arr_20 [i_11] [i_1] [i_11]))))));
                }
            }
        }
    }
    var_36 = 172;
    var_37 = (max(var_37, var_7));
    #pragma endscop
}
