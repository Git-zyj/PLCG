/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 += 4294967295;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((((arr_6 [i_0] [i_1] [i_1]) / (arr_5 [i_1] [i_1 + 1] [i_1]))) << (4294967290 - 4294967232)));
                var_17 &= (arr_6 [i_0] [i_0] [10]);
                var_18 &= ((-1 & (min((5159149858553654679 | var_7), ((min(var_4, 4294967295)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((!(arr_10 [2] [i_3 + 2]))))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] = min(6, (arr_10 [i_0] [i_0]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
