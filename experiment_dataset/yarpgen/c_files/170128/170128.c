/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_17 += (~(~37823));
                arr_6 [5] = 37814;
                arr_7 [i_0] [i_1] = (min((((arr_2 [i_1 - 3] [i_1 - 3]) ? var_16 : 27709)), (((var_12 && var_7) ? (-1066699723 > var_1) : var_16))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_18 = (max(var_18, (((-(((arr_8 [i_3]) & (arr_14 [21] [1] [i_4] [i_3 + 1]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 *= (~4462);
                                var_20 = (max(var_20, (var_6 ^ 17715157083529236808)));
                                var_21 = ((70585998512946155 == 37826) < (max(var_4, 1379377960)));
                                var_22 = (1379377949 >> var_7);
                            }
                        }
                    }
                    var_23 += (((((var_15 + (max(var_15, var_2))))) ? (min((~var_7), 1379377972)) : (min(212, 1379377992))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_24 = (min(var_24, var_14));
                                var_25 = (((max(var_8, 152)) / (arr_21 [i_2] [i_3] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
