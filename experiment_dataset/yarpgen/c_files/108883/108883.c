/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (!130)));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_16 = (((((((min(17592186044160, 12378635845163659408))) ? var_10 : (max(var_7, -40))))) ? (((((min(var_9, var_9)) > ((max((arr_3 [i_1] [i_1]), var_3))))))) : (max((arr_3 [i_1] [i_1 - 1]), var_11))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = ((arr_5 [19]) / (arr_7 [i_0] [i_0] [i_2] [i_1] [i_4]));
                                var_18 = ((+(((arr_0 [i_1 - 1]) - (arr_0 [i_1 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            {
                var_19 = (max(12014637556961757300, ((((~6068108228545892208) <= 12378635845163659408)))));

                for (int i_7 = 3; i_7 < 19;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        arr_21 [i_6] [i_6] [i_7 - 1] [i_8] = ((-((var_11 ? var_11 : (arr_0 [i_6])))));
                        arr_22 [i_6] = ((-((28 ? (arr_0 [1]) : 3019197929))));
                        var_20 = (min(var_20, ((((((arr_15 [i_7 - 3]) + 2147483647)) >> (12378635845163659421 - 12378635845163659399))))));
                        arr_23 [0] [i_6 + 1] [i_6] [i_6] [i_6] = ((197 << (var_6 - 684811474)));
                        var_21 = var_5;
                    }
                    for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
                    {
                        var_22 = ((+(((226 || var_9) ? 392324098887699772 : (arr_1 [i_5])))));
                        var_23 = ((min(6068108228545892182, var_8)));

                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_24 ^= (arr_10 [i_5] [21] [i_7] [i_9] [i_10]);
                            var_25 ^= ((((13221934311647937695 ? (arr_4 [i_6] [i_6 - 2] [i_7 + 1] [i_6]) : (arr_20 [i_5] [i_6 - 2] [i_7 - 2] [i_7 - 2]))) + (arr_12 [i_9])));
                            var_26 = (!var_3);
                            arr_28 [i_5 + 1] [i_6 + 1] [i_6] [i_9] [i_10] [i_10] [i_7] = ((~((((-187433122 + var_5) != (112 >= 5652476284754484429))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 18;i_12 += 1)
                        {
                            {
                                arr_33 [i_11] [i_6] [i_6 - 3] |= (min((((arr_0 [i_7 - 2]) ? var_12 : var_2)), (((!((min((arr_16 [i_12]), -2))))))));
                                var_27 = 16523;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            {
                                var_28 = -1483970864873267414;
                                arr_39 [i_7 - 1] [i_6] = (((arr_9 [8] [i_6] [i_7] [i_13] [i_6] [i_14]) && ((!(!var_9)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            {
                                var_29 = (min(var_14, (923824722 + -2062105956)));
                                var_30 = ((((((var_8 / (arr_34 [i_5] [i_5] [i_5] [i_5]))) & (var_2 < var_7)))) ? (((max((arr_32 [i_5 - 1] [18] [i_6 + 1] [i_6] [i_6] [i_6]), var_14)))) : ((var_11 % ((var_6 ? (arr_27 [12] [i_6] [i_6]) : var_1)))));
                            }
                        }
                    }
                }
                var_31 ^= var_13;
            }
        }
    }
    #pragma endscop
}
