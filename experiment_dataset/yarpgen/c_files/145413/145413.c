/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 ^= ((!((max(930187886, 53)))));
                                var_19 = ((-8371753329468946784 ? 15758 : ((576459652791795712 ? 65535 : 43))));
                                var_20 = (max(var_20, (((65535 ? (~0) : ((6845980369346138567 ^ (17801430405417459974 / 1))))))));
                            }
                        }
                    }
                    arr_13 [6] |= (max(((((2851330218203113257 ? 1125865547104256 : 25615)) - ((22584151 ? 524272 : 0)))), -0));
                }
            }
        }
        arr_14 [2] &= (~-67);
    }
    var_21 = ((var_10 ? (~-260994334) : var_9));
    var_22 = var_1;
    #pragma endscop
}
