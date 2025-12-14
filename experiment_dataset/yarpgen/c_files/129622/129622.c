/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [5] [7] [i_2] [i_3 + 1] [i_2] [14] = ((((((-1 / (arr_3 [i_0] [i_1])))) ? ((-105 ? 17218651693702064912 : 19)) : (arr_1 [i_0]))));
                        var_11 = (((((max((arr_5 [13] [i_3] [i_3] [i_3 + 1]), (arr_10 [i_2] [i_2] [i_2] [10]))))) == (arr_5 [1] [17] [12] [3])));
                    }
                    var_12 = (max(var_12, (arr_0 [i_0])));
                    var_13 ^= ((13229478676365815573 ^ (((-4247522363062558108 | -1) | ((161 ? 19 : 5217265397343736042))))));
                }
            }
        }
    }
    var_14 = (min((max((var_4 || var_6), var_2)), (((!(var_9 + var_4))))));
    #pragma endscop
}
