/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_2));
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_14 *= ((~((var_2 ? var_6 : 1))));
                    arr_9 [i_0] [i_1] [i_2] = ((((max((min(var_4, var_7)), var_5))) ? ((((var_6 ? var_9 : var_5)) * (!1758243818))) : (37216 * 16253)));
                    var_15 = (((~1) | ((~(1 & 1)))));
                }
            }
        }
    }
    var_16 = var_9;
    var_17 *= ((((max((var_2 >> 1), (max(var_9, var_8))))) ? (min(1091369593, 208)) : var_5));
    #pragma endscop
}
