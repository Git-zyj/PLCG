/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (2147483626 > 115);
        arr_3 [i_0] = (arr_1 [i_0] [5]);
        arr_4 [20] [i_0] &= (((((397337536 | var_3) | (((1 ^ (arr_2 [i_0])))))) == (((((((arr_0 [i_0]) <= (arr_0 [20])))) << (((var_3 % var_10) - 1973049092)))))));
        var_12 = (((var_8 ^ var_6) - ((96 ^ (54344197930053963 ^ 159)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_13 = (min(var_13, (((var_1 <= ((((arr_7 [i_1]) >> (185 - 185)))))))));
        var_14 = (((1 - var_2) == (((arr_5 [i_1]) << (100 - 92)))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 6;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    {
                        arr_18 [i_4] = ((((arr_16 [i_4] [7] [8]) + 2147483647)) >> (((arr_0 [i_1]) + 26403)));
                        arr_19 [i_1] [i_2] [i_3] [i_4] = (252 != 163);
                        var_15 = (255 ^ 104548071);
                    }
                }
            }
            var_16 *= ((0 ^ 2598428077) - (((arr_8 [i_1]) | var_5)));
            arr_20 [i_1] [i_2] [i_2] = (1652756087 >> 1);
            arr_21 [1] [i_1] = ((0 < (25165824 * var_3)));
        }
        for (int i_5 = 2; i_5 < 7;i_5 += 1)
        {
            arr_24 [i_1] = (var_10 - var_1);
            arr_25 [i_1] = (var_6 && 1);
            arr_26 [i_1] [i_5 + 1] [i_1] = ((((140 >> (((arr_8 [i_5]) - 4111107076)))) << (((arr_9 [i_1] [i_5]) & 1))));
        }
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        arr_29 [i_6] [i_6] = (((((((arr_28 [i_6]) >= (0 != 27187))))) & ((((arr_28 [i_6]) | 33)))));
        arr_30 [i_6 - 1] = (((((((var_6 ^ (arr_0 [i_6 - 1])))))) ^ (((0 & 3878923464) >> ((((arr_27 [i_6]) == var_8)))))));
        arr_31 [i_6] = (((arr_2 [5]) % 536870896));
        var_17 = (max(var_17, (((((((227 <= 32765) == 0))) < (((0 || 1) % (0 - var_2))))))));
    }
    var_18 = (3878923464 >= 96);
    #pragma endscop
}
