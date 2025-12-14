/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((268435455 ? 96 : 1))));
    var_16 = (max(var_16, var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 ^= (((arr_0 [i_0] [i_0]) != -3413240136592838084));
        var_18 = ((var_11 ? var_2 : (arr_0 [i_0] [i_0])));
        var_19 = ((-3413240136592838084 ? -730570108 : 3413240136592838084));
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : ((~(arr_0 [i_0] [1])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = 1;
        var_21 = ((((min(1, var_1))) ? (arr_6 [i_1]) : -2000085184));
        var_22 += 4294967267;
        var_23 = (arr_3 [i_1]);
        var_24 = (max(((((arr_4 [i_1]) != (arr_3 [i_1])))), (((arr_4 [i_1]) << 1))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_25 = var_0;
        var_26 = (var_14 ? (min((arr_6 [i_2]), var_8)) : (min(7483609498382733192, (((arr_9 [i_2]) >> (var_3 - 32496))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_27 = (arr_5 [14]);
                    arr_16 [i_4] [i_3] [i_2] = (((arr_13 [i_2] [i_2] [i_2] [i_4]) > (min(1, 1574956306))));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_28 = (arr_10 [i_5] [i_6] [i_7]);
                        var_29 = (min(30, 1148530801));
                    }
                }
            }
        }
        var_30 = 77;

        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_31 += (arr_0 [i_5] [i_5]);
            var_32 |= ((((((arr_5 [i_5 - 1]) | -7483609498382733204))) ? (((arr_5 [i_5 + 4]) * (arr_5 [i_5 + 3]))) : (((((arr_5 [i_5 + 1]) > (arr_5 [i_9])))))));
        }
    }
    #pragma endscop
}
