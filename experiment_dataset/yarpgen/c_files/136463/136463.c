/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 *= min(146, 0);
                    var_12 = (~1);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_18 [i_4] [i_3] [i_4] [i_4] [i_3] [i_4] [i_3] = (arr_9 [i_7] [i_6]);
                                var_13 = (arr_5 [i_3] [14] [i_3]);
                                var_14 *= 729093459623147015;
                                var_15 = (max(var_15, ((min(((min(1828633463, 1828633463))), (min((arr_3 [i_4 + 2]), 1828633463)))))));
                                var_16 += ((1055230149 ? ((47276 - (arr_16 [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4]))) : 50));
                            }
                        }
                    }
                }
                arr_19 [i_3] [i_3] = (max((arr_7 [i_4 + 2]), (arr_7 [i_4 + 3])));
            }
        }
    }
    #pragma endscop
}
