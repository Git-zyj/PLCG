/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = ((((((~887857329) * ((var_8 ? var_7 : var_11))))) ? ((var_5 ? var_0 : ((var_4 ? var_8 : -1142113662)))) : ((((-887857335 ? var_1 : var_0))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0];
        arr_3 [12] = (min((((~((((arr_0 [i_0]) == var_10)))))), (arr_0 [i_0])));
        arr_4 [i_0] = (max(194, (!var_0)));
        var_14 *= (min((((~var_0) ? ((var_1 * (arr_0 [i_0]))) : -var_0)), ((((arr_1 [i_0]) - ((min(-59, var_8))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                var_15 = ((((((arr_9 [i_1]) ? (arr_1 [i_1]) : 194))) ? (max(var_8, (arr_10 [i_1] [6]))) : ((((!(arr_0 [i_1])))))));
                var_16 = ((max(61, (255 / var_3))));
                var_17 ^= ((~(~var_7)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_18 = ((((((-14038 ? var_6 : var_8)))) || var_1));
                            arr_15 [i_2] [i_2] [i_2] [i_2] = var_6;

                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_19 = (((((min(32767, var_3))) || (~var_10))));
                                var_20 = (!1);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
