/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(((var_4 <= 3685585379519774436) ? var_14 : -1567644846))));
    var_19 = var_7;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = min((((!(arr_9 [i_0] [i_0])))), (arr_5 [i_0] [i_1]));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_21 = (max(1567644846, 1567644846));
                        var_22 = (((~-15003241105031789909) & 1567644837));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_23 = var_16;
                                var_24 = (min(var_24, (arr_2 [i_4 + 1] [i_4 - 1])));
                                var_25 = -1567644841;
                            }
                        }
                    }
                    arr_19 [i_1] [i_0] = (max(1567644831, (((arr_4 [i_1] [i_0]) && var_11))));
                    arr_20 [i_0] = ((!(15003241105031789915 >= -1567644846)));
                }
            }
        }
        arr_21 [10] |= var_9;
        arr_22 [i_0] [i_0] = ((min((max(var_12, (arr_3 [i_0] [i_0]))), -var_8)));
        arr_23 [i_0] = ((((((!(arr_5 [i_0] [i_0])))) * ((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) == var_7))))));
    }
    var_26 = ((var_6 < (var_16 >= var_1)));
    #pragma endscop
}
