/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_14 >> 0) ? var_14 : var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = ((-(((arr_1 [i_1]) - (arr_1 [i_2])))));
                    var_20 = (min(var_7, ((11 ? 2597593446125159353 : 0))));
                }
            }
        }
    }
    var_21 = ((~(var_13 == -1)));
    var_22 = (((((var_4 ? var_5 : var_5))) + (((((var_13 ? var_14 : 2230564731))) ? var_0 : var_12))));
    var_23 = (((var_9 | var_14) & (((var_7 ? var_17 : 26)))));
    #pragma endscop
}
