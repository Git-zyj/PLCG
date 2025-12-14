/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_17 = max(((((((32745 ? -8502032299293013230 : -711044470181114454))) ? ((3483773688 ? 108 : -2147483637)) : (!-6)))), (max(0, 162)));
                    var_18 = (((max(2147483648, (arr_6 [i_2] [i_2] [i_2] [i_2 + 4]))) * (max(var_16, var_12))));
                }
            }
        }
    }
    var_19 = (max(var_19, ((max(((-(max(0, 1810179962)))), ((((((var_5 ? var_10 : 150))) ? (!var_5) : -1))))))));
    #pragma endscop
}
