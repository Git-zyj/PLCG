/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_12 + ((24397 ? var_15 : (~94)))));
    var_17 = var_4;
    var_18 = var_9;
    var_19 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 |= ((!(arr_4 [i_0] [20] [i_0])));
                    var_21 = (max(var_21, (((((((min(5158282140292006316, var_3)) + var_6))) ? ((((var_14 + var_3) + (((min((arr_7 [i_0] [5]), 41139))))))) : ((250 ? 13288461933417545299 : ((max(1, -1363568189944263227))))))))));
                    var_22 *= (-(((arr_6 [12] [i_1] [i_0]) ? (!16380) : var_7)));
                }
            }
        }
    }
    #pragma endscop
}
