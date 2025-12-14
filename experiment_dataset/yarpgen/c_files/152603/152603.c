/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((max((arr_2 [i_0] [i_0] [i_0]), -77)))));
                    var_13 = arr_3 [i_0] [i_1 - 1] [i_2];
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {
                    arr_13 [i_4 - 1] [i_5] = (2000102684 ^ 1);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_14 = ((2168088746 % (arr_8 [i_3] [i_3])));
                                arr_19 [i_3] [i_3] [i_5] [i_5] [i_6] [i_6] [i_6] = (((arr_10 [i_7] [i_5 - 2] [i_3]) ? ((-(((arr_18 [i_3] [i_4] [14] [i_6] [i_4 + 2]) ? 889044617 : 1)))) : var_2));
                            }
                        }
                    }
                    var_15 &= (min(16383, 0));
                }
            }
        }
    }
    #pragma endscop
}
