/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (max(((var_5 ? (var_16 & 18411405817537652084) : (((var_12 << (var_10 - 760643944)))))), (((max(var_11, 7321309197577779521))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = -1;
                var_22 = (min(var_22, (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] = (((((min(1, (arr_5 [i_0] [i_0] [i_0]))))) & 1));
                            var_23 = ((20325 ? ((((arr_6 [i_3] [i_3 + 1] [i_3 + 1]) ? (arr_6 [i_3] [i_3 - 1] [i_3 - 1]) : (arr_6 [i_3] [i_3 + 1] [i_3 + 1])))) : ((8140382163861498339 * (arr_6 [5] [i_3 - 1] [i_3 + 1])))));
                        }
                    }
                }
                var_24 = var_2;
            }
        }
    }
    #pragma endscop
}
