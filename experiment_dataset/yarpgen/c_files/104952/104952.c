/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_10 += (((max(((var_6 | (arr_7 [i_0] [i_1]))), ((((arr_5 [23] [i_0]) > 1350468946))))) | (((((min((arr_2 [i_1]), -13)) > (var_6 && 1350468946)))))));
                var_11 = var_6;
            }
        }
    }
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_13 = (arr_11 [i_2]);
                    arr_16 [i_2] = var_0;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                {
                    arr_24 [i_5 + 2] [i_6] = (!var_7);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_14 = (min(var_14, (arr_1 [i_5 + 1])));
                                var_15 += (min((-121 + 1931785078), 1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
