/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = (((-(!var_15))) & var_10);
                                var_20 = 24;
                                var_21 = (((((~15298067581421740864) <= (arr_10 [i_4] [i_4 + 1] [i_4] [i_3 - 2]))) ? ((min((!var_7), ((var_10 && (arr_9 [i_0] [i_3] [i_2] [i_3])))))) : ((var_7 << (((arr_10 [i_0] [i_1] [i_0] [i_2]) - 1083742953568642670))))));
                                var_22 = (min(var_22, (((!((!(arr_3 [i_3 - 2]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_23 |= (max(((var_18 ? ((var_4 ? var_9 : (arr_5 [i_5] [i_2] [i_0]))) : ((var_12 << (var_7 - 22471))))), (!-1784027054)));
                                var_24 = ((2662858414059512532 ? 3716202208 : (arr_3 [i_5])));
                                var_25 = var_17;
                                var_26 = ((!(~-1853005004)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (((((~(!var_6)))) ? (((var_14 && (!var_5)))) : (var_14 != var_3)));
    var_28 *= var_18;
    #pragma endscop
}
