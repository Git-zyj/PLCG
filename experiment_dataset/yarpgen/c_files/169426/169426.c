/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_21 += ((-((((((77 ? 17139449261322766226 : 0))) || (arr_0 [i_0 + 1]))))));
                            var_22 += (arr_4 [i_0] [i_0] [i_0 + 1]);
                        }
                    }
                }
                var_23 ^= (arr_10 [4] [i_1] [i_1] [i_1]);
                var_24 = (min(var_24, (((((-(arr_9 [i_0 + 3] [i_0 - 1]))) + (((!((((arr_1 [i_1]) ? (arr_5 [13] [i_0 + 2] [i_1]) : (arr_4 [i_0 + 3] [i_0 + 3] [i_1]))))))))))));
                var_25 = (((((((arr_2 [i_0] [i_1] [i_1]) > (((arr_10 [10] [10] [i_0] [i_0 + 2]) + (arr_9 [5] [5]))))))) * (((((arr_4 [i_0 - 1] [i_1] [i_1]) ? (arr_5 [i_0 + 1] [i_0] [i_1]) : (arr_5 [3] [17] [i_0]))) | ((((arr_9 [17] [i_1]) ^ (arr_9 [i_0] [20]))))))));
            }
        }
    }
    #pragma endscop
}
