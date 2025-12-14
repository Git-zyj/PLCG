/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = min((var_4 * -106), (((((-24542 + 2147483647) << (((-840634099 + 840634106) - 7)))) << ((((164 ? 1 : 5)) - 1)))));
                arr_5 [i_1] = ((((min((arr_2 [i_1 - 1] [i_1]), 77))) ? (((min(32, 37)))) : 105));
                var_14 = (((((arr_1 [i_1 - 1]) ? var_3 : 2097151))) ? ((58360 ? 522107260487391875 : 8419379335821682132)) : ((min(((var_2 ? var_3 : 3470635613)), ((min(2097153, var_10)))))));
            }
        }
    }
    var_15 = (max((((-1569127678 + 1689053219) ? (min(var_1, -2097155)) : (min(164, -2097136)))), ((min(60405, var_2)))));
    #pragma endscop
}
