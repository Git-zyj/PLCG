/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((!var_14) ? var_16 : ((-25233 ? 9559863204584011168 : 8886880869125540470))));
    var_21 = ((~(((((var_9 ? var_8 : var_12))) ? ((max(var_10, var_0))) : ((var_14 ? var_13 : var_17))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_9;
                arr_7 [i_0] [i_0] = (max(var_11, ((8886880869125540453 ? 84 : 111))));
            }
        }
    }
    #pragma endscop
}
