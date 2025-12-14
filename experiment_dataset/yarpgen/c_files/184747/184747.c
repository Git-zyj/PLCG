/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [22] = var_10;
        var_13 = (arr_1 [i_0 + 3]);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = var_4;
        arr_8 [1] [1] = arr_1 [i_1];
    }

    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_14 = ((0 || ((!(arr_5 [i_2])))));
            var_15 = var_12;
            arr_15 [i_3] = ((30430 ? (max(var_9, 0)) : (~var_4)));
        }
        var_16 ^= 34256;

        /* vectorizable */
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            arr_18 [i_2] [i_2] [i_4] = (30433 / var_11);

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_17 &= (((1 * -834915602) ? (var_8 + var_4) : -4478858002427796897));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_18 = (min(var_18, (~2772763488472068215)));
                            var_19 = ((var_6 + (var_0 && var_0)));
                        }
                    }
                }
                arr_25 [i_2] [i_2] = (var_4 >= (arr_5 [i_2 + 3]));
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_20 += -27;
                arr_28 [13] [i_4] [i_4] = (arr_2 [i_2 + 2]);
            }
            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                var_21 ^= ((255 ? (arr_20 [i_2] [i_2] [i_2] [i_9]) : (arr_6 [i_2 - 2])));
                arr_31 [i_2] [i_4] [i_2] [i_2] = (!var_12);
            }
            for (int i_10 = 3; i_10 < 11;i_10 += 1)
            {
                var_22 ^= ((((((arr_1 [i_2]) | 1868142929))) ? (arr_26 [i_10] [i_10 + 4] [i_4 - 1] [i_2 + 3]) : var_4));
                var_23 -= 22;
            }
        }
    }
    var_24 = min((~7120733159908331407), (((~((min(var_8, var_11)))))));
    #pragma endscop
}
