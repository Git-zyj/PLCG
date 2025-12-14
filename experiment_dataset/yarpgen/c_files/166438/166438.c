/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = ((~(~-4831)));
        var_13 = (max(var_13, (((min(0, ((max((arr_0 [4]), 13))))) | -28548))));
        arr_2 [13] = (max(((((((arr_1 [5]) ^ (arr_1 [i_0])))) ? (~var_8) : 4218491836)), ((((((var_7 % (arr_1 [i_0])))) ? (((arr_0 [i_0]) << (6945910069418421671 - 6945910069418421666))) : (arr_1 [i_0]))))));
        var_14 = (((arr_1 [i_0]) / (arr_0 [i_0])));
        var_15 = min((arr_1 [0]), (max(10523383409881590714, 253)));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                var_16 = (arr_0 [i_1]);
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 8;i_5 += 1)
                        {
                            {
                                var_17 = (arr_7 [5]);
                                var_18 = arr_0 [i_4];
                                var_19 ^= ((+(((((253 ? (arr_15 [9] [7] [i_5]) : (arr_13 [3] [i_2] [i_3] [i_4] [i_2])))) ? ((518486673 ? (arr_12 [i_1] [1] [11] [i_4] [4]) : (arr_12 [i_1] [i_1] [i_3] [3] [i_5]))) : (((arr_10 [10]) % (arr_11 [7] [i_2] [i_2] [5])))))));
                                arr_16 [i_1] [i_2] [i_2] [i_3] [i_3] [i_5] [i_5] = (((arr_13 [i_1] [i_2] [i_3] [0] [i_5 + 2]) ? (min(((((arr_0 [i_5]) % (arr_12 [i_1] [i_2] [i_3] [2] [i_5])))), (min(44076, 13498463433971950093)))) : (arr_0 [i_1])));
                            }
                        }
                    }
                }
                var_20 = (max(var_20, ((min((arr_5 [i_1] [i_2]), (((((arr_8 [3] [i_1] [i_2]) ? (arr_10 [i_2]) : (arr_12 [i_1] [i_1] [i_1] [i_2] [i_2]))) + var_7)))))));
                arr_17 [0] [9] [i_2] = ((((((arr_0 [i_1]) ? (arr_10 [i_1]) : (arr_6 [i_1] [i_2] [i_2])))) ? (((arr_6 [i_1] [3] [i_2]) ? 34 : (arr_6 [i_1] [i_1] [i_1]))) : (((arr_6 [9] [i_2] [i_2]) / (arr_6 [i_1] [i_1] [i_2])))));
            }
        }
    }
    var_21 -= (((((min(var_4, 1182352358)))) ? var_9 : -var_8));
    var_22 = (max((~var_4), ((var_6 ? var_0 : 17268))));
    var_23 = (((7923360663827960902 | -1759928334764189973) / (~var_0)));
    #pragma endscop
}
