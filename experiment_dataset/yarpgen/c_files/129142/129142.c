/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [7] [10] [i_1] [i_3] [10] = 1;
                                var_14 = ((((((169 >= 7) - -65529))) ? (((((var_7 ? 15819794432999595543 : var_5))) ? (-68 > 1) : (-9223372036854775807 - 1))) : (((arr_10 [i_0] [i_0] [i_2] [i_1] [i_4 + 2] [i_2]) ? (min(var_0, 7)) : ((min(12, (arr_7 [i_1] [i_1] [18] [i_4]))))))));
                            }
                        }
                    }
                }
                var_15 = (((max((arr_1 [i_1 + 1]), (arr_1 [i_1 - 2])))) & (arr_10 [i_0] [i_1] [i_0] [i_1] [i_1 - 4] [i_1]));
                var_16 = ((+(((arr_13 [8] [8] [8] [i_0] [i_1 + 2]) ? var_2 : (arr_13 [i_0] [1] [1] [i_1] [i_1 - 2])))));
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_22 [i_1] = (((arr_12 [i_5 - 3]) <= (arr_10 [i_0] [i_1 - 2] [0] [i_1] [i_6 - 1] [i_6])));
                                var_17 = (arr_21 [14] [14] [i_1] [i_1] [i_7]);
                                arr_23 [i_0] [i_6] [i_7] [i_6] [i_1] = (arr_5 [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((-(32755 >= 37374))) <= var_4));
    #pragma endscop
}
