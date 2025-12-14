/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (arr_1 [i_0]);
                    var_17 = (min(var_17, var_7));
                    arr_6 [i_0] [i_1] [i_1] = var_10;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_18 = (max((((!((min(var_9, var_8)))))), var_5));
                            arr_16 [3] [i_4] [i_6] = var_9;
                            arr_17 [i_6] [i_6] [i_6] [i_3 + 2] = (+((-((max((arr_10 [i_6] [i_3]), var_6))))));
                            arr_18 [i_6] [i_5] [i_6] = var_7;
                        }
                    }
                }
                var_19 += ((!(~-var_9)));
            }
        }
    }
    #pragma endscop
}
