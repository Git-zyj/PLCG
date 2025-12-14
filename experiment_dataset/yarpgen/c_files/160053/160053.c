/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_8 || var_5) != (var_7 != var_12))) && var_14));
    var_17 = var_12;
    var_18 = var_5;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_0] [i_0 + 1] = (((arr_3 [i_0 + 2] [i_1] [i_1]) ^ (arr_3 [i_0 + 1] [1] [4])));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_0] [12] = (((arr_0 [i_0 - 2]) * (((((arr_3 [i_0] [i_1] [i_2]) == (arr_7 [10] [i_1] [i_2])))))));
                var_19 = (arr_3 [i_0] [i_0] [i_2]);
                arr_10 [i_0] [i_0] |= ((arr_1 [i_0 - 2]) && (arr_1 [i_0 - 1]));
            }
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_13 [i_0] [i_3] = (((((arr_12 [i_0] [i_0] [i_3]) >> (arr_1 [i_0]))) / (arr_2 [i_0] [i_0] [i_3])));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_20 |= ((((((arr_5 [i_0] [i_3]) % (arr_2 [i_0] [i_3] [10])))) == (((arr_6 [i_3] [i_3] [i_0]) + (arr_5 [i_0 + 2] [i_3])))));
                var_21 = (((arr_5 [i_0 - 1] [i_0]) == (((arr_14 [i_0] [i_3] [i_4] [i_4]) + (arr_1 [i_3])))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_22 ^= (((arr_11 [i_0] [i_0] [i_0]) == (arr_12 [i_0] [i_3] [i_4])));
                            arr_22 [i_4] [i_6] = (((arr_11 [i_0] [i_0] [i_0 - 1]) | (arr_14 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                            arr_23 [1] [i_5] [1] [1] [i_0] = (((arr_15 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0 - 2]) & (arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                            arr_24 [i_0] [i_3] [i_4] [i_5] [i_6] [i_0 + 2] = (((((((arr_16 [i_0]) + (arr_17 [i_6] [i_5] [i_0 + 2]))) + 9223372036854775807)) >> (((((arr_8 [i_0]) ^ (arr_7 [i_0 - 2] [i_3] [i_4]))) + 8216304350677660839))));
                        }
                    }
                }
                var_23 = (((arr_12 [1] [i_3] [i_3]) > (arr_5 [i_0 - 1] [i_0 - 1])));
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                arr_28 [i_0 + 1] [i_0] [i_0 + 2] [i_0] = (arr_6 [i_0] [i_0] [i_0]);
                var_24 = ((arr_25 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 1]) / (arr_25 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 2]));
            }
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_25 ^= (((arr_16 [i_0 + 2]) - (arr_16 [i_0 - 1])));
            arr_31 [i_0] |= (((((arr_21 [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 2]) ^ (arr_3 [1] [1] [i_8]))) ^ (((arr_1 [i_8]) & (arr_20 [i_0 + 1] [15] [i_0 + 1] [i_0] [i_0])))));
        }
        var_26 = (((arr_18 [12]) + (((((arr_11 [i_0] [i_0] [i_0]) && (arr_17 [i_0] [i_0] [i_0])))))));
        var_27 = (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 1]);
        arr_32 [7] = (((arr_3 [i_0 - 2] [11] [i_0 + 1]) >= (arr_6 [i_0] [i_0 - 2] [i_0])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        arr_35 [i_9] = (((arr_33 [i_9]) * (arr_33 [i_9])));
        var_28 = (((arr_34 [i_9] [i_9]) && ((((arr_34 [i_9] [i_9]) + (arr_33 [i_9]))))));
    }
    var_29 = ((((((var_5 + var_13) >= (var_11 + var_14)))) >= ((((var_14 == var_15) > var_9)))));
    #pragma endscop
}
