/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -127;
    var_14 = (min((max(var_6, var_0)), (max(var_6, var_8))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 + 1] = ((((max((arr_4 [i_0 + 1] [i_1 + 1] [i_1 - 2] [i_2 + 1]), (arr_4 [i_0 + 1] [i_1 + 1] [i_1 - 2] [i_2 + 1])))) & 82));
                    var_15 = (min(var_15, ((min((max(118, -102)), (min(0, 104)))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_12 [i_3] = var_9;
        arr_13 [i_3] [i_3] = 2509702529061689801;
        arr_14 [11] = (max(var_1, var_11));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_24 [i_3] [i_3] [i_4] [i_3] = (((((((127 >> (18446744073709551596 - 18446744073709551596)))) ? 8 : (max((arr_9 [i_5]), 1)))) == (((1 > (min(0, 4294967288)))))));
                        arr_25 [i_3] [4] [i_5] [13] [21] [i_3] = (min(var_10, 1));
                        arr_26 [i_6] [i_6] [i_3] [i_4] [i_3] [i_3] = (max((((min(var_0, -3185998062543972112)))), (min((arr_18 [i_5] [i_4] [i_3]), 147))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_16 = (min(var_16, (~5)));
        var_17 = ((var_6 * (min((arr_11 [i_7] [i_7]), 0))));
        arr_31 [i_7] = var_11;
        arr_32 [1] = (min(186451439, 0));
    }
    var_18 |= ((((((min(-105, -3890336072492554479))) ? (min(4, var_6)) : 95835264)) % (((~((max(var_11, 75))))))));
    #pragma endscop
}
