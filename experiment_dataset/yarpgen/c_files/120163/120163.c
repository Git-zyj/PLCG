/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 2176179299;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = 1;

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_14 |= 16376;
                    var_15 = (min(var_15, var_1));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_16 *= 190;
                    var_17 *= (((((223 ? 125 : 507028731))) ? ((-(-127 - 1))) : ((max((-127 - 1), -46)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_18 = (((((-32767 - 1) * 141)) - (((min(127, -85))))));
                                arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_4] [i_1] = (min(127, 2147483647));
                                var_19 = -40;
                            }
                        }
                    }
                    var_20 = 1;
                }
            }
        }
    }
    var_21 ^= (0 >= 215009312);
    #pragma endscop
}
