/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(!var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 -= ((!(((-(max((arr_0 [i_0]), var_6)))))));
                    var_12 ^= (arr_2 [i_1] [i_1]);
                    var_13 = (min(var_13, 12));
                    arr_9 [i_0] = ((18446744073709551591 ? 167 : 25));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {

                            for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
                            {
                                var_14 = ((~(arr_1 [i_7 + 1] [i_3 + 1])));
                                var_15 = (((((arr_25 [i_3 + 1] [i_4] [i_5] [i_6] [i_7 - 1]) >> (9037746575355169533 >= 126))) % (((arr_0 [i_4 - 1]) ? (arr_0 [i_4 - 2]) : (arr_0 [i_4 - 3])))));
                                var_16 ^= max((((var_0 ? (arr_1 [i_3] [i_3]) : (arr_13 [i_3] [i_5] [i_6])))), ((((((1343980009109934173 ? var_2 : (arr_8 [i_3] [i_5] [i_6])))) <= (arr_4 [i_5 + 2] [i_4 - 1] [i_7 + 1])))));
                            }
                            for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
                            {
                                arr_28 [i_4] [i_4] [i_5] [i_6] [i_8] = ((((10 << (3576106358054083058 - 3576106358054083033)))));
                                var_17 ^= (arr_4 [i_4] [i_4 - 2] [i_4 - 3]);
                            }
                            /* vectorizable */
                            for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
                            {
                                var_18 = (max(var_18, ((((0 % (arr_24 [0] [i_4 - 1] [0] [i_4] [i_4 - 1])))))));
                                var_19 = (((arr_10 [i_3]) > (arr_21 [i_3 + 1] [i_4 - 1])));
                                arr_32 [i_4] [4] = (arr_19 [i_3 + 1] [i_3 - 1]);
                            }
                            var_20 = (max(var_20, (((((1343980009109934163 ? 109 : 18446744073709551615)) != 245)))));
                        }
                    }
                }
                arr_33 [i_3] [i_4] [i_3] = ((max(var_0, (arr_14 [i_3] [i_3] [i_3]))));
                var_21 = (((((arr_22 [i_3 + 1] [i_4 - 3] [i_4 + 1]) - (arr_22 [i_3 + 1] [i_4 - 1] [i_4 + 1]))) % (arr_22 [i_3 + 1] [i_4 - 3] [i_4 + 1])));
                arr_34 [i_3] [i_4] = ((((((31910 ? (arr_26 [i_4 + 1] [i_4] [0] [i_3] [i_3] [i_3]) : 128)))) - (arr_2 [i_3 + 1] [14])));
                arr_35 [i_4] = (((min(14620594784632923314, 33632)) != 92));
            }
        }
    }
    var_22 += var_6;
    #pragma endscop
}
