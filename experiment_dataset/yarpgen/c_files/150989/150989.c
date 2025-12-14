/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 53866;
    var_17 = ((((((min(53866, 11671))) ? var_11 : ((var_11 ? 32767 : var_14)))) > var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = 53865;
                arr_4 [i_1] = (arr_2 [i_0]);
            }
        }
    }
    #pragma endscop
}
