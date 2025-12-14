/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 ^= ((12847517557899759683 | (var_0 + 12847517557899759683)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 *= (((((arr_9 [i_3 + 2] [i_1] [i_4 - 1]) + 12847517557899759701)) / (arr_9 [i_3 + 3] [3] [i_4 - 1])));
                                var_13 = ((((min((var_1 / var_0), var_4))) * (((5599226515809791933 * 5599226515809791933) * (-1582892330 / var_1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((-(min((min(var_2, 12847517557899759682)), var_9))));
    var_15 = (min(var_15, (((!((((var_8 & 70368744177663) ? (var_10 - 1853247294) : var_6))))))));
    #pragma endscop
}
