/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(((var_16 <= (max(var_9, var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((max((((arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 3]) ? var_4 : var_15)), (arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 3]))))));
                var_19 += 0;
                var_20 += ((var_16 || ((((var_16 | var_14) ? var_10 : (arr_3 [4]))))));
            }
        }
    }
    var_21 = ((!var_9) >> (((((((var_15 ? var_15 : 26))) + (max(var_9, var_4)))) - 938759786)));
    #pragma endscop
}
