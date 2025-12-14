/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((var_12 ? 60964 : 43030)) >> ((((76336340 ? -76336340 : -76336340)) + 76336361)))))));
    var_16 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = (max((min(var_8, ((var_6 ? 76336340 : var_11)))), (~76336339)));
                    var_18 = (((min(4080, -231096805))) ? (231096805 & var_2) : ((var_12 ? 76336340 : (-68324277 + 231096804))));
                    var_19 = (((var_8 / 596087143) > (min(0, -231096801))));
                    var_20 = ((var_5 >> ((((((max(0, -565485908))) ? (var_2 > var_7) : ((231096804 ? -76336340 : 76336339)))) + 76336364))));
                }
            }
        }
    }
    #pragma endscop
}
