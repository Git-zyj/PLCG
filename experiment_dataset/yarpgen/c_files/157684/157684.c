/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = ((625926188 ? 4234543100 : 60424195));
                    var_18 ^= (((27556 | 60424196) * (((var_12 % (arr_4 [i_1]))))));
                    arr_7 [i_2 - 1] [7] [i_0] = -2222495244263839560;
                }
            }
        }
    }
    var_19 &= var_3;
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_20 = (min((arr_10 [i_3] [i_4]), (min(1, (arr_11 [i_4] [i_4])))));
                var_21 += ((-(min((((-2771445437878525993 ? 4294967295 : 1))), (~var_0)))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] [i_3] [1] [i_4] [i_7] &= ((((((min((arr_8 [i_4]), 100663296))) ? -2771445437878525993 : 2492891772))) ? (((max(625926174, (arr_20 [i_3] [i_3] [1]))))) : (!1));
                                var_22 = (-98 == 13889431212558340778);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
