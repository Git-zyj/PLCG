/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_10 [i_2] [i_1] = ((((((min((arr_0 [i_1]), var_3))) ? (((arr_1 [i_0] [i_0]) ? 5051227277824369485 : 2343)) : (arr_9 [i_0] [i_0] [i_0] [12])))) ? var_4 : ((max((arr_9 [i_0] [10] [10] [i_3]), ((((arr_0 [i_0]) || (arr_7 [i_1] [5] [i_2]))))))));
                        var_16 = (!var_3);
                    }
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        var_17 = ((-(arr_9 [i_2 + 4] [i_2 - 1] [i_4 - 1] [i_4 + 1])));
                        var_18 = (max(var_18, 63192));
                        var_19 = var_13;
                        var_20 = (arr_7 [i_0] [i_2 + 3] [i_2]);
                        var_21 = var_3;
                    }
                    var_22 -= ((34 << (((((arr_9 [i_0] [i_1] [i_1] [12]) << ((((min(var_14, (arr_7 [i_0] [i_0] [i_1])))) + 46)))) - 1426063342))));
                    var_23 *= (arr_4 [i_0] [i_1] [i_2 - 2]);
                }
            }
        }
    }
    var_24 = var_15;
    var_25 = ((var_1 ? (!var_4) : (~var_13)));
    #pragma endscop
}
