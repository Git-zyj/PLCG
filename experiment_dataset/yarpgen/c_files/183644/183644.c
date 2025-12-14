/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (+-40951);
    var_14 &= (max(var_2, (((!(((107 ? 58 : 1))))))));
    var_15 = (max(var_15, ((((40951 <= 1344937212) + (((var_9 + var_7) ? (max(var_4, 65535)) : ((1 ? var_10 : (-9223372036854775807 - 1))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_16 = (~(((((127 & (arr_1 [i_0])))) & ((~(-9223372036854775807 - 1))))));
                var_17 = (((~(~1))));
            }
        }
    }
    var_18 = (((~(var_8 / var_2))));
    #pragma endscop
}
