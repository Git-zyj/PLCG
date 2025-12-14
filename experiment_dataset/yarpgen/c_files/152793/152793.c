/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = ((221 ^ (((((24 ? (arr_5 [i_0] [i_1] [i_1 + 2]) : (arr_0 [11])))) ? 161959881 : (var_1 || var_10)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 += -239;
                    var_20 = (~var_9);
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    arr_13 [i_1] [i_1] = 196;
                    var_21 ^= -31;
                }
                arr_14 [i_1] [i_0] [i_1] = (min(((max(211, (arr_11 [i_1 + 1] [i_1] [i_1 - 1])))), (((arr_11 [i_1 - 1] [i_1] [i_1 + 1]) ? (arr_11 [i_1 - 1] [i_1] [i_1 + 1]) : 161959883))));
                arr_15 [9] [i_0] [i_1] = (((arr_2 [1] [i_1]) % 24));
                var_22 *= (arr_12 [i_1 + 2]);
            }
        }
    }
    var_23 = var_11;
    #pragma endscop
}
