/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (((var_16 != 57859) ? (arr_8 [i_0] [i_0] [i_2]) : (((+(max((arr_8 [i_0] [17] [i_2]), 1)))))));
                    var_19 = (((((((arr_1 [i_0]) ? (arr_8 [i_2] [i_1] [i_0]) : (arr_7 [6] [i_0] [6] [i_2]))) != (((arr_1 [i_0]) * 32759)))) ? (((arr_7 [i_0] [i_0] [i_0] [3]) ? (((arr_4 [i_0] [i_1] [i_1]) ? 875880610 : (arr_2 [i_2]))) : (arr_3 [i_0]))) : (((((arr_0 [i_0] [i_1]) > (arr_3 [i_0])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_20 = (((((-(arr_19 [i_3])))) / (arr_17 [i_4] [i_3])));
                                arr_24 [i_3] = max((min((max((arr_17 [i_3] [i_4]), 3419086686)), (~32739))), (arr_14 [i_3]));
                                var_21 = 0;
                            }
                        }
                    }
                }
                var_22 = 64512;
            }
        }
    }
    var_23 = 216172782113783808;
    #pragma endscop
}
