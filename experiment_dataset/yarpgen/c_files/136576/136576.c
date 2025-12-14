/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((((~((var_6 ? var_2 : 24199))))) ? ((((min(var_10, var_4))) ? var_7 : (max(var_5, var_8)))) : (((((max(var_4, var_4))) ? -9886 : var_10))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (((((-(arr_2 [i_0] [i_1 + 1])))) ? 2147483619 : (max(-41, (((arr_4 [i_0] [i_0] [i_1 + 1]) ^ (arr_4 [i_0] [3] [i_0])))))));
                var_15 = 41345;
            }
        }
    }
    #pragma endscop
}
