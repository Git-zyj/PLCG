/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((~(~var_1))), (((1 ? ((var_10 ? var_7 : 1911987737)) : (((31185 ? 70 : -1911987742))))))));
    var_14 = (min(-var_4, (var_10 / var_5)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_10 [i_2] [i_1] [i_2] = -31202;
                    var_15 = -var_6;
                }
                var_16 = (((min(((var_4 ? (arr_4 [12] [i_1]) : var_10)), (((-68757336 ^ (arr_9 [i_1])))))) ^ (1 & 1)));
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_17 = (((((5362506504100303025 < (arr_11 [i_0 - 1])))) / (((((((arr_9 [12]) ? var_8 : 0))) && 125)))));
                            arr_17 [i_0] [1] [i_3] [i_4] = ((-(min((arr_16 [i_1] [10]), ((((arr_8 [i_4] [i_3] [i_1]) ? (arr_11 [i_0]) : 1)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
