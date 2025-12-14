/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [16] [i_0] = ((((((((2147483647 ? (arr_7 [i_1] [i_2] [i_2]) : 6))) % (arr_0 [i_0 - 1])))) || ((((var_15 ? 353110803 : var_17))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [22] [i_3] [i_4] = 7565395796530964781;
                                arr_15 [i_0] [i_2] [i_2] [i_1] [i_4] = (-353110819 && -119);
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_2] = (arr_7 [i_0 - 1] [i_1] [i_2]);
                }
            }
        }
    }
    var_20 = (((min(((var_13 ? -97 : var_5)), var_8)) << (((~var_14) + 71))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    arr_25 [i_5] [6] [i_7] = ((-((((119 ? -40 : (arr_0 [i_5]))) ^ ((-14 ? (arr_20 [i_5]) : -353110794))))));
                    arr_26 [i_5] [i_6] [i_7] = ((~(min((arr_10 [7] [i_6] [i_6 - 3] [i_6 + 1]), 2035918977))));
                }
            }
        }
    }
    var_21 = (((-4697292324019117549 ? -423727163851496644 : 38)));
    var_22 |= ((var_16 & ((63 ? var_11 : var_17))));
    #pragma endscop
}
