/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = ((((arr_9 [i_1] [i_1] [i_2] [i_3] [i_3 + 3]) == var_15)) || var_16);
                                var_19 ^= ((((arr_10 [i_0 + 2] [i_0]) * 0)));
                                arr_14 [i_3] [i_1] [12] = 7352240055734817804;
                                var_20 = ((((~(min(-776228411, -17237)))) << (((((min((var_9 > var_14), -168732894)) + 168732908)) - 13))));
                            }
                        }
                    }
                    var_21 = (max(var_21, ((((-(arr_13 [i_1 + 2] [1] [i_0 - 2] [i_0] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
