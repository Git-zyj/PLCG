/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;
    var_13 = (var_0 > var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = (28 > -var_10);
                    var_14 = (max(var_14, ((((min((1918510345 > 124), var_10)) - ((((arr_1 [i_0]) ? ((var_4 ? 1703316381 : 113)) : -var_5))))))));
                }
            }
        }
    }
    #pragma endscop
}
