/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((var_9 ? ((((22985 ? 42551 : var_14)) ^ (~var_4))) : (((min(54054, 2897404996))))));
    var_16 = (min(var_16, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] = var_14;
                                arr_15 [i_3] = 15497174283705987837;
                                var_17 = var_12;
                                arr_16 [i_0] [i_0] [i_3] [i_0] [i_0] = ((0 ? 1211634132 : 22983));
                            }
                        }
                    }
                }
                var_18 ^= (((((173 ? 22984 : (arr_4 [i_1] [i_0] [i_0]))) / (((~(arr_13 [i_0] [i_1] [i_1])))))));
                arr_17 [i_0] = (max(11632564644832588623, 1814298037239240455));
            }
        }
    }
    #pragma endscop
}
