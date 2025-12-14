/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= 255;
    var_15 -= ((var_7 / ((max(28640, var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [2] |= ((!((!(0 != var_2)))));
                    var_16 = ((0 ? ((3157956303 ? 4179668883 : ((0 ? 4294967275 : (-9223372036854775807 - 1))))) : ((((!var_4) ^ 4058208879)))));
                    arr_10 [i_2] [i_0] [i_2] [i_0] = ((!((((((arr_6 [9] [i_1] [i_1]) ? (arr_6 [i_0] [i_1] [i_2]) : (arr_1 [i_0] [i_2]))) % (arr_5 [i_0]))))));
                }
            }
        }
    }
    var_17 = (min(((((max(var_11, var_4))) ? var_13 : var_1)), 661508996));
    #pragma endscop
}
