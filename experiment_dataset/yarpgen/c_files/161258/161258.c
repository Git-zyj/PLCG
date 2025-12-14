/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (arr_3 [i_0] [i_0]);
                var_16 = ((min(5869, (arr_3 [12] [i_0]))) % -11);
            }
        }
    }
    var_17 = (min(var_17, (((var_3 ? (min((min(-25224, var_3)), -25224)) : (~var_13))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [1] [i_2] [2] |= (max((-2147483647 - 1), var_0));
                                var_18 ^= var_2;
                            }
                        }
                    }
                }
                arr_21 [1] [i_3] = ((~((-(arr_4 [i_2] [i_3])))));
            }
        }
    }
    #pragma endscop
}
