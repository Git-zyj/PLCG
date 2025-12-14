/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += 1530250367;
    var_14 = ((var_6 ? var_11 : ((((-1530250377 ? -1530250378 : var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_2 + 2] = (((((((var_6 >> (var_12 - 78))) << (((max((arr_4 [i_0] [i_0]), (arr_5 [i_0] [i_0]))) - 2001319534))))) ^ (((((255 ? var_9 : 1530250366))) ? (((arr_6 [i_1] [i_1] [i_0]) << (-91 + 101))) : (arr_3 [i_2] [i_0] [i_0])))));
                    var_15 -= ((var_1 ? ((~(((var_5 < (arr_5 [i_0] [i_1])))))) : ((max(237, var_12)))));
                    arr_11 [i_2] [i_1] [i_1] [i_1] = ((~((((min(1, var_12))) ? var_0 : (max(12494880152740120888, (arr_7 [i_0] [i_2 + 1])))))));
                    arr_12 [8] = ((-10622 ^ (((arr_3 [i_1] [i_1] [i_2]) ? (arr_8 [i_2] [i_1] [i_2 + 1] [i_2 - 1]) : (arr_6 [i_0] [i_1] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
