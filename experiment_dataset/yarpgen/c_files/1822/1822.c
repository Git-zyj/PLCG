/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [16] [i_0] [10] = min((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0]));
                arr_6 [11] [i_0] = (51024 / 3709970403647411823);
                var_16 = ((-(arr_1 [i_1 + 1] [i_1 - 1])));
            }
        }
    }
    var_17 = (max((max(((max(var_7, var_2))), var_15)), var_1));
    var_18 |= ((((~((min(var_4, 51038))))) & var_4));
    #pragma endscop
}
