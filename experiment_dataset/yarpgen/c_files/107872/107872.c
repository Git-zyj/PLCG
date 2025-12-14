/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (2742353152 < var_6);
    var_15 = (max(var_15, var_9));
    var_16 = (~var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (((-583730575608004699 <= var_8) <= (!36)));
                    var_18 ^= (max((((var_6 & 36) & (1 >= var_5))), 3799417815));
                }
            }
        }
    }
    var_19 &= (max(var_12, var_13));
    #pragma endscop
}
