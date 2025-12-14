/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_7, var_7));
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = ((((-(arr_3 [i_1 + 1] [i_1 - 1])))) ? (min(1016038342, 3863170105)) : var_8);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_3, (((arr_7 [i_0] [i_1] [21] [i_3] [i_4]) ? 431797205 : var_2))));
                                arr_11 [i_0] [i_0] [i_3] [i_2] [i_3] [i_4] = (((((((var_3 ? var_3 : var_2)) + ((min(-7911, 7915)))))) ^ ((~(min(3863170106, var_4))))));
                            }
                        }
                    }
                }
                var_16 = (min(var_16, (((2650636338 ? var_6 : (431797185 > 4027))))));
            }
        }
    }
    #pragma endscop
}
