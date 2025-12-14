/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (var_4 / var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (max(var_13, 167));
                    var_18 = ((((-((88 ? var_7 : 29)))) * ((((var_6 * var_13) ? ((var_1 / (arr_4 [i_0] [i_0]))) : (arr_2 [3]))))));
                }
            }
        }
    }
    #pragma endscop
}
