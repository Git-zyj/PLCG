/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((3053331595270406856 ? var_6 : (min((max(18, 3911729938)), ((min(var_12, var_11))))))))));
    var_16 &= max(var_9, (((15833200541287785304 < ((min(var_5, 0)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (min(((min((arr_2 [i_0 - 3] [i_1]), 9223372036854775795))), (((-23 % -1) ? (arr_5 [1]) : ((min(3896009554, 0)))))));
                    arr_6 [i_0] [i_1] [i_0] = (((~686491537) > (min((arr_5 [i_2]), (~-1)))));
                }
            }
        }
    }
    var_18 = (~var_7);
    #pragma endscop
}
