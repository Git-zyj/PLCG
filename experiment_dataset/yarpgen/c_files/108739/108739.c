/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_1, (var_3 + var_11)));
    var_21 = (min(var_21, ((max((((98 && (24153 | 98)))), (~-548382314861557408))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = max(548382314861557407, (((7288891010226755213 ? (~var_16) : ((var_7 ? (arr_4 [i_0]) : var_3))))));
                var_23 -= (((((arr_0 [i_1] [i_0]) && (((18446744073709551611 ? (arr_3 [9] [8]) : (arr_4 [15])))))) ? ((169 ? 12419438790007775948 : var_15)) : ((((!(((10872494728155710820 ? 10 : 719820100132522007)))))))));
            }
        }
    }
    #pragma endscop
}
