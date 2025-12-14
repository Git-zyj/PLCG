/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((min(3, var_1))) ? var_7 : ((var_3 ? var_12 : -15))))) ? (2500485482 - 3021315997331464838) : (((((var_5 && (-2147483647 - 1))) ? (var_10 == var_0) : (max(358196677, 874869073)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2] [i_1 - 1] [i_1] = (((arr_4 [i_0]) ? (~var_11) : (~65)));
                    var_15 = ((!(arr_2 [2] [2] [2])));
                }
            }
        }
    }
    var_16 = ((((((((min(var_11, -24))) != (!var_10))))) < (-9223372036854775807 - 1)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            {
                arr_12 [13] [i_4] = ((((min(var_4, (-2147483647 - 1))))));
                var_17 = 1795276348;
            }
        }
    }
    #pragma endscop
}
