/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_6;
    var_12 = ((var_4 != ((var_2 + ((1150496951026259029 ? var_4 : 2233076522))))));
    var_13 = ((-84 ? (max(((2061890773 ? -1447621741427734476 : var_5)), var_7)) : 5964));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((+(((arr_3 [i_1 + 1] [i_1] [i_1 - 1]) + 57018)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = (((((arr_5 [i_1 + 2]) & var_4)) >= (((((arr_5 [i_1 - 1]) != 5935))))));
                                var_16 = var_10;
                            }
                        }
                    }
                }
                var_17 = 5964;
            }
        }
    }
    #pragma endscop
}
