/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = var_0;
                    var_17 = 55271;
                    arr_10 [i_1] = (min((-1492803909143695983 / var_14), (((((10264 ? var_0 : (arr_3 [i_2 + 3] [i_2]))) & (arr_4 [i_1] [i_1]))))));
                    var_18 *= (var_10 < 1016282801);
                }
            }
        }
    }
    var_19 = (min(var_6, var_14));
    var_20 = var_13;
    #pragma endscop
}
