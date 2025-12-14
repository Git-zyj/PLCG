/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((var_5 ? var_0 : var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = ((arr_9 [i_0] [i_0] [i_2] [i_2]) ? (arr_2 [i_0] [i_0]) : (arr_13 [i_3] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_0] [11] = 112;
                            }
                        }
                    }
                }
                arr_16 [i_1] [1] [1] &= ((((((((!(arr_11 [i_1])))) & (arr_1 [i_1 - 1])))) && ((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [1]) * (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [8]))))));
            }
        }
    }
    var_15 += (var_8 ? (((2764678324 ? (32766 < 113) : ((var_2 ? -9223372036854775802 : var_7))))) : 6587654487769740406);
    #pragma endscop
}
