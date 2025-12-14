/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((-((224 >> (127 - 125))))))));
                var_17 *= ((3597847794033890205 ? (min(4294967293, 521950562)) : (((521950562 ? -1844618649 : var_4)))));
            }
        }
    }
    var_18 = ((((var_9 ? var_2 : (var_7 + 225))) > -1844618623));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_19 = (887418413060609852 + 218);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_20 = (~1181704090);
                                var_21 += ((-521950538 ? 1 : 1844618631));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
