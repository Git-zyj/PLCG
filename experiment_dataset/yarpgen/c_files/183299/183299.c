/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, 14237));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_3] = (((((max(71, var_17)) ? (arr_0 [3] [i_1 + 1]) : (((arr_0 [i_1] [i_1]) ? (arr_7 [i_0] [i_0]) : 14722968316174111211))))));
                        var_21 = 14722968316174111212;
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_22 = ((!(arr_9 [i_2 - 1] [i_1 + 1] [i_0] [i_0])));
                        var_23 = (max(var_23, (((~(arr_0 [i_2 + 1] [5]))))));
                        var_24 -= (arr_9 [i_1] [i_4] [i_2] [i_2 - 1]);
                        arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] = (arr_12 [i_1] [i_1] [i_1] [i_0]);
                        arr_15 [i_0] [i_0] [i_2] [i_2] = ((arr_13 [i_2 - 1] [i_0]) & ((4539628424389459968 ^ (arr_7 [i_0] [i_0]))));
                    }
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        var_25 = max(1, 1);
                        var_26 = max(var_0, -13291);
                    }
                    var_27 = (arr_0 [i_1 - 1] [i_2 + 1]);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_28 += ((-(arr_19 [i_6])));
        arr_21 [i_6] [i_6] = ((var_0 * (arr_20 [i_6])));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_29 += -13282;
        var_30 -= max(32753, (arr_23 [i_7] [i_7]));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        arr_27 [i_8] [i_8] &= ((((min((arr_26 [i_8]), (arr_25 [i_8])))) ? (arr_22 [i_8]) : (arr_19 [10])));
        var_31 = (((arr_19 [i_8]) + ((-(max((-2147483647 - 1), var_0))))));
    }
    var_32 += var_16;
    #pragma endscop
}
