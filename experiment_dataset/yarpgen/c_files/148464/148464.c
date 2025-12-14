/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_15 = var_3;
        var_16 *= (~var_3);
        var_17 |= var_12;
        var_18 = 1;
    }

    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        arr_5 [i_1] = var_7;

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_19 ^= min((arr_3 [3] [3]), 1098071168);
            arr_8 [i_1] [i_1] = var_14;
        }
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            var_20 -= ((((var_9 & (arr_2 [i_1] [3])))));
            arr_12 [5] [i_3] [i_3 - 2] = var_5;
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_21 -= ((!(254 & 2)));
                var_22 = ((~(arr_14 [i_1] [i_1])));
                arr_17 [2] [i_4] [2] = var_9;
            }
            arr_18 [i_4] = ((var_5 == ((((!(arr_9 [i_4] [i_4])))))));
            arr_19 [i_4] = (var_7 <= var_11);
            var_23 -= 254;
        }
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            arr_22 [i_1 + 1] [i_6 - 2] [i_6] = (arr_6 [i_6] [i_1 + 2]);
            var_24 |= ((~(var_13 % var_5)));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_25 &= 156;
                        var_26 = var_0;
                        var_27 ^= (221 + 1767813357179649679);
                        var_28 ^= var_8;
                    }
                }
            }
            arr_29 [1] [3] [2] = ((-(((arr_1 [i_1 + 3] [i_6 - 1]) & (arr_1 [i_1 + 3] [i_6 - 1])))));
        }
        var_29 = var_9;
        var_30 = ((((((arr_7 [i_1 - 1] [i_1 - 2] [i_1 - 1]) | (arr_7 [8] [i_1 - 2] [i_1 - 1])))) & -1600189545));
    }
    var_31 = (var_2 % (max(var_4, -var_2)));
    #pragma endscop
}
