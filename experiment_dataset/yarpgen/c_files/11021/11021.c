/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (((1073733632 > var_8) && ((max(var_6, (!3221233638))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = -70;
                    var_15 = (min(var_11, ((((1 * 1073733632) >= ((((var_9 > (arr_2 [i_0] [i_1]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
