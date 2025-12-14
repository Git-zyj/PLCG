/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((1915764647 | ((var_9 | (18446744073709551615 ^ 18446744073709551615)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_10;
        var_12 = ((1928126898 << ((((2366840397 | 1) > 0)))));
        var_13 += 9640;
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        var_14 *= ((!var_3) < ((-(arr_3 [10] [0]))));
        var_15 = 1;
        var_16 |= ((((((arr_0 [i_1 + 4]) << (((((arr_0 [i_1]) << (arr_4 [i_1 + 1]))) - 39289))))) ? var_6 : (((((var_3 | (arr_3 [6] [6])))) ? var_10 : 1))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_17 = ((0 & (max((((var_4 ^ (arr_0 [i_1 + 3])))), (max((arr_6 [i_3]), (arr_3 [i_1] [i_1])))))));
                    var_18 ^= ((((max((arr_3 [i_2] [i_2]), var_7))) && 32768));
                    var_19 += (1928126899 < 0);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_20 = ((((((arr_14 [i_4] [i_4]) | (arr_14 [i_4] [i_4])))) ? ((~(arr_14 [i_4] [i_4]))) : (((arr_14 [i_4] [i_4]) & var_8))));
        var_21 = ((55896 ? ((1928126899 ? 100 : 2005265403247130197)) : ((((var_1 | 14483) ^ var_6)))));
        var_22 = (((((((0 | (arr_14 [i_4] [i_4])))) | ((var_2 | (arr_14 [i_4] [i_4]))))) << (((max(3968, 18446744073709551615)) - 18446744073709551615))));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_23 = (((((((max(1, 3083665571))) ? (max((arr_21 [i_7] [i_6] [i_6]), 122)) : 313862764691474140))) ? 0 : ((((arr_20 [i_6 - 2]) > (arr_20 [i_6 + 1]))))));
                        var_24 *= (arr_20 [22]);
                        var_25 = (max(var_25, ((((arr_22 [i_5] [i_6] [i_6]) ? ((((((1 ? 1 : 939524096))) ^ 3083665571))) : (max((((-15222 ? var_0 : var_6))), ((var_0 ? (arr_24 [i_7] [i_6] [i_7]) : (arr_25 [i_6] [i_7] [i_6] [i_6]))))))))));
                    }
                }
            }
        }
        var_26 = ((((var_8 | (arr_15 [i_5]))) >> (-1667566449 + 1667566463)));
    }
    #pragma endscop
}
