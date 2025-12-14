/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = (200 ? (max((max(var_8, -121)), (arr_2 [i_0] [i_0]))) : ((-((62 ? 95 : var_8)))));
                arr_6 [5] [i_0] [i_1] = (((((min(32767, 139))) != var_6)));
                var_18 = (((arr_3 [i_0] [i_0 + 2]) ? (((var_15 ? (arr_1 [2] [2]) : 13))) : (!var_2)));
                arr_7 [i_0] = ((1678101856 ? (arr_3 [10] [i_0 + 3]) : ((-(arr_4 [i_0] [i_1 + 1])))));
            }
        }
    }
    var_19 = ((((((245 & -55) ? var_1 : ((1068682112 ? var_15 : 18446744073709551615))))) ? (3 & 32767) : ((min((!var_13), var_5)))));
    #pragma endscop
}
