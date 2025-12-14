/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((max(var_5, var_1)), ((9223372036854775807 << (((25941 + var_5) - 26013))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((!((8323072 < (arr_6 [i_0] [1])))));
                var_14 = ((878392432 ? 8323072 : 4233461964));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_17 [i_3] [i_1] [i_2] [i_3] [i_4] = ((!(arr_12 [i_0] [i_3] [i_3] [i_4])));
                                arr_18 [3] [3] [i_2] [i_3] [i_3] = (((((((!(arr_11 [1] [4] [i_1] [i_0])))) <= (arr_9 [9] [6] [i_1] [i_0]))) ? ((-((878392432 ? var_11 : var_9)))) : ((((arr_2 [i_0]) <= 0)))));
                            }
                        }
                    }
                }
                var_15 = (((((max(var_5, var_1))) || var_8)));
            }
        }
    }
    #pragma endscop
}
