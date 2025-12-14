/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 <= ((((max(var_2, var_10))) ? (min(0, 36)) : (((min(var_3, var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0 - 4] = 7;
                var_13 = ((((min(((((arr_3 [i_0]) >= var_9))), (arr_0 [i_0])))) ? var_6 : (((((((arr_4 [i_0] [i_0]) * (arr_5 [i_0])))) && (((194 ? (arr_4 [i_0 - 1] [i_0]) : var_4))))))));
                var_14 = (max(var_14, (((~(min((var_10 * var_10), var_3)))))));
                var_15 = var_0;
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
