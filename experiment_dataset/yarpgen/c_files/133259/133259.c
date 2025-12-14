/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_11 -= max((min(var_2, (1734879730 || var_3))), var_7);
                var_12 -= ((((((arr_3 [i_1 + 2] [i_1 + 2]) * (arr_3 [i_1 + 2] [i_1 + 2])))) % (max(10405923393198177086, (max(14450, 8040820680511374505))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_13 = (max(var_7, 22));
                    arr_7 [10] [10] [13] [10] = ((((min(14834406940127849407, (((var_10 >= (arr_4 [i_0]))))))) ? var_0 : (arr_0 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = ((-(arr_4 [i_4 - 1])));
                                var_15 = (max(var_15, (((+(((arr_10 [12] [i_1 - 1] [i_2] [i_3 + 1] [i_4]) ^ (arr_8 [i_4] [i_3 - 2] [i_2] [12]))))))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        var_16 = var_2;
                        arr_15 [i_0] = (((~10405923393198177126) > (min((arr_9 [i_2] [i_5 - 1] [i_5] [i_2]), (arr_9 [i_2] [i_5 - 1] [i_5] [i_5])))));
                        arr_16 [i_0] [2] [i_2] [2] [i_1] [i_1] = 0;
                    }
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_17 = (max(var_17, (((((((arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_0]) ? (arr_0 [i_6]) : (arr_10 [i_6] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))) * var_5)))));
                    var_18 = ((+(((arr_10 [i_0] [i_1 + 1] [i_6] [i_0] [i_0]) - (arr_10 [i_0] [i_1] [i_1] [i_1 - 1] [i_6])))));
                    var_19 = (arr_18 [i_0] [i_1 + 1]);
                }
                var_20 = ((((8040820680511374530 % var_8) <= var_4)));
                var_21 = ((~((((min(var_2, 11673949601830654007))) ? ((6707209193711816842 ? (arr_3 [i_1] [i_1]) : (arr_9 [2] [2] [2] [2]))) : (arr_4 [i_0])))));
            }
        }
    }

    for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_22 *= ((((97 >= (arr_22 [i_7])))));
        var_23 = min((((-(arr_21 [i_7 + 3])))), (min(10405923393198177111, 45)));
        var_24 = ((-67 * 231) ? (arr_21 [i_7 + 3]) : var_8);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_25 = (arr_24 [i_8 + 2]);
        var_26 = ((var_4 <= (arr_23 [i_8 + 3])));
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_27 = (max(var_27, ((((arr_24 [i_9]) % ((-(arr_24 [i_9]))))))));
        var_28 = ((((((((arr_24 [i_9]) ? var_5 : (arr_3 [i_9] [i_9]))) >= (var_3 >= 6707209193711816842)))) * var_7));
    }
    #pragma endscop
}
