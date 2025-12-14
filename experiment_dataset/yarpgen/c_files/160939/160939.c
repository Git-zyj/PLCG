/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = var_13;
    var_18 = 1348185361;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = 1;
                    var_20 = (arr_6 [i_2 + 1] [i_2 - 1] [i_0]);
                    var_21 += (arr_8 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
