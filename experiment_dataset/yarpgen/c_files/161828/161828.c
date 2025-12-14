/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_4, var_6));
    var_20 = (((min(((22 << (var_11 - 43864))), var_2))) || var_10);
    var_21 += var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_22 = ((((((var_8 ? var_6 : 0)))) ? ((var_11 ? 6 : ((min(var_5, var_5))))) : (arr_4 [1])));
                var_23 += (((((1 ? -2147483635 : var_13))) ? ((min((arr_4 [i_0]), (arr_4 [i_0])))) : 17));

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_24 = (min(var_24, ((min(((((min(441046966, 0))) ? ((4280149743776916113 ? (-9223372036854775807 - 1) : -18)) : -1)), ((((((var_0 ? 17 : var_11))) ? ((min(var_0, var_16))) : var_8))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_25 = arr_0 [i_4];
                                var_26 = (max(((var_7 >> (((arr_11 [i_1] [i_1] [i_2 + 2] [i_2] [i_3] [i_4 - 2] [i_2]) - 2006318838)))), (((!(arr_5 [i_2]))))));
                                var_27 = (max(var_27, -8));
                                var_28 = (min((((arr_10 [i_2 - 1] [i_4] [i_4] [i_4 - 1]) ? (arr_10 [i_2 + 3] [i_3] [i_4] [i_4 + 1]) : 2287436161)), ((min(((var_16 ? var_16 : var_9)), var_15)))));
                                var_29 = (min(var_29, (((!((min((max(var_3, (arr_1 [i_1] [i_3]))), -5656451329868322822))))))));
                            }
                        }
                    }
                    var_30 = var_4;
                }
            }
        }
    }
    #pragma endscop
}
