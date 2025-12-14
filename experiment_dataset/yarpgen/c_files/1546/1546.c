/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((31 >= 22) <= ((max(255, (max(255, -113)))))));
    var_15 = 0;
    var_16 &= 255;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (((((arr_2 [i_0] [i_0]) ? (arr_0 [i_1 - 1] [i_1 + 1]) : ((max((arr_2 [i_0] [i_2]), var_10))))) > (((arr_5 [i_0] [5] [i_0]) ^ (arr_3 [i_0])))));
                    var_18 = (min((arr_5 [i_0] [i_1 - 1] [i_1 + 1]), (((arr_5 [i_0] [i_1 - 2] [i_1 + 1]) & 31))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            {
                var_19 = ((0 ? ((47 & (arr_13 [i_3]))) : (((~0) ? 1 : ((~(arr_9 [i_3])))))));
                var_20 = (max(var_20, ((max(((((min(-19, (arr_12 [i_3] [i_3] [i_4])))) ? ((-(arr_11 [i_3]))) : -32)), ((((71 ? 103 : (-127 - 1))) * (!var_10))))))));
                var_21 |= (((arr_12 [i_4] [i_4 - 1] [i_4 + 2]) || ((!(arr_14 [i_4 - 1] [i_4 - 1])))));

                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    var_22 &= (((arr_10 [i_5 + 4]) ? (((((arr_14 [i_3] [i_3]) ? (arr_16 [24] [i_5 - 1] [i_5 + 1] [22]) : 7)) + 1)) : ((-(36 / 1)))));
                    arr_17 [1] [1] [i_5 + 2] &= ((93 & ((min(255, (arr_15 [i_4] [i_4] [i_4 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_23 = (min(((((max(127, (arr_11 [i_5])))) ? var_8 : var_2)), ((0 ? -32 : 35))));
                                var_24 |= max(32, (((!((((arr_20 [i_5 + 1] [i_4] [6] [i_5 + 1] [6]) ? var_10 : 0)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
