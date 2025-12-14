/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (161875819 != 26649);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = 1030578339;
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-((-(((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4]) / (arr_2 [i_3])))))));
                                arr_16 [i_0] [i_0] [7] [i_0] [i_0] = 4133091476;
                            }
                        }
                    }
                    var_17 = (((arr_2 [i_0 + 1]) ? -7876517947798661130 : (arr_1 [3])));
                    arr_17 [i_0] = ((~var_9) ? var_9 : (((~((~(arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                    var_18 -= 3436615906;
                }
            }
        }
    }
    var_19 = (min(var_19, ((var_2 << (((((~var_15) ? ((var_2 ? var_8 : var_5)) : (((var_2 ? -7876517947798661145 : var_11))))) - 8478304899800385631))))));
    #pragma endscop
}
