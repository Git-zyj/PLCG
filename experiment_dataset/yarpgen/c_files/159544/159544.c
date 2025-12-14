/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (((arr_6 [i_0]) | 16777215));
                var_17 = ((!((max((arr_5 [i_1 - 1] [i_1]), ((var_5 * (arr_5 [i_1] [i_0]))))))));
            }
        }
    }
    var_18 = (max(var_18, var_7));
    var_19 -= var_15;
    #pragma endscop
}
