/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((-51 ? 204 : 9814218001781342241)))));
                var_18 = (min(var_18, (((var_16 - (arr_5 [i_1 + 2]))))));
                var_19 = (min(8632526071928209374, 64));
                var_20 = ((arr_0 [i_0]) >= -1);
            }
        }
    }
    var_21 = ((var_8 ? ((-30453 ? (((min(var_5, var_5)))) : ((var_0 ? var_13 : 1)))) : 178));
    var_22 = var_10;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_23 = (80 >= var_16);
                            var_24 = (arr_12 [i_3]);
                        }
                    }
                }
                var_25 = (arr_7 [i_2 - 3]);
            }
        }
    }
    #pragma endscop
}
