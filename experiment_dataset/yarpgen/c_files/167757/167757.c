/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 -= ((min(-var_9, (arr_2 [13] [i_1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = (!78721235);
                                var_14 = ((-(min(-6564928985539688797, var_0))));
                            }
                        }
                    }
                    arr_15 [3] [10] [3] = (-(min(6564928985539688798, 4746235379394315106)));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_15 = ((-((~((-(arr_7 [i_1] [i_5] [i_6])))))));
                                arr_22 [i_0] [i_1] [14] = (!-6195119296598965078);
                                arr_23 [i_0] [i_1] [i_0] [i_5] [i_0] = ((~(~-172)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                {
                    arr_30 [i_7] [i_8] [i_9 + 1] = (max((!var_5), (min((!var_10), (!var_10)))));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_37 [i_7] [i_8] [i_8] [i_10] [i_7] = (max(((-((-(arr_9 [i_7] [i_8] [i_11]))))), (max((~-6564928985539688797), (min((arr_4 [i_8]), var_10))))));
                                var_16 = (((((!(arr_10 [i_9] [i_10 + 2]))))));
                            }
                        }
                    }
                    arr_38 [i_7] [i_8] [1] [i_8] = (!(((~(max((arr_1 [19]), 8119460335069583863))))));
                    arr_39 [i_7] [i_7] [i_8] = ((-(min((max(6564928985539688796, -3908902)), var_3))));
                    arr_40 [i_7] [i_8] = (!-var_5);
                }
            }
        }
    }
    #pragma endscop
}
