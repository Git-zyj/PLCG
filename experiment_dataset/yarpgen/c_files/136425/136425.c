/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = 6;
        var_21 *= 1344733599;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, (((+((min((arr_8 [i_0] [i_0] [i_0] [i_2]), 59))))))));
                    var_23 = ((201 ^ (((max(32, (arr_4 [i_2])))))));
                }
            }
        }
        var_24 = 2950233671;
    }
    var_25 = var_8;
    #pragma endscop
}
