/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((!(((2674 ? 53 : -24)))));
    var_11 = (min(var_11, (((~(~var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, 810339760));
                                arr_12 [i_2] [i_1] [i_2] = ((-((1957072718599174848 ? ((var_2 ? 24689 : 1)) : ((min(199, (arr_5 [i_2]))))))));
                                var_13 = (44773 ? (((arr_8 [i_0] [i_1] [i_2] [i_0] [i_4] [i_2]) / ((63417 ? 8480513289045354645 : -810339778)))) : (arr_7 [i_0]));
                            }
                        }
                    }
                    var_14 = ((~(202 + var_5)));
                }
            }
        }
    }
    var_15 = var_6;
    #pragma endscop
}
