/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 3290172025;
                arr_5 [i_0] [i_0] [i_1] = (min((((~(((arr_0 [i_1]) ? (arr_2 [0] [0]) : (arr_2 [i_0] [i_1])))))), 0));
                var_16 ^= ((-(((arr_1 [i_0]) ? var_7 : (arr_0 [i_0])))));
            }
        }
    }
    var_17 = (min(var_10, (min((min(var_9, var_8)), (((var_11 ? var_10 : var_12)))))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_13 [i_3] |= ((-((((-123 || -6243621446398684004) < ((var_6 ? var_9 : var_3)))))));
                    var_18 = ((((!(arr_8 [i_3 + 3]))) ? ((min(0, 44624))) : (((arr_6 [i_4]) ? (arr_6 [i_2]) : 3959610929619209930))));
                    var_19 ^= 6934299898682750501;
                    var_20 = ((1433573573 ? ((var_8 ? 0 : var_1)) : 2861393723));
                    var_21 = ((2861393722 ? (arr_7 [i_2]) : (min(var_4, (arr_11 [i_3] [i_3] [i_4] [i_3 - 2])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_22 *= (((min(98, (arr_7 [i_6]))) + ((0 ? (arr_7 [i_2]) : (arr_7 [i_2])))));
                    var_23 = (((((((~0) + 9223372036854775807)) >> -4294967295)) | 54027));
                    arr_18 [i_2] [i_2] [2] [2] = ((-((min((var_4 != 0), (0 != var_14))))));
                    var_24 = (min(var_24, (arr_15 [i_5])));
                }
            }
        }
        var_25 = (max(var_25, (arr_16 [i_2] [i_2] [i_2])));
        arr_19 [i_2] [i_2] = (min(5199357622006048207, 193));
    }
    var_26 = (min(0, ((var_7 ? (-9223372036854775807 - 1) : (var_13 && 0)))));
    #pragma endscop
}
