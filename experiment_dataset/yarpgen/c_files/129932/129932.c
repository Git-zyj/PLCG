/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((min(var_1, (12361 >> 0))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) & (((arr_0 [i_0]) * (arr_1 [i_0])))));
        var_20 ^= (((arr_0 [9]) >> var_11));
    }

    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = var_2;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    {
                        var_21 = (((((min((arr_3 [i_1]), (arr_12 [1] [i_1])))) % (~var_16))));
                        arr_15 [i_1] [i_1] [i_3] [i_4] = (((((arr_10 [6] [6] [i_3] [i_4 - 3]) & (((((arr_0 [i_2]) || var_10)))))) >> (((min(17393, 48161)) - 17372))));
                        arr_16 [i_1] [i_1] [i_3 - 1] [i_4] [i_1] [i_4] = (i_1 % 2 == zero) ? (((((max((arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]), (min(var_18, var_15))))) ? ((var_0 ? (((arr_1 [i_1]) ? (arr_9 [i_1] [3]) : 1)) : (arr_1 [i_1]))) : ((+(((((arr_6 [i_1] [8] [i_4]) + 2147483647)) >> (var_3 - 3028604353213726160)))))))) : (((((max((arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]), (min(var_18, var_15))))) ? ((var_0 ? (((arr_1 [i_1]) ? (arr_9 [i_1] [3]) : 1)) : (arr_1 [i_1]))) : ((+(((((((arr_6 [i_1] [8] [i_4]) - 2147483647)) + 2147483647)) >> (var_3 - 3028604353213726160))))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 4; i_5 < 14;i_5 += 1)
    {
        var_22 = var_13;
        arr_20 [3] = 1;
    }
    var_23 -= ((((var_9 ? var_0 : var_1)) * (((!((min(var_5, var_7))))))));
    #pragma endscop
}
