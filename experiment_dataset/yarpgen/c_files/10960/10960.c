/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = ((~((min(1, 1432)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = (var_7 + (!16383));
                                var_17 = (((~4294967281) ? (((-((max(1, 1432)))))) : (min((max(var_13, var_1)), ((((arr_5 [i_4] [i_3] [i_0] [i_0]) >> (var_10 - 1839312238))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_2] [i_5] [i_0] = 7;
                                arr_22 [i_5] [i_6] [i_2] [0] [i_6] [1] [i_5] |= var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(((((min(134217727, 1432))) + (14 ^ 168))), -var_3));
    #pragma endscop
}
