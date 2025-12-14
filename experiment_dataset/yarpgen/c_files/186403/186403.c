/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((-(~17808479528831693053))) * var_2));
    var_12 = (!-var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((min((min(638264544877858568, 17808479528831693053)), (((4083469961 ? 4083469961 : 403644828))))))));
                    var_14 = var_0;
                    var_15 *= ((~((14796645843682694719 ? 13324108250932170941 : 63))));
                }
            }
        }
    }
    var_16 = var_6;
    var_17 = 15331;
    #pragma endscop
}
