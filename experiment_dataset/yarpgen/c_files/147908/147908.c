/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_11 |= ((((max(12013646763592399698, 127))) ? ((((min((arr_4 [i_1] [i_0]), var_0))) ? ((1 ? 104 : (arr_6 [i_0] [4] [i_0]))) : (arr_4 [i_2 - 2] [i_0 - 3]))) : (1 || 18446744073709551597)));
                    arr_8 [i_0] [i_1] [6] |= (min((min(((18446744073709551597 ? 7 : (arr_4 [i_0] [i_1]))), (((17293822569102704640 ? var_3 : var_7))))), (min((arr_3 [4] [i_2 + 1] [4]), (arr_5 [i_2] [i_2 - 1] [i_1])))));
                }
            }
        }
    }
    var_12 ^= var_10;
    #pragma endscop
}
