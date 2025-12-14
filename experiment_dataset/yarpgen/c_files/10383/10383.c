/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = ((min(((11 ? var_12 : 807834722)), -1330620263)));
                                var_17 |= var_12;
                                arr_13 [i_2] [1] [1] [i_3] [1] [i_4] [i_4] = ((-(min(-var_8, (((var_0 * (arr_1 [4]))))))));
                                var_18 = ((((min(var_4, -1330620242))) || var_9));
                            }
                        }
                    }
                    var_19 -= (max((max((arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_0]), -4073)), var_7));
                }
            }
        }
    }
    #pragma endscop
}
