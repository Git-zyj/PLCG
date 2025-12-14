/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((((var_6 << var_6) >= -var_14))) >> (var_8 - 123))))));
    var_16 = (((min(((var_0 ? var_3 : var_7)), (var_1 | var_1))) <= ((((min(var_10, var_10))) ? (max(1, var_7)) : var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min((arr_1 [i_0] [i_1]), ((((arr_3 [i_0] [i_0] [i_1]) <= (arr_3 [i_0] [i_0] [i_0]))))));
                arr_4 [i_0] [i_1] [i_1] = (1 ^ 223);
                arr_5 [i_0] = (((-89 > 0) ? (0 + 1) : (((((arr_2 [i_0] [i_0] [i_0]) == 1)) ? (arr_2 [i_1] [i_1] [i_1]) : ((-(arr_0 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
