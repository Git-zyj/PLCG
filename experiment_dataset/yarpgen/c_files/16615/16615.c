/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (max((max((max(var_0, var_13)), (1724178405 * 16777215))), (((((min(var_12, var_6))) ? ((var_3 ? var_16 : -1022315991)) : (max(var_11, var_5)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) ? (((!(((var_12 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))))) : ((((!-1096875444) || ((!(arr_0 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (arr_1 [i_1 - 2] [i_2]);
                    var_20 = ((((((arr_1 [i_0] [i_0]) / -16777199)) * -106)) * -106);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                {
                    var_21 = (min(var_21, ((((arr_12 [i_3 - 2] [i_3 - 3]) >= (arr_8 [i_5 - 3] [i_5 - 3]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((~(arr_9 [i_6])))))));
                                arr_19 [i_3] [i_3] [i_6] [i_5 - 3] [i_6] [i_6] [i_7] &= (((arr_9 [i_6]) ^ (arr_11 [i_3 - 1] [i_7 + 1])));
                            }
                        }
                    }
                    var_23 -= (((arr_13 [2] [i_4 - 4] [i_5 - 2]) * (arr_13 [16] [i_4 - 3] [i_5 - 3])));
                    arr_20 [i_3] [i_3] = arr_11 [i_5 - 2] [i_3];
                    var_24 = arr_12 [i_3] [i_5];
                }
            }
        }
        arr_21 [1] [1] |= ((var_7 >= (((((arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) >= (arr_17 [i_3] [i_3] [i_3] [i_3] [2] [3])))))));
    }
    var_25 = 6568481670510545683;
    var_26 = (min(var_26, ((((min((min(var_6, var_15)), (var_6 == var_17))) >> var_11)))));
    #pragma endscop
}
