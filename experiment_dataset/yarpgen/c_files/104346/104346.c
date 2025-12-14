/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            arr_15 [i_2] = var_5;
                            var_17 = (((((-(arr_3 [i_0])))) & (38725 - 0)));
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_18 = var_2;
                            arr_19 [i_2] = 38721;
                            var_19 = (max(var_19, ((((((arr_0 [i_5 + 1] [i_1]) ? (arr_14 [14] [i_1 - 1] [i_1 + 1] [i_1 + 1] [1] [i_5 + 1]) : var_12)) ^ (((!(arr_0 [i_3] [i_3])))))))));
                        }
                        arr_20 [i_0] [i_2] [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1] = (!(((var_16 | (arr_16 [i_3] [i_3] [15] [i_2] [i_3 - 2])))));
                    }
                    var_20 ^= (-((-((-6109612405463520475 ? var_16 : var_14)))));
                }
            }
        }
    }
    var_21 = (min(var_21, 18446744073709551603));
    #pragma endscop
}
