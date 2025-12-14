/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = 4294967281;
    var_19 = (234 - -22);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 += 0;

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_21 = ((((min(99, 4396972769280))) ? -134217727 : (max((~4294967295), var_4))));
                        var_22 = ((-(((min(2000311262, var_16)) / (((max(var_13, 32352))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
