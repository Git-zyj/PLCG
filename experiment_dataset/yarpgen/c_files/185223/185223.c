/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_11 * 1);
    var_18 = (((((var_3 ? var_7 : var_12))) ? var_6 : ((((!(((var_16 ? 3276712028 : var_15)))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (max(var_19, ((((((1 ? 263027822 : 473490774))) * (((arr_1 [i_0]) & ((7381184733457400202 >> (55546 - 55483))))))))));
        var_20 |= ((min(var_15, (arr_2 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 += var_13;
                    var_22 = (((!((max(var_5, var_12))))));
                    var_23 = 4046;
                    var_24 = (arr_3 [i_1 + 1] [i_1 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_25 = (((((arr_5 [i_3 + 1] [i_1] [i_2] [i_1 + 1]) ? 0 : (arr_5 [i_3 - 3] [i_1] [i_3 - 3] [i_1 + 1]))) & var_11));
                                var_26 = ((var_4 > ((700781301 ? -1477173554622334113 : 8566))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
