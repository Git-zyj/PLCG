/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(var_3, ((min(var_2, 1158205558)))))) ? -17 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_12 = (~var_7);
                            arr_10 [i_3] [i_2] [11] [1] [i_1] [i_0] = (arr_2 [i_0]);
                        }
                    }
                }
                var_13 = (max((((arr_6 [i_1 + 1] [i_1 + 1] [i_0]) >> (var_8 + 12961))), ((-(arr_7 [i_1 + 1] [i_1])))));
            }
        }
    }
    var_14 += 68;
    var_15 = (((((((max(var_2, var_8)))) / (max(var_5, 1837733091)))) & (max(var_9, 643011388))));
    #pragma endscop
}
