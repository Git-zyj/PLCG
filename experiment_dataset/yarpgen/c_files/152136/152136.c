/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max((max(12874480806969381962, var_4)), 12874480806969381962)) * 52725));
    var_15 = (var_5 >= 37107);
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (!-1772084186597365418);
                var_18 = (min(var_18, (((((-9223372036854775807 - 1) - (arr_1 [i_0 - 1])))))));
                var_19 = (min(var_19, (((-((min((!12821), (max(23822, var_9))))))))));
                arr_5 [2] [2] [i_0] = ((-((~((max(41717, (arr_0 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
