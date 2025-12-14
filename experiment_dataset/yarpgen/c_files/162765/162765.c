/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((var_9 ? ((max(var_6, var_2))) : ((var_13 ? var_2 : var_1))))));
    var_17 = (min(((((min(-17332, var_3)) >> (var_8 - 42259)))), (min(((var_6 ? 1660980207569170781 : var_8)), ((var_12 >> (var_14 - 791239304)))))));
    var_18 = var_4;
    var_19 = min(var_10, (max((-9223372036854775807 - 1), ((min(var_13, var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [17] [i_1 + 1] = 3968717645825278717;
                    var_20 = (arr_2 [i_0]);
                    var_21 = ((+((18446744073709551615 ? (arr_3 [i_0 + 1] [i_1 - 1] [10]) : -1088321171))));
                }
            }
        }
    }
    #pragma endscop
}
