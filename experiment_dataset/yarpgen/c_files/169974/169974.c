/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = (max(var_13, (((+(((var_0 ^ var_9) ? var_2 : -1105800544)))))));
    var_14 = (((max((((var_0 + 2147483647) << (var_10 - 137))), var_2))) ? -1597603670 : (max(((var_5 ? 1 : var_9)), ((min(var_3, 1))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_11 [11] [11] [17] &= var_4;
                    var_15 += ((2065474962 ? (((-127 - 1) ? ((min(var_1, var_4))) : (arr_8 [i_0 - 3]))) : (min(((min((arr_9 [i_0] [i_1] [i_2]), var_6))), (arr_7 [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
