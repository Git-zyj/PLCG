/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = ((!((min(((7 >> (65535 - 65496))), var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    var_21 -= ((61819 ? (arr_2 [i_1 - 1]) : (arr_1 [i_1 + 1])));
                    var_22 = ((502826756621139527 ? -629429794 : 1032192));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_23 = 3989541425;
                                var_24 = -var_9;
                                var_25 = ((2838087201368850389 ? (arr_10 [i_1 + 3] [i_1 - 1] [i_1 - 1]) : ((6884305394043057751 ? -15104 : 24303))));
                            }
                        }
                    }
                }
                var_26 = ((((min((max((arr_0 [i_0]), (arr_10 [i_0] [7] [i_1]))), var_17))) ? (((!((max(224, -2623)))))) : ((max(16, 3870)))));
            }
        }
    }
    #pragma endscop
}
