/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 ^= ((!(((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? (arr_1 [i_0]) : (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [3] [i_1] [i_2] [i_2] = (((((((min(var_10, 4))) ? (arr_7 [i_0] [i_2]) : 184602120))) ? ((((arr_1 [i_1]) == (!4)))) : (((!(65535 <= var_0))))));
                    var_13 ^= (~(max((~65535), (((arr_7 [i_0] [i_0]) ^ var_4)))));
                }
            }
        }
        var_14 = (max(var_14, -var_5));
    }
    var_15 = ((var_11 ? 56 : (max(var_4, -41))));
    var_16 = (max(var_16, (((var_2 ? var_9 : ((((max(var_11, 131071))) ? var_11 : ((min(65535, var_10))))))))));
    var_17 = (max(var_17, (((((min(var_11, 38142))) ? (((((var_11 ? var_8 : 10))) ? ((var_8 ? var_3 : var_9)) : -var_9)) : (~0))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            {
                arr_17 [i_3] &= ((((max(252, (arr_12 [i_4 - 1])))) / (arr_13 [i_3] [i_3] [3])));
                arr_18 [i_3] [i_3] = ((((var_2 + (arr_11 [i_4 + 2] [1])))));
            }
        }
    }
    #pragma endscop
}
