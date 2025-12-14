/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (max(var_1, ((max(var_3, (max(1, var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 *= ((-1 - ((596 % ((~(arr_5 [i_2])))))));
                                var_22 = (min(var_22, (0 != 0)));
                                var_23 = (min(var_23, (((791401473725728396 ^ (arr_10 [i_3 - 2] [i_3 - 2] [i_3] [i_3 - 1] [i_3]))))));
                            }
                        }
                    }
                }
                var_24 = (arr_9 [i_1] [i_1 + 1]);
            }
        }
    }
    #pragma endscop
}
