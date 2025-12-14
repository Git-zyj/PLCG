/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_1] = var_13;
                    var_17 = (min(var_17, ((max(-32, -1873040741)))));
                    var_18 = ((-99 ? -80 : 1));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_19 += var_5;
                        var_20 |= (((min(24803, 108)) ^ 108));
                        arr_13 [i_3] [i_3] [i_3] [i_0] = 40759;
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_4] [i_2] [i_4] = (((var_6 / -9) ? (((-24781 + ((3017189579 ? 1 : 1515659855))))) : (arr_1 [i_1])));
                        var_21 = (((((arr_14 [i_4] [i_2] [i_1] [i_0]) ? var_4 : (arr_14 [i_4] [i_2] [i_1] [i_0]))) << (((max(var_6, var_5)) - 2255448124))));
                        arr_17 [i_0] [i_1] [i_1] [i_2] [i_4] |= ((3591055018119833170 ? 40775 : 50));
                        var_22 = (max(((((max(var_13, 65510))) ? (((((arr_14 [i_4] [i_2] [i_0] [i_0]) == 24788)))) : 2818616193444294015)), ((((((var_15 ? var_14 : (arr_4 [i_2])))) ? (1 - 1) : (!var_9))))));
                        var_23 = ((!((max(var_6, (((~(arr_6 [i_1] [i_2] [5])))))))));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_24 = ((var_7 + ((-(arr_9 [i_0] [i_2])))));
                        arr_22 [i_0] [i_5] [i_2] [13] = (((((max((arr_10 [i_0] [i_1] [i_2] [1] [i_5] [8]), 17)))) % ((var_0 ? var_6 : (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [11])))));
                        var_25 = (((((((max((arr_7 [i_0] [1] [1] [i_5]), var_4))) ? ((3552293580 ? 40 : var_4)) : (arr_6 [i_0] [i_0] [i_0])))) ^ (max(((var_13 ? var_14 : -3591055018119833161)), (arr_18 [i_0] [i_1] [i_2] [i_5] [i_2] [i_2])))));
                    }
                    var_26 += ((((3855124794 ? 1 : 28))) ? var_14 : ((min(9, 1))));
                }
            }
        }
    }
    #pragma endscop
}
