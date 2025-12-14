/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(((max((arr_1 [i_0]), (arr_2 [i_0])))), (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = (((arr_1 [i_0]) | (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 = arr_5 [i_1] [i_1];
        arr_8 [i_1] [i_1] = (((arr_6 [i_1] [i_1]) & var_15));
    }
    var_20 = var_7;
    var_21 = var_18;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_22 = (((((max(65535, 65521)))) ? ((~((24576 ^ (arr_16 [i_2] [i_2] [i_2]))))) : (((arr_16 [i_3] [i_3 - 1] [8]) ? ((~(arr_10 [4] [4]))) : (arr_15 [i_2] [i_3] [13] [i_2])))));
                    var_23 = ((((((var_2 & 65534) ? 3 : var_15))) ? 65530 : (min(((65516 ? (arr_10 [i_2] [i_3]) : (arr_10 [i_2] [i_2]))), var_12))));
                    var_24 = (((((arr_13 [i_3 + 1] [i_3 - 1]) ? (arr_13 [i_3 - 1] [i_3 - 1]) : var_5)) + -65535));
                    var_25 = ((var_12 + ((2047 ? (((arr_10 [i_3 - 1] [i_3 - 1]) ? 11 : 65535)) : 28672))));
                    arr_17 [i_3] = (arr_9 [i_4] [i_2]);
                }
            }
        }
    }
    var_26 = ((!(((max(36858, 1))))));
    #pragma endscop
}
