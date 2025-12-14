/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((~(~32766)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (((var_8 && ((((arr_0 [i_0]) + var_7))))) ? 8257536 : ((max(var_10, var_10))));
        arr_4 [13] = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = var_5;

        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_21 [i_1] [1] [i_1] [6] [i_1] = (~32759);
                            var_13 = (min(var_13, (((-((29924 ? 32756 : 5628780745659471556)))))));
                        }
                    }
                }
                arr_22 [i_3] [i_2] |= 85;
                var_14 = (max(var_14, var_0));
            }
            arr_23 [i_2] [i_2] &= 127;
        }
        arr_24 [i_1] = (((arr_13 [i_1]) && 3652916870123816842));
        var_15 = -8257534;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_28 [i_6] [i_6] = ((1275226028 ? (arr_6 [1]) : var_10));
        arr_29 [5] [i_6] = (var_4 | var_3);
        var_16 &= var_9;
    }
    #pragma endscop
}
