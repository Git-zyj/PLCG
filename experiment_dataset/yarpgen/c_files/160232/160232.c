/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(var_8, var_5))) || (((max(var_9, 1063935734))))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [1] [i_0] [5] [i_1] = (var_3 / var_4);

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_12 = (((var_8 > 590333495) != (34643 / 1063935734)));
                            var_13 -= (((var_10 - 225) > var_2));
                            arr_15 [i_1] [i_1] [i_2] [10] [i_1] = (min((!var_6), (-909554916542274268 + 7871713268559097717)));
                        }
                        arr_16 [i_1] [i_1] = (+-3231031561);
                        arr_17 [9] [i_1] [i_0] = (((((1063935716 ^ (min(-7871713268559097718, 18446744073709551615))))) ? ((3231031557 ? var_8 : (!var_10))) : (-127 - 1)));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_2] [0] [i_5] [i_1] = ((var_1 < (var_9 * var_10)));
                        var_14 = (((((~(7871713268559097717 | 15)))) ? ((((!var_4) || (var_8 || var_5)))) : (-6922 + var_4)));
                    }
                    var_15 = var_4;
                }
            }
        }

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_25 [i_0] = (!17592181850112);
            arr_26 [i_0] [i_6] = ((var_9 ? (((-(var_2 / 4234084946)))) : (7871713268559097717 / 11637777968837370077)));
        }
        for (int i_7 = 2; i_7 < 8;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_39 [i_0] [i_7] [i_8] [i_10] [i_10] = (max((((!1606212891) && var_4)), (!-695062332)));
                            var_16 = (min(var_16, 32));
                            var_17 = ((var_0 - (max((((var_0 ? 3231031567 : var_4))), (max(7242287179509879759, 38484))))));
                        }
                    }
                }
                arr_40 [i_0 - 1] [i_7 - 2] = (!var_7);
            }
            arr_41 [i_0 + 1] [i_7 + 1] = var_5;
        }
    }
    var_18 = (--var_5);
    var_19 = ((0 <= ((var_1 * (-10 / 1063935735)))));
    #pragma endscop
}
