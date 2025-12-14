/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 += ((((~3299505895) ? -13 : var_1)));
                    arr_8 [i_0 + 2] [i_1] [i_0 - 1] [i_0] = ((((max(2129517487, var_3))) ? 124 : ((max(var_6, var_8)))));
                }
            }
        }
    }
    var_12 += (max(var_7, var_8));
    var_13 = var_1;
    #pragma endscop
}
