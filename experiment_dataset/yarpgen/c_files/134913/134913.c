/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (-74499757 > 2573336685);
                var_17 *= ((((-74499741 ? 74499777 : 16984)) ^ -var_7));
            }
        }
    }
    var_18 += var_14;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_19 = var_5;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_17 [i_5] [i_3] [i_5] [i_3] [i_3] [i_3] [i_3] = (min(74499756, (min((min((arr_1 [i_5]), var_15)), var_2))));
                                arr_18 [i_6] [i_2] [i_5] [i_5] [i_2] [i_2] = (min((arr_15 [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]), (((arr_15 [i_6 - 1] [1] [1] [i_6] [i_6 + 1] [i_6] [i_6 + 1]) ? (arr_15 [i_6 - 1] [i_6] [i_6] [7] [i_6 + 1] [i_6] [i_6 + 1]) : (arr_13 [i_6] [i_6] [i_5] [i_6] [i_6 + 1])))));
                                var_20 = (~34033);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_24 [i_2] [i_2] [2] [i_3] [i_8] [3] = -74499757;
                            arr_25 [i_2] [i_2] [8] [i_2] [i_2] |= ((((!(((var_5 & (arr_11 [i_8] [i_7] [i_3] [1])))))) ? (((!((min((arr_22 [i_2] [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_20 [i_8]))))))) : (arr_22 [i_2] [i_8] [i_7] [i_2] [i_3] [i_2])));
                            var_21 = ((((+((201055011 ? (arr_4 [i_8] [i_2]) : var_12)))) / (((-(arr_20 [i_2]))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = 31497;
    #pragma endscop
}
