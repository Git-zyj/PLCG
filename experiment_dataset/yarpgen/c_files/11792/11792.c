/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (min(((~(var_7 / 8866461766385664))), ((((arr_7 [i_2 + 1] [i_1] [i_0]) * var_5)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_3] [i_3] [i_4] = ((((!(-2147483647 - 1))) ? ((max(31, (arr_12 [i_3] [i_3] [i_2] [i_3] [i_4])))) : ((+(min((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), var_4))))));
                                var_10 ^= (((-var_6 ? (max(62285, var_9)) : (((8732153869709260407 ? 1 : -15))))) == -26504);
                                var_11 -= ((4294967276 ? 32736 : -28));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = (min(var_12, ((var_1 ? ((var_7 ? ((var_9 ? var_6 : 9172)) : (((5 ? 9184 : 108))))) : ((max(var_7, var_6)))))));
    #pragma endscop
}
