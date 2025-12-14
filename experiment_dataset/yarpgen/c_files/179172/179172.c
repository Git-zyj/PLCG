/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = (arr_4 [i_1]);
                                var_22 = ((((~(arr_7 [i_1] [i_1 + 2] [i_2]))) & (((!(((~(arr_3 [i_1])))))))));
                                var_23 = (((arr_8 [i_1] [i_1]) << ((((-(arr_7 [i_1] [i_1 + 1] [i_2 + 1]))) - 84))));
                                var_24 = (arr_5 [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    var_25 = (arr_0 [i_1]);
                }
                var_26 = (40387 - 1);
            }
        }
    }
    #pragma endscop
}
