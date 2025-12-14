/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = max(((min(15000228457362405839, -460858431))), -69);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (((min((min(var_5, var_13)), 3446515616347145777))) ? (min((arr_10 [i_4] [i_4] [4] [i_4] [i_1] [i_4] [i_4]), 122)) : var_4);
                                var_21 = 122;
                                var_22 |= 4294967295;
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_1] = (~var_13);
            }
        }
    }
    var_23 = (min((min((min(var_15, 34359738367)), 3784441636451046333)), ((((min(18446744039349813249, 18446744039349813249))) ? 8440312684235059627 : 4503599627370495))));
    var_24 = -var_6;
    var_25 = ((max((min(8037451142220123175, 15057646103862140014), ((max(4294967295, var_6)))))));
    var_26 = ((var_10 ? ((var_19 ? (!var_13) : 460858418)) : var_14));
    #pragma endscop
}
