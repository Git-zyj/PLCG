/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(37, (min(((var_4 ? 1794948668 : 243)), var_2))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (arr_7 [i_0] [i_1 - 1] [i_2] [i_3]);
                                var_17 *= 147687901;
                            }
                        }
                    }
                    var_18 = (min(var_18, ((max(((((min((arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]), 0))) ^ (arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2]))), ((~(arr_0 [i_1 - 1] [i_2]))))))));
                    arr_13 [15] [i_1 + 1] [i_0] = ((1 ? ((~(arr_0 [i_1 + 1] [i_2]))) : ((max(var_12, 151)))));
                    var_19 *= (((arr_7 [i_0 + 1] [i_1 + 1] [3] [i_1 + 1]) ? 1 : (((arr_7 [i_0 - 1] [i_1 - 1] [i_1] [i_1 - 1]) ? (arr_7 [i_0 - 1] [i_1 + 1] [i_1] [i_1 + 1]) : (arr_7 [i_0 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] = 6;
                                var_20 -= -1704670362;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, 1987336971));
    #pragma endscop
}
