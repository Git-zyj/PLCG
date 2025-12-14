/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(var_0 && var_17)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((((max((arr_3 [i_0]), var_3))) ? var_17 : 3623777307))) ? var_5 : (((arr_0 [i_1]) - (max((arr_3 [i_0]), var_1))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_20 = (6782 - var_2);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((!(var_9 <= var_14))))));
                                arr_15 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] [i_4] = ((arr_12 [i_2 - 1] [i_2] [i_2] [i_2]) && var_1);
                                arr_16 [i_0] [i_4] [i_2] [i_3] = (((arr_8 [i_0] [i_2] [i_3] [i_4]) ? (arr_1 [i_2 - 1] [i_4 - 3]) : 671189989));
                                var_22 = (((!var_9) ? (arr_13 [i_4] [i_3] [i_2] [i_1] [i_0]) : (arr_10 [i_2])));
                            }
                        }
                    }
                }
                var_23 = (arr_5 [i_0] [i_1] [i_1]);
                var_24 = (min(var_24, (((-((~(min(var_17, -1260686222)))))))));
            }
        }
    }
    var_25 ^= ((((~((max(var_12, var_3))))) << (var_16 - 95)));
    var_26 = (-((max(var_17, var_1))));
    #pragma endscop
}
