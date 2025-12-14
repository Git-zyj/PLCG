/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(min(((var_8 ? var_7 : var_2)), 965803191))));
    var_11 |= var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 |= ((((-(arr_1 [8])))) ? -29574 : (12644059479000988112 * var_2));
        var_13 = (max(var_13, (arr_1 [1])));
        var_14 |= (((((arr_1 [10]) + 2147483647)) >> (var_5 - 3551877682)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_15 += ((((arr_10 [i_0]) % (arr_7 [8] [i_1] [i_2]))) <= (arr_2 [i_3] [i_3]));

                        for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
                        {
                            var_16 = ((-(var_7 | 5802684594708563503)));
                            var_17 = (((var_1 ? 12644059479000988100 : var_1)));
                            var_18 = (max(var_18, ((((((10 % (arr_3 [i_3])))) ? (arr_11 [i_1] [i_3] [i_1] [i_1] [i_1]) : 10)))));
                        }
                        for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
                        {
                            var_19 ^= (var_3 % var_5);
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] = 5802684594708563504;
                        }
                    }
                }
            }
        }
    }
    var_20 = ((-var_5 > (-13 == -6)));
    #pragma endscop
}
