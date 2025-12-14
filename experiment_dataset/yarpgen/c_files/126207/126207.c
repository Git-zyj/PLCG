/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 *= (max(((~(arr_2 [i_2] [i_1] [i_0]))), 536869888));
                    var_19 ^= (+-0);
                }
            }
        }
    }
    var_20 ^= (((var_6 > var_8) ? var_14 : (max((var_6 + 571842649), (var_14 + var_16)))));
    var_21 = (min(var_21, (max(571842648, 1689717864414995864))));
    #pragma endscop
}
