/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_20 |= ((!(!548682072064)));
                arr_6 [i_0] |= (((!((min(-548682072065, 548682072051))))) ? ((((((max(19, 75))) || ((min(-9223372036854775797, var_8))))))) : var_15);
            }
        }
    }
    var_21 = var_2;
    #pragma endscop
}
