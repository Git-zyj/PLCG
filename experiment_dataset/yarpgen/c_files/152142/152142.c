/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 |= max(var_9, (((173 >= (!var_1)))));
    var_14 = -1158462125;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [24] [6] &= 1714446381;
                arr_5 [i_1] [i_1] = -1158462130;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 |= ((!(((((min(54539, 1))) / -255)))));
                                arr_12 [i_1] = ((1158462125 ? -28414 : 23592557376439652));
                                var_16 += (((((-(arr_0 [i_3 - 1])))) ? 7 : -1158462135));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = (!-28418);
                                var_17 = (max(var_17, 254));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_17 [i_5] |= (-(((arr_2 [i_0] [i_1]) << (-var_0 - 1479606310))));
                    var_18 = (max(var_18, (((((!(arr_14 [i_0] [i_0]))) ? 1 : (((arr_14 [i_0] [i_5]) ? (arr_2 [i_5] [i_1]) : 83)))))));
                }
            }
        }
    }
    #pragma endscop
}
