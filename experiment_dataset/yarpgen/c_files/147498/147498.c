/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 *= ((arr_11 [5] [i_1 - 1] [5] [i_4]) * ((min((!var_3), var_5))));
                                var_20 = (min(var_20, (11 == var_8)));
                                arr_14 [i_4] [11] [i_3] [i_0] [i_1 - 1] [i_1 - 1] [3] = (max(((4294967295 ? 0 : 244)), (244 == 79)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((+(max(-48, ((var_9 ? (arr_9 [i_0] [12] [10] [i_6]) : (arr_3 [15]))))))))));
                            arr_23 [i_0] [i_0] [i_5] = var_16;
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = (!var_9);
                        }
                    }
                }
                var_22 += ((((!(arr_7 [0]))) || (((arr_22 [i_1 - 1] [i_1 - 1]) != (arr_22 [i_1 - 1] [i_1 - 1])))));
                var_23 = (((((-(arr_21 [i_1 - 1] [i_1 - 1] [i_0] [i_0] [i_0])))) ? ((-(arr_13 [i_1 - 1] [i_1 - 1]))) : ((((arr_5 [i_1] [i_1] [i_0]) < ((min((arr_17 [i_1 - 1]), (arr_15 [i_1])))))))));
                arr_25 [0] [i_0] [i_0] = ((var_14 ? (max(((((arr_0 [i_0]) < (arr_10 [i_0] [12] [12] [i_0] [i_0])))), 15)) : (((min((arr_17 [i_1 - 1]), 127))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {
                    arr_35 [17] [i_8] [3] = 4294967287;
                    var_24 = ((5 ? ((1 ? 16239480419335114665 : 1)) : 126));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            {
                arr_42 [i_11] = var_11;
                var_25 = (max(var_25, (((((((arr_17 [i_10]) ? 3195831253 : var_3))) ? ((((!(arr_20 [i_10] [i_11] [i_11] [i_10] [12] [i_10]))))) : (+-8644466646386159458))))));
                var_26 *= (((max((arr_40 [10] [10]), (min((arr_37 [i_10]), 0)))) != (((((max((arr_30 [1]), (arr_29 [i_10]))) != (((((arr_40 [10] [10]) < var_9))))))))));
            }
        }
    }
    #pragma endscop
}
