/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] = (max((arr_7 [i_0] [i_0] [i_0] [i_0]), 1638427807));
                            arr_9 [i_0] [i_0] [i_0] [i_0] = (((min(1, (max((arr_5 [10] [12] [10]), 0))))) || 35591);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_13 *= (arr_6 [i_0]);
                            var_14 = (arr_10 [i_4]);
                            var_15 = -3343713941;
                            var_16 += (max(1, (arr_11 [i_4 + 1] [i_0] [i_4 + 2])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_17 = ((((((arr_3 [i_0]) ? 1 : (max(951253355, (arr_4 [i_0] [i_0] [i_0])))))) ? ((((((min(1, 1))) <= (((!(arr_19 [17] [17] [i_6] [i_7])))))))) : ((((((arr_14 [i_0] [i_0] [i_0]) * (arr_18 [i_0])))) ? (5925407595133612705 > 1) : ((65 ? (arr_10 [i_7]) : 11646))))));
                            var_18 = (((+-15672903679996446944) >> (((!(arr_2 [i_0] [i_0] [1]))))));
                            arr_21 [i_7] [i_0] [i_0] = -5925407595133612688;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_19 += (min((max((-18 * 29963), 1964559329)), ((max(3639383122, (arr_20 [i_0] [i_1] [i_8] [i_9]))))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] = ((((-(((arr_17 [6] [6] [i_9]) ? (arr_17 [i_9] [i_9] [i_9]) : -6199763552261736225))))) ? ((+(max((arr_18 [i_0]), 0)))) : (((-(arr_15 [i_1] [i_8] [i_9])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_20 = 9223372036854775807;
                            var_21 *= ((!((((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((65535 % (arr_12 [i_10])))) : 17828101617223209033)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 3; i_12 < 19;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 19;i_13 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            {
                                var_22 *= (((248 || 852779113) ? (arr_41 [i_12] [i_16] [i_16] [i_16] [i_16]) : (((((max((arr_42 [i_15] [i_14] [i_13] [i_12]), -16)) < (arr_43 [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1])))))));
                                var_23 ^= (max(((((((arr_39 [i_12 - 3] [i_15] [i_12]) ? (arr_41 [i_16] [i_15] [i_14] [i_15] [i_12 + 1]) : (arr_40 [i_16] [i_13 + 2] [i_13 - 1] [i_13])))) ? (arr_41 [i_13 + 1] [i_15] [i_14] [i_15] [i_12 + 1]) : (arr_36 [i_13 + 2] [i_13 + 2]))), (arr_42 [i_12] [i_12] [i_12] [i_12 - 3])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            var_24 = (((((!(arr_39 [i_12] [i_17] [i_17]))) || ((max(161, (arr_48 [i_12 + 2] [i_13] [i_17] [i_18])))))));
                            var_25 = -64;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 18;i_20 += 1)
                    {
                        {
                            var_26 += 655584173;
                            arr_55 [i_12] [i_20] [i_19] [i_20] = (((!3442188199) ^ ((-((-(arr_40 [i_20] [i_20] [i_19] [i_19])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
