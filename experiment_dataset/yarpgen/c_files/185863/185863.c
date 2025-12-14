/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-((var_1 ? 22630 : var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = ((((-3858593393555330559 ? ((-3858593393555330559 ? 91 : 1630642024)) : -1630642027))) ? (max((max((arr_0 [24] [i_3]), (arr_8 [i_0] [i_0] [i_0] [17]))), 83)) : (arr_7 [i_0] [i_1] [i_0]));
                                arr_12 [i_0] [i_0] [i_1] [19] [i_3] [i_3] [1] = (((!60295) ? (~var_2) : -var_1));
                                var_14 = 1;
                                var_15 = (((~170) <= ((((min(-1630642027, 1))) ? (arr_1 [23]) : ((((arr_11 [12] [i_1] [i_3] [i_2] [i_1] [i_0] [i_0]) || var_10)))))));
                                var_16 = (min((((!(var_3 >= var_9)))), ((~(~1630642004)))));
                            }
                        }
                    }
                }
                arr_13 [11] = (max((max(((var_4 ? var_1 : 1)), 234129370)), 57344));
            }
        }
    }
    #pragma endscop
}
