/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_18 = ((-(var_4 & 16128)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        var_19 = ((-var_16 <= (((!var_1) ^ var_15))));
                        var_20 = (((((((min(47186, 18360))) ? 67100672 : (4280373552 >= -1579120922)))) ? (-67100665 | 67100672) : (((~(arr_7 [i_0] [i_1] [i_2]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
