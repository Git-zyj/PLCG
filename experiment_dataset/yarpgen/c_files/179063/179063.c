/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((11 ? ((min(10088, -7347922101535492709))) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_17 &= (min((((((-796587283 ? var_1 : var_1)) <= (-10088 <= -2147483622)))), (((arr_0 [i_1 - 4]) ? ((max(-24, -23))) : -1))));
                var_18 = (min(var_18, 5));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] = ((min(7, (arr_8 [i_3] [i_4] [i_3 - 1] [i_3]))));
                                var_19 = (((!((((arr_10 [i_4] [i_3] [i_3] [i_0]) ? var_4 : (arr_11 [i_0] [i_3] [i_2] [i_3] [i_2] [i_3] [i_2])))))));
                                var_20 = (((arr_6 [i_2] [i_2] [i_0]) ? (arr_5 [8] [i_1] [i_0]) : (((arr_8 [i_3] [i_2] [i_3] [i_2]) ? var_15 : (arr_5 [0] [i_1] [17])))));
                            }
                        }
                    }
                }
                arr_14 [4] [15] = ((-(arr_1 [i_0])));
            }
        }
    }
    #pragma endscop
}
