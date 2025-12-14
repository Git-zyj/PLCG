/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (160 < var_8);
                    arr_8 [i_0] [i_0] = ((-(min(((min(var_6, var_2))), var_3))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 |= ((+((-9223372036854775807 ? 2190129102269573242 : (((99 ? (arr_4 [i_1]) : 676859003)))))));
                                var_14 ^= ((((max((~99), 16))) ? (((arr_13 [i_4] [i_3] [i_3] [i_1 - 1] [i_0]) ? 149 : var_1)) : 188));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_2] = ((var_6 ? (arr_2 [i_2]) : 18428125101310085242));
                }
            }
        }
    }
    var_15 = -var_1;
    var_16 = (max(var_16, (((var_7 >> (var_2 - 45032))))));
    #pragma endscop
}
