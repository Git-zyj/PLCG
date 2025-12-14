/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (1 & 47029);
                    arr_7 [i_0] [i_0] [1] [i_2 + 1] = min(((~(arr_5 [i_2 + 1] [i_1] [i_1] [i_1]))), var_15);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 |= (~(((arr_6 [i_4]) & 4506440239421056748)));
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_1] [i_4] = ((~((~((47029 ? 6546194307596187313 : (arr_10 [i_0] [i_1] [i_2] [i_3])))))));
                                var_22 ^= (max(var_18, 13));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
