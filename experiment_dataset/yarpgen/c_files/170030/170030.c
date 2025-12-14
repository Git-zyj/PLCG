/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-1102697743 && -21075);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, (--21068)));
                                var_12 = (arr_1 [8] [i_1]);
                                var_13 = ((37 >> ((((213 >> (var_6 % -1))) - 213))));
                                arr_11 [i_0] [i_1] [i_1] [i_4] = 35;
                            }
                        }
                    }
                }
                var_14 = ((220 ? (arr_6 [i_0 + 4] [i_0]) : 9214364837600034816));
                arr_12 [i_0] [i_1] = ((var_1 ? (~3840) : -42));
            }
        }
    }
    var_15 -= (min(((((((var_5 ? var_9 : var_5))) >= var_1))), var_6));
    var_16 = var_0;
    #pragma endscop
}
