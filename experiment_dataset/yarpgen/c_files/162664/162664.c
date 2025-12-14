/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((!27) ? var_8 : var_2)), (((!((max(var_7, var_0))))))));
    var_11 = -4846423918799435272;
    var_12 = 7605928960884907927;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_7;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [21] [i_1 - 1] [21] [i_3] = (max((min((~7605928960884907927), ((7605928960884907947 ? 7605928960884907932 : 472)))), (54422 / -85)));
                            var_13 = -2743072268310758699;
                            var_14 ^= (min((arr_9 [i_0] [i_1] [i_1] [i_1]), 65063));
                            var_15 = ((240 ? 65063 : 13935957075523220414));
                            var_16 = (arr_7 [i_3] [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
