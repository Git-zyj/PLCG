/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_19 = (max(var_14, (!14309907185648883642)));
                        var_20 = (~2361947699);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                {
                    arr_19 [i_5] = (((((-(min(var_18, 1882475550))))) ? ((((var_15 || var_3) << (((((arr_3 [i_0]) - var_5)) - 3914539778))))) : ((min(2361947699, var_3)))));
                    arr_20 [i_5] [i_4] = 136128220;
                }
            }
        }
        var_21 = var_14;
    }
    for (int i_6 = 3; i_6 < 9;i_6 += 1)
    {
        var_22 = ((((((max((arr_2 [i_6] [i_6 + 2]), 14309907185648883642)) << (((var_7 & var_17) - 84447400))))) ? var_18 : ((var_4 ? var_6 : (arr_7 [i_6 + 1] [0] [i_6 + 3])))));
        arr_24 [i_6 - 1] = (((((2147483647 ? (arr_8 [i_6 - 1] [i_6 + 2]) : var_0))) ? (min(var_9, 2919312457)) : (min((arr_16 [i_6 - 3] [i_6 - 2] [i_6 + 3] [i_6 - 2]), var_9))));
    }
    var_23 |= (((var_0 + var_5) ? ((var_6 ? var_12 : var_11)) : (((-14309907185648883642 ? var_18 : var_5)))));
    #pragma endscop
}
