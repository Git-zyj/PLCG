/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = ((var_3 + var_8) ? (((((arr_2 [i_0]) % var_14)))) : ((236 << ((((255 ? var_6 : var_10)) - 16)))));
                var_17 = (((((var_5 ? 19274 : (((arr_0 [i_0]) ? (arr_4 [11]) : 235))))) ? (arr_2 [i_0 + 1]) : (arr_5 [10] [i_0])));
                var_18 = ((((21 ? 7157656165542347208 : (arr_0 [i_0 + 3])))) ? ((var_9 ? var_3 : -20185193)) : (((arr_1 [i_0 - 2] [8]) ? var_4 : (arr_3 [i_0 + 2] [i_0 + 3]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_19 = var_2;
                            var_20 = ((((max((arr_6 [6] [i_2] [i_3]), var_4))) ? ((((!(arr_0 [i_0 - 2]))))) : var_14));
                            var_21 = (((((~(min((arr_1 [i_0 - 2] [i_2]), 3096155829))))) ? (arr_7 [i_0 - 2] [7] [i_2] [i_3]) : ((~(arr_7 [i_0] [i_1] [i_2] [18])))));
                            var_22 = max((min(49520, (~33))), ((max((max((arr_10 [1]), (arr_2 [i_1]))), (arr_3 [i_3] [i_1])))));
                            var_23 = ((((235 * (arr_11 [i_3 - 2] [i_3] [i_3 + 1] [i_3] [i_3 - 1] [17])))) ? (min(-1293574764, (arr_11 [i_1] [i_2] [i_2] [17] [i_3 - 1] [i_3 + 1]))) : (((arr_11 [i_2] [i_3 - 2] [i_3] [i_3] [i_3 - 1] [i_3]) ? (arr_11 [i_2] [i_3] [14] [18] [i_3 - 2] [i_3]) : (arr_11 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_3 + 1]))));
                        }
                    }
                }
                var_24 = var_6;
            }
        }
    }
    var_25 = 12339989532296495990;
    var_26 = var_3;
    #pragma endscop
}
