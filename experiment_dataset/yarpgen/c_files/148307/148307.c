/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((1 ? (((arr_2 [i_0] [i_0 + 2]) - (arr_2 [i_2] [i_2]))) : 1));
                    var_14 -= ((var_11 / (arr_4 [i_2])));
                    arr_9 [i_0] [i_0] = var_0;
                }
            }
        }
    }
    var_15 = ((~(min((max(1456927625, 67108832)), var_1))));

    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_16 ^= ((var_5 & (arr_10 [i_3])));
        var_17 = arr_12 [i_3] [i_3];
        var_18 = var_1;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_19 = ((-6142880756955318760 == (arr_13 [i_4])));

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_20 = (-var_5 / 25304);
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_21 = ((arr_19 [i_4] [i_4] [i_4] [i_4]) - (((arr_15 [i_4]) % 11191)));
                            var_22 = ((-25284 >= 21353) >> (((((arr_21 [i_8] [i_7] [i_6] [i_5] [i_4]) & 25297)) - 8181)));
                        }
                    }
                }
            }
        }
        for (int i_9 = 4; i_9 < 14;i_9 += 1)
        {
            var_23 ^= (((arr_19 [i_9 - 4] [i_9 + 1] [i_9] [i_9]) ? var_8 : (arr_19 [i_9 - 4] [i_9 - 1] [i_9] [10])));
            var_24 = (4056820544 ? 25282 : -2147483643);
        }
    }
    #pragma endscop
}
