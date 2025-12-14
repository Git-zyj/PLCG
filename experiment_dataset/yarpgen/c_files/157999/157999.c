/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 &= ((max(-6592552008730664582, ((var_3 ? (arr_3 [i_0 + 1]) : 2698123237)))));
                arr_6 [i_0 + 1] [i_0 + 1] [i_1] = (-32767 - 1);
                var_14 ^= ((~(arr_2 [i_0 + 2] [i_0 + 2])));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_15 = 1596844055;
                    var_16 = (min((((!((min(345463737155863434, 1596844057)))))), -31));
                    arr_10 [i_2] [i_2] = (((15 & ((2812939110 ? var_12 : var_1)))));
                    arr_11 [i_1] [i_2] [i_2] = (min(0, 2698123237));
                    var_17 &= 72;
                }
            }
        }
    }
    var_18 = (max(((((min(1094180700, var_9)) & var_3))), ((-var_4 / ((45146 ? -5260591678382954166 : var_5))))));
    #pragma endscop
}
