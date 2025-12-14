/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((max((max(1048576, 1)), var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = 5578517443398738877;
                var_22 = -4652210293395740332;
                var_23 = ((((5578517443398738884 == (((var_2 ? var_16 : var_2))))) && 2334708197));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_24 = (((((!var_8) ? var_10 : 5578517443398738880)) ^ (((((max(0, var_6))) ? var_2 : (!var_17))))));
                            var_25 = ((-(((((-(arr_9 [i_0] [i_0] [i_0])))) ? (min(-5578517443398738903, (arr_4 [i_2]))) : -1618978233))));
                            var_26 += (((~-60489261) ? (((-6226216197430559338 >= 1) ? ((min((arr_0 [i_0] [i_0]), (arr_4 [i_0])))) : (arr_2 [i_3]))) : (arr_1 [i_0])));
                        }
                    }
                }
                var_27 = var_9;
            }
        }
    }
    var_28 = ((!(((((var_2 ? var_16 : 4294967295)) << (((~var_5) - 394686657)))))));
    #pragma endscop
}
