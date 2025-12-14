/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min((min(var_5, var_15)), var_8))) ? (((var_8 - var_2) ? (var_13 - var_6) : var_17)) : (((max(var_6, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((-((-((-(arr_2 [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = (((((!(((-(arr_12 [i_2] [i_1] [i_2 + 1] [i_3] [i_4 + 3]))))))) - var_8));
                                var_22 &= ((((((arr_6 [i_3 + 1]) >> (var_16 - 7650)))) ? ((((((var_9 ? var_6 : (arr_8 [i_3])))) ? var_3 : (!4294967295)))) : (((((var_9 >> (arr_13 [i_2] [i_0] [i_4] [i_4 + 1] [i_3] [i_2])))) ? (~var_10) : -4363))));
                                arr_14 [4] [i_1] [i_2] [i_2] = ((!(var_18 - var_15)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
