/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((!42907) ? var_12 : 42907)), (max((var_12 * var_12), ((max(var_10, 42907)))))));
    var_18 ^= (max(var_14, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = (((((max(0, var_16)))) ? (arr_5 [i_1] [i_1 - 1] [i_1 + 3]) : 176));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (arr_16 [i_0] [21] [i_2]);
                                var_20 &= ((~(min((arr_9 [i_1] [i_1 - 1] [i_3 + 2] [i_4 - 2]), (arr_6 [i_0] [i_1 - 2])))));
                                var_21 = (min(var_21, (((~((((arr_9 [i_4] [i_4 - 1] [15] [i_3 - 1]) >= var_11))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
