/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_6;
    var_16 |= ((36 ? ((((max(var_1, 12560951752554760837))) ? ((var_13 ? 2 : (-9223372036854775807 - 1))) : ((5 ? -4134 : -3412219537437002390)))) : ((max(((7924464342555756076 ? (-32767 - 1) : 246)), (-7409630166217184840 && var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_17 |= ((!(~10522279731153795541)));
                arr_7 [i_0] [i_0] = ((-(((((115 ? 1 : (arr_4 [i_0] [i_1] [5]))) != 1)))));
                var_18 *= ((var_9 ? (((((var_6 ? (arr_6 [i_0] [i_1]) : 177))) ? (arr_3 [i_1 + 4] [i_1 - 1]) : (arr_3 [i_1 + 3] [i_1 + 1]))) : var_10));
            }
        }
    }
    #pragma endscop
}
