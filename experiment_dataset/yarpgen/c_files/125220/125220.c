/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 *= ((2196875771904 | (~-23)));
                    var_14 -= ((max((arr_6 [i_0] [i_2]), (arr_6 [i_0] [i_0]))));
                    var_15 = (max(var_15, ((((((6407 ? 65535 : (arr_4 [i_0] [i_0] [i_2])))) ? -14434089754791418250 : (((arr_6 [i_1] [i_0]) + (arr_6 [1] [i_2]))))))));
                }
            }
        }
    }
    var_16 += (((((((max(41882, -23))) ? var_2 : 5991))) ? (((max(var_12, 7340032)))) : (max(((max(5985, var_12))), ((var_0 >> (var_11 - 1739614736)))))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 6;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_17 = (min(var_17, ((min((((arr_14 [i_3] [i_3] [i_4 + 4]) + (arr_13 [i_4 - 3] [i_4 + 1] [i_4 + 1]))), ((((arr_14 [i_4] [i_4 - 1] [i_4]) <= ((max((arr_15 [i_5] [i_5] [i_5] [i_5]), 0)))))))))));
                    var_18 = (min(var_18, ((((arr_2 [i_3] [i_5]) ? (((24 ? -2147483644 : -32))) : (arr_9 [8] [i_4]))))));
                }
            }
        }
    }
    #pragma endscop
}
