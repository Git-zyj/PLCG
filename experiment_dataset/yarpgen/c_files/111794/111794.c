/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((((arr_4 [i_0 - 3] [i_0 - 3] [i_0 - 1]) * (arr_4 [i_0 - 3] [i_0 - 3] [i_0 - 1])))) > (((max((arr_3 [2]), 0)) & (max(11183131228409586046, (arr_0 [i_0] [i_0 - 4])))))));
                arr_6 [6] [i_0] [i_0] |= (max(0, 168));
            }
        }
    }
    var_15 = 6053529984913904803;
    var_16 = (((var_6 * (8796093022207 + var_9))) | ((var_6 << (((var_12 + 111) - 18182469105548582020)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] [i_3] = (255 ^ ((108 ^ (arr_7 [i_2] [i_3]))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_3] [i_3] [i_3] [i_4] [i_5] [16] = (!255);
                                arr_20 [i_2] [i_3] [i_2] [i_2] [5] [i_2] = ((-(max((arr_17 [i_2] [i_2] [i_4] [i_5] [i_6]), (arr_17 [i_2] [i_2] [i_2] [i_2] [3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((var_9 << (var_12 - 18182469105548581962)));
    #pragma endscop
}
