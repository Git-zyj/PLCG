/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = var_0;
    var_16 |= var_6;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_17 = ((((((((-1855298852 ? 62 : 32181))) ? -1855298852 : ((9759963337806874502 ? 211 : 195))))) ? (max(1750361918, 1750361910)) : (((209 ? 47430 : -1056964608)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] = ((217 ? (((28022 ? (~26465) : (668415767 | -3995)))) : ((((602360851 ? 6 : 18120)) ^ ((-30985 ? 7552295272786469909 : 2881151792132537052))))));
                    var_18 = (min((65535 / 1), (67 > 10894)));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_19 = ((-21 ? (min(1, ((-1116091780 ? 18106 : 1)))) : (((14334 ^ 1) | 188))));
                    var_20 -= (!1);
                }
            }
        }
        arr_15 [i_3] &= ((((((1665002051 | -4036767122741034806) ? 1 : (-6 ^ 20)))) * ((((17495 ? 54633 : 3608548534283774099)) << ((17907 ? 1 : 4152475713))))));
    }
    #pragma endscop
}
