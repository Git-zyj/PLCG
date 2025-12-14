/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = ((var_13 + (((127 ? (arr_1 [i_0 + 1]) : -127)))));
                    var_20 += (((-127 - 1) || ((max(((var_1 ? (arr_3 [i_0 + 1]) : (arr_5 [14] [13]))), 127)))));
                    arr_7 [i_2] = (((-127 - 1) || -657));
                    arr_8 [i_0] [i_0] [i_1] [14] |= ((~(((arr_6 [i_0 - 1] [i_0 - 1] [i_1]) % 7959))));
                    arr_9 [i_0] [i_2] [i_2] = ((((((arr_3 [i_2 - 1]) / (-127 - 1)))) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 1])));
                }
            }
        }
    }
    var_21 = ((min((var_1 / 65), var_17)) / ((max(((((-127 - 1) ? var_14 : -3805))), var_7))));
    var_22 = ((~(1824378940 & 11615204264305175862)));
    #pragma endscop
}
