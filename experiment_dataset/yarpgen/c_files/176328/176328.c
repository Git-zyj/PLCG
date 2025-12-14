/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= 3407283268;
    var_11 *= var_3;
    var_12 -= (min(var_8, -var_2));
    var_13 -= (34245 * 1782488537997465543);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_14 |= (((var_3 ? var_4 : (arr_3 [i_1 - 2] [i_1 - 2]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_15 *= (((((arr_7 [i_2] [1] [i_2] [i_1 - 1] [i_1] [i_1]) ? (min(3309257307, 16332467861936337470)) : ((((var_0 || (arr_5 [i_0] [i_0] [i_3]))))))) % var_9));
                            var_16 += (arr_5 [8] [i_3] [i_1]);
                            var_17 = (min(var_17, ((((((((arr_6 [i_0] [i_1] [i_2] [i_3]) + 9223372036854775807)) << (((arr_8 [i_3] [i_2] [i_1 + 1] [i_1 + 1] [i_0]) - 21015)))) == ((max((arr_0 [i_1 - 1]), (min(-1, (arr_3 [i_0] [i_1])))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        {

                            for (int i_6 = 1; i_6 < 10;i_6 += 1)
                            {
                                arr_17 [i_5] &= (((min((arr_9 [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_5 - 1]), (arr_9 [i_5 - 1] [i_5 + 1] [i_5 + 3] [i_5 + 3])))) >> (((min(var_7, (arr_9 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 2]))) - 136)));
                                var_18 *= ((var_7 > (((((11 >> (((arr_13 [i_0] [i_1 - 2] [i_6] [i_5] [i_6] [i_6]) - 16))))) ? (arr_15 [i_6] [2] [i_0] [i_0]) : -var_1))));
                                arr_18 [i_0] [i_1] [i_4] [3] [i_6 + 1] |= var_9;
                            }
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 9;i_7 += 1)
                            {
                                var_19 = (min(var_19, var_7));
                                var_20 = (min(var_20, (((337454278 ? (((25839 < (arr_19 [3] [3] [1] [i_4] [i_5] [i_7 - 1])))) : var_9)))));
                                var_21 = (max(var_21, 32767));
                            }
                            arr_21 [i_0] [i_0] [i_1] [i_1] [i_4] [i_5] |= (((((-34023 ? ((min(var_6, var_4))) : ((11843 ? var_1 : var_6))))) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : 1358992927));
                            var_22 = (min(var_22, var_3));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 9;i_10 += 1)
                        {
                            {
                                var_23 *= (max((((var_5 || (arr_16 [i_10 - 1] [i_10 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1])))), (((((min(1, (arr_13 [i_0] [i_0] [9] [i_8] [i_9] [i_10 + 1]))))) & ((-1584092857682881456 ? (arr_19 [i_0] [i_0] [i_0] [i_9] [i_10] [i_10 - 2]) : var_7))))));
                                var_24 = (max(var_24, (((-(min(var_8, (arr_11 [i_10 + 2] [i_10 - 2] [8] [i_10 - 2] [i_10]))))))));
                                arr_32 [i_0] [i_0] [i_0] &= var_3;
                            }
                        }
                    }
                }
                arr_33 [i_0] [i_0] [4] &= var_1;
            }
        }
    }
    #pragma endscop
}
