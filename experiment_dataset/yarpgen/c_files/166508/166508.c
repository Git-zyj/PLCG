/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_12 -= (arr_2 [i_0 - 2]);
        var_13 += (((arr_1 [i_0] [i_0 + 1]) > (arr_1 [i_0 + 1] [i_0 - 1])));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_14 = arr_0 [i_1 - 2];

        /* vectorizable */
        for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 4; i_3 < 11;i_3 += 1)
            {
                var_15 = (min(var_15, ((((arr_1 [i_2 + 2] [i_1 - 2]) >= 8710746257806332339)))));
                var_16 += (((arr_2 [i_1 - 1]) | (arr_3 [i_1 + 1])));
                var_17 ^= ((((var_10 ^ (arr_2 [i_1]))) ^ (arr_1 [i_1] [i_1])));
                arr_12 [i_3] [i_2] [i_1] = (arr_3 [i_1 - 1]);
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_20 [i_1] [i_2] [i_6] = (1 >> 1);
                            var_18 = (min(var_18, ((((22655 * var_4) ? (arr_19 [i_1] [i_4] [i_4] [i_2 + 3] [i_1]) : ((((arr_2 [i_1 - 2]) >> (arr_0 [i_1])))))))));
                            arr_21 [i_1] [i_6] [i_4] [i_5] [8] = (arr_11 [i_1] [i_2] [i_4] [i_5]);
                            var_19 = (((arr_1 [i_6] [i_6 + 1]) / (arr_1 [1] [i_6 - 1])));
                        }
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
        {
            arr_24 [i_7] [i_7] = arr_10 [i_7 + 3] [i_7] [i_1] [i_1];
            arr_25 [i_1] [i_1] |= 1;
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_20 += 4294967295;
            arr_28 [i_1] = (arr_7 [i_8]);
        }
    }
    var_21 = (((max(var_2, (max(var_1, 2414232871541265934)))) / var_1));
    var_22 = ((var_2 ? var_5 : (9910404936580414177 | 0)));
    var_23 = (((((var_0 < (var_7 >= var_7)))) >> (255 - 234)));
    var_24 = var_9;
    #pragma endscop
}
