/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172884
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
                arr_7 [i_0] [i_1] = ((-(((max((arr_0 [i_0] [23]), var_16)) ^ (!var_13)))));
                var_17 = (max((!-65024), (((var_5 >> (65029 - 65018))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_18 = ((-(((var_15 + 2147483647) >> (((arr_2 [i_1]) - 6401050665043218685))))));
                                var_19 = (min(var_19, (((~(arr_2 [i_0]))))));
                                arr_15 [i_1] [i_3] [i_3] [i_3] [i_4] = (((((((48 >> (26819 - 26788)))) ? ((var_3 ? 124 : (arr_4 [i_0]))) : (arr_9 [i_1] [i_1] [i_2] [i_1]))) % ((-(arr_9 [i_0] [11] [i_3] [i_4])))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1] [i_0] = (arr_4 [i_0]);
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
