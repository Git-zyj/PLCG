/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, var_14));
                    var_18 = (min(var_18, (max((max((arr_2 [i_0]), var_9)), ((min(4294967292, (arr_2 [i_0]))))))));
                }
            }
        }
    }
    var_19 = var_0;
    var_20 = 21;
    #pragma endscop
}
