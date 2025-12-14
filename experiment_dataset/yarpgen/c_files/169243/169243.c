/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_10 -= var_7;
                                var_11 = (max(var_11, (((var_3 > (var_8 <= var_3))))));
                                var_12 = (min(var_12, ((((((var_3 > ((var_8 >> (var_4 - 2192996758142250902)))))) * (var_9 < var_4))))));
                                var_13 = (max(var_13, (var_8 || var_3)));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        var_14 *= var_9;
                        var_15 = (min(var_15, ((((var_5 && var_6) <= (-106 < 171))))));
                    }

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_21 [i_0] [i_1] &= var_5;
                        var_16 &= var_0;
                        var_17 &= var_5;
                    }
                }
            }
        }
    }
    var_18 *= ((var_7 >> ((((44731 << (44731 - 44724))) - 5725538))));
    #pragma endscop
}
