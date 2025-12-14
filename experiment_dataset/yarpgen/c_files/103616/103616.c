/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(54, 13291));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = 32767;
        arr_5 [i_0] = (--702509586);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] [i_1] = ((1 ? (-2147483647 - 1) : ((-1 % (arr_7 [i_1])))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_12 = 2147483647;
            var_13 *= (((5572690770136788328 || -24896) ? (arr_9 [i_2]) : (!2147483647)));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_21 [i_3] [1] = (((((arr_12 [i_1] [i_3]) != 2147483634)) ? (arr_20 [i_3] [i_3] [i_5]) : var_6));
                        arr_22 [i_1] = ((-2147483647 >= (arr_7 [i_1])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 8;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {
                var_14 = ((!(((~(((arr_15 [13] [12] [i_6]) & (arr_26 [i_6] [i_7]))))))));
                var_15 ^= (max((arr_14 [i_6] [i_7]), var_3));

                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_16 = ((-((13 ? 5572690770136788352 : 192))));
                        var_17 = (min(var_17, var_7));
                        var_18 -= (((((arr_27 [i_6] [6] [i_8] [i_9]) / var_3))) - var_8);
                        var_19 ^= ((var_8 <= (var_3 | 3218990361364661787)));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, var_5));
                        arr_36 [i_6] = (((~968675512) ? (((((12904800838670397726 ? var_7 : 2147483647))) ? var_10 : (!2147483647))) : (((((118 ? (arr_28 [i_7] [i_6]) : var_9)))))));
                        var_21 ^= ((-(max(4092, 6581603140213481885))));
                        arr_37 [i_6] = ((-(max((arr_24 [i_6 - 2]), (arr_24 [i_6 + 2])))));
                    }
                    arr_38 [i_6] [i_7] [i_7] = ((min(-2147483626, 0)) - -16202);
                }
            }
        }
    }
    #pragma endscop
}
