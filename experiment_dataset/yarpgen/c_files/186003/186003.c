/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_17 ^= max(((max(100, -117))), (max((min(281474976702464, var_11)), (min(var_0, (arr_2 [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [i_3] [i_3] [i_1] [i_0] = (min((var_0 || 28), ((((min(33, var_2))) % var_10))));
                                var_18 = (((arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_3]) * (((((-(arr_12 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [i_3] [i_3])))) ? (((((arr_1 [i_1] [i_2]) >= -35)))) : (max(var_1, 258048))))));
                                arr_14 [i_3] [i_3] [i_2] = (arr_2 [i_1 - 1] [i_1]);
                                var_19 += (-274877906944 / -258049);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
