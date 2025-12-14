/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (((((!(arr_1 [i_1 + 2])))) / ((10 ? var_4 : (arr_7 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 + 1])))));
                    var_18 = (((max((arr_4 [i_1 + 3] [i_1 - 2] [i_1 + 3]), var_10)) | (arr_4 [i_1 - 2] [i_1 + 1] [i_1 - 1])));
                }
            }
        }
    }
    var_19 ^= (((((max(var_10, var_2)))) ^ ((var_5 ? (min(134217664, var_1)) : var_10))));
    var_20 = ((57531 ? (~var_14) : ((824690633 + (var_5 / 14949170981770697757)))));
    #pragma endscop
}
