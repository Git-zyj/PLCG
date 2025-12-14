/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_5));
    var_13 *= ((255 ? -32752 : 0));
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = (var_0 ? 1 : (((var_5 ? var_0 : var_3))));
                    var_15 = (min(var_2, 1));
                    arr_7 [i_0] [i_1] [i_2] [21] = (arr_5 [i_0] [i_2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
