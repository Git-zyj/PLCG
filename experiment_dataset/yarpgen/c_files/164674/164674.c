/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((1519148105 ? 2298842330 : 1996124949))) ? var_7 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_4;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 += (((((arr_4 [i_0]) - ((-(arr_12 [i_0] [i_0] [i_4]))))) <= ((((127 != ((((arr_8 [i_4] [i_3] [i_2] [i_4]) ? 11131 : (arr_11 [i_0] [i_1] [i_1] [i_1]))))))))));
                                var_15 = (max(var_15, (185 >= 7910085933604485534)));
                                var_16 = (min(var_16, ((-(((~-1519148099) ? (min((arr_12 [i_0] [i_0] [i_4]), var_2)) : (24190 | 3360712210)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
