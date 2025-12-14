/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((-(min(((min(var_10, (-127 - 1)))), var_9)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_17 -= (((arr_6 [i_1 + 1] [i_1 - 2]) >> (((((((arr_4 [i_3]) ? (arr_5 [20]) : -1)))) + 174))));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_18 = (max((((arr_13 [18] [i_1] [i_1] [18] [i_1 - 3] [18] [i_1 + 2]) ? var_12 : (arr_13 [i_1 - 1] [3] [i_1] [i_1] [i_1 + 2] [3] [i_1 - 1]))), (arr_8 [i_0])));
                            arr_14 [i_0] [i_0] [i_0] [i_2] [i_4] = (((((-1 ? (-2147483647 - 1) : 5))) ? (((arr_3 [i_1 - 1] [i_1] [i_1 + 1]) ? (arr_3 [i_1 + 1] [11] [i_1 + 1]) : (arr_3 [i_1 + 2] [i_1] [i_1 - 1]))) : ((((!(arr_3 [i_1 + 2] [i_1] [i_1 + 2])))))));
                            arr_15 [i_1] [i_1] [i_1] [i_0] [i_1] = (((((((max((-2147483647 - 1), 0))) ? (((arr_12 [i_0] [i_0] [i_2]) ? (arr_13 [i_0] [i_1 - 3] [i_2] [i_1 - 3] [17] [i_3] [i_4]) : (arr_6 [i_0] [i_3]))) : (((var_10 % (arr_1 [i_0]))))))) ? ((115 ? -116 : -88)) : (max(((7 ? (arr_1 [i_0]) : var_2)), 7))));
                            var_19 = (max((arr_10 [i_3] [i_0] [i_0] [i_2] [i_0] [i_3]), 9223372036854775807));
                            var_20 -= (max(var_5, ((1193273365 ? (arr_7 [i_4] [i_1 + 2] [i_4]) : (max((arr_4 [i_4]), 9223372036854775807))))));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_21 |= 3588725898;
                            arr_18 [14] [i_3] [i_0] [3] [i_3] = max(98, (max((arr_17 [i_0] [i_0] [i_2] [i_3] [5] [i_3] [i_1 - 1]), var_10)));
                            arr_19 [i_0] [i_0] [i_5] [i_3] [i_3] [i_0] [i_3] &= 97;
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_22 = (-1193273366 ? (((~(((arr_6 [4] [i_6]) ? (arr_4 [i_0]) : var_1))))) : (~9223372036854775807));
                            arr_24 [i_0] [i_1] [i_0] [i_1] [i_6] [i_6] = (-9223372036854775807 - 1);
                            arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] |= (min((((arr_13 [i_1] [i_1 + 2] [i_1] [i_1 - 3] [i_1 - 3] [i_1] [i_1]) ? var_5 : (arr_13 [i_1] [i_1 + 2] [i_1] [i_1 - 3] [i_1] [4] [i_1 - 3]))), (arr_13 [i_1 - 3] [i_1 + 2] [i_1 + 2] [i_1 - 3] [10] [i_1 - 3] [i_1])));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_23 = (((arr_13 [i_1 - 1] [i_1 - 3] [i_1 + 2] [i_0] [2] [i_1 - 1] [i_0]) - (arr_13 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_0])));
                            var_24 ^= ((~((65 ? 119 : (-127 - 1)))));
                        }
                    }
                    var_25 = (min(var_25, (arr_16 [i_2] [i_2] [i_1 + 1] [18] [i_0])));
                }
            }
        }
    }
    var_26 -= var_12;
    #pragma endscop
}
