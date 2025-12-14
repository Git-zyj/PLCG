/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = (min((max((!var_3), ((4501703797099892072 ? -4501703797099892072 : var_4)))), ((((!var_4) || ((min(15292651685655366433, var_0))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [4] [i_4] = (max(var_5, (max(var_16, (arr_14 [i_0] [i_0] [i_0] [i_0])))));
                                var_20 -= ((((min((((4501703797099892072 ? 0 : 127))), -4501703797099892098))) ? (((max((arr_11 [i_3] [i_3 + 1] [i_3 - 2] [12]), var_2)))) : -113));
                            }
                        }
                    }
                    var_21 = (max(var_21, (((((((0 <= 4740) ? 302628186 : (max((arr_14 [i_0] [i_0] [i_0] [i_2]), var_18))))) ? ((((min(1, var_19))) ? ((-127 ? var_15 : 254)) : 1383073291)) : var_10)))));
                }
            }
        }
    }
    var_22 = (min(2147483647, ((min((!var_18), (min(var_16, var_14)))))));

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_23 = (arr_5 [i_5]);
        arr_18 [i_5] = (((((-var_17 ? (!1) : (!var_2)))) ? ((max(-41, (((var_1 == (arr_10 [i_5] [i_5] [i_5]))))))) : ((var_13 ? (arr_1 [i_5]) : (arr_1 [i_5])))));
        arr_19 [i_5] = ((-(((arr_9 [i_5] [i_5] [1] [i_5] [i_5] [i_5]) & (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
    }
    #pragma endscop
}
