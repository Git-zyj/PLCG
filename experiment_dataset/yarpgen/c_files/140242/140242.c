/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    var_17 &= max(-1942449657, (((((var_7 ? var_14 : 65535))) ? var_5 : ((var_12 ? var_14 : var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = -var_0;
                    var_19 = ((((min((arr_0 [i_0] [i_2 - 1]), (min(9450, -104))))) - ((-(arr_5 [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
