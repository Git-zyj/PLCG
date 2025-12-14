/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -7521;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (16 | 3904232517162197997);

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (!-48)));
                                var_18 = ((min((min(-48, (arr_3 [i_2] [9]))), (((!(arr_5 [i_4] [i_4])))))));
                                var_19 = ((!((min(((((arr_16 [i_0] [3] [i_0] [i_0] [i_0] [i_0]) == (arr_0 [i_2])))), (((arr_16 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]) ? -3904232517162197979 : -18933)))))));
                                var_20 = (arr_5 [i_0] [1]);
                                var_21 = (min(var_21, (arr_3 [i_1 - 2] [i_1])));
                            }
                        }
                    }
                    var_22 = (max(var_22, var_11));
                    var_23 = (min(var_23, ((max(((((arr_11 [i_2] [i_2] [i_2] [i_2] [i_1 - 1]) > (arr_14 [i_2] [i_2] [i_2] [1] [i_1] [i_1 - 1])))), (max((-6902 == var_14), ((var_1 ^ (arr_14 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1]))))))))));
                    var_24 = -5506870521471246164;
                }
            }
        }
    }
    var_25 = (max(var_25, -3904232517162197997));
    var_26 ^= ((3904232517162197997 ? 1 : var_6));
    #pragma endscop
}
