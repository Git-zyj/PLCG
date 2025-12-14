/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~var_3) / (~-var_9)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_13 = var_8;
            var_14 = (-24893 ? 0 : 500380813053259874);
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_15 = (max((!var_6), (((arr_4 [i_0] [i_2 - 1] [i_2 + 2]) && var_9))));
            var_16 = (max(var_7, ((((arr_6 [15] [i_2 + 2]) * (238 / var_9))))));
        }
        var_17 = (max((((arr_6 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_5 [i_0] [i_0]))), var_1));
        arr_7 [i_0] = (((~0) < (((arr_6 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [1])))));
        var_18 = (arr_0 [i_0]);
        var_19 = ((-(((var_1 - var_7) | (arr_2 [i_0])))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_11 [i_3] |= ((((((min(var_7, 0))) ? (~var_7) : (((arr_1 [i_3]) >> var_1)))) >> (((var_5 << var_1) - 437))));
        arr_12 [i_3] [i_3] = (((((var_7 + 9223372036854775807) << (((arr_2 [i_3]) - 126)))) << (((((min(-398040007144675965, (arr_2 [i_3]))) + 398040007144675992)) - 27))));

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_20 = (max(var_20, var_5));
            arr_16 [i_3] [i_4] [i_3] = (!var_10);
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                {
                    var_21 = (((arr_10 [i_7 - 2] [8]) ? (arr_10 [i_7 - 2] [i_7 - 2]) : (arr_10 [i_7 - 2] [i_7 - 2])));
                    var_22 += ((+(((arr_19 [3] [3]) % var_6))));
                    arr_24 [i_5] [i_6] = ((((76 ? (arr_18 [i_5] [i_5]) : var_3)) < var_10));
                }
            }
        }
        var_23 = (arr_0 [i_5]);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    var_24 = (((arr_13 [i_5] [i_8] [i_9]) - ((((arr_5 [i_5] [i_5]) ? var_11 : var_9)))));

                    for (int i_10 = 3; i_10 < 13;i_10 += 1)
                    {
                        var_25 = (((((1 ? 18 : 18))) ? (arr_30 [i_10 - 3] [i_10 - 3] [i_8] [i_8]) : (arr_13 [i_8] [i_8] [i_10])));
                        var_26 = var_10;
                        var_27 = (((arr_30 [i_10 + 1] [1] [i_10 - 3] [i_10]) >= (-9223372036854775807 - 1)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
