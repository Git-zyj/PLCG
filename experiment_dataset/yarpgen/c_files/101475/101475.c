/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101475
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
                var_18 += (min(-1, (min(var_12, var_14))));
                var_19 ^= (!224);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = ((-(max(((min(var_9, 125))), (~var_4)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = (((!5681757551368422200) != (((var_15 > ((var_0 >> (-5681757551368422202 + 5681757551368422228))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] = ((!((max(((var_15 ? 0 : var_0)), var_0)))));
                                var_22 = (max(var_22, (-7402917889133153865 != 255)));
                                var_23 = (~21);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_24 = ((((((21 ? -514486874202542957 : var_5)))) + (((var_12 + var_14) ? (-9223372036854775804 + var_6) : (var_4 + -1)))));
                    var_25 = ((((((!((min(var_14, var_3))))))) != (max((14637715830282855035 - 235), (var_12 <= 222)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_24 [i_7] = ((((((((var_4 ? var_13 : 3809028243426696564))) ? ((min(1, 9355))) : (-514486874202542946 && var_13)))) % var_10));
                                arr_25 [1] [i_6] [1] [i_7] [i_7] = -var_6;
                            }
                        }
                    }
                }
                var_26 = (!9355);
            }
        }
    }
    var_27 = 2066297436;
    #pragma endscop
}
