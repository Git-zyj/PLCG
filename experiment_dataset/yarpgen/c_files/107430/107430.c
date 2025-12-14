/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_1));
    var_11 &= (min(2023382315414185223, 22));
    var_12 = (min(var_12, ((((((var_7 ? (~8796093022207) : (min(var_9, var_4))))) && var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_8 [i_1] = (arr_2 [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_1] [i_2] [i_3] [22] [10] [i_4] = (((((2185330193 || 0) ? (min(12453397050802432886, (arr_1 [i_1]))) : 32768))) ? var_2 : ((var_8 ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_2]) : 31)));
                                arr_17 [i_0] [i_2] [i_2 + 3] [i_2] [17] = (((-(((arr_5 [i_0] [i_0]) ? 18446744073709551600 : (arr_9 [i_2 + 3]))))));
                                arr_18 [i_0] [i_0] [8] [i_0] [i_4] [i_0] [i_4] |= ((((!((4294967269 <= (arr_7 [i_1] [i_1] [i_3 + 1]))))) ? var_2 : (((arr_3 [i_3]) & (max((arr_9 [i_3]), (arr_14 [i_0] [i_1] [i_4] [i_1] [i_2] [i_3] [i_4])))))));
                            }
                        }
                    }
                }
                var_13 = arr_12 [i_0];
                arr_19 [i_0] = (arr_7 [i_1] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
