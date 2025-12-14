/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [24] |= (arr_7 [18] [i_1] [i_2]);
                    var_13 -= ((var_5 ^ (((arr_8 [14]) ^ (arr_7 [i_0 - 1] [i_2] [i_2])))));
                    arr_10 [i_2] [i_1] [3] = (min(1, 255));
                    var_14 = (max(var_14, ((((((6619882383215349338 / (arr_4 [10])))) ? ((268435455 ? (var_2 * var_12) : (arr_1 [i_2]))) : (arr_5 [i_0]))))));
                    var_15 = (arr_3 [19] [i_0 + 3] [i_1 - 1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 7;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_16 ^= min((((65535 == 141) >> (((~63) + 80)))), (max((min(var_2, var_11)), (14 >= -17))));
                    var_17 = (min(var_17, ((((min(0, 0)) || (!var_6))))));
                    arr_20 [2] [i_4] [i_3] &= ((((min((max(var_6, (arr_0 [i_3]))), (arr_13 [i_3 - 1] [i_3])))) ? ((((var_0 >= (((arr_5 [i_4]) >> var_4)))))) : ((1 ? ((max((arr_15 [i_3] [i_3] [i_5]), var_6))) : (max(var_8, var_10))))));
                    var_18 = ((1 ? (arr_7 [23] [i_5] [i_5]) : ((((arr_2 [i_3 - 2] [16]) || (arr_2 [i_3 - 2] [1]))))));
                }
            }
        }
    }
    #pragma endscop
}
