/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_18 = (arr_0 [i_2]);
                            var_19 ^= (max(100, ((-(arr_3 [i_1])))));
                            var_20 *= (min((((0 + 16383) & ((max(279223176896970752, (arr_2 [i_0] [i_0] [i_3])))))), (arr_4 [i_2])));
                        }
                    }
                }
                var_21 = -26678;
                var_22 = ((!((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
                var_23 = (min(var_23, (arr_7 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_24 = (arr_2 [i_0] [i_1] [i_5]);

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_25 = (-(arr_10 [i_0] [i_1] [17]));
                                var_26 = (((!(arr_4 [i_1]))) ? (arr_0 [i_4]) : (arr_8 [i_0] [i_1] [i_5] [i_6]));
                                var_27 = (((arr_10 [i_1] [5] [i_6]) | (arr_10 [i_0] [i_1] [1])));
                            }
                            var_28 = ((((((!var_16) >> ((((19 ? 279223176896970752 : 1)) - 279223176896970741))))) ? var_11 : ((((((arr_15 [3] [i_1] [i_4] [i_5] [i_5] [i_5] [i_5]) ? (arr_2 [i_0] [i_1] [i_4]) : (arr_0 [i_1]))) % (((((arr_5 [9] [i_4] [i_5]) && var_9)))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    var_29 = 1;
                    var_30 = (min((arr_21 [i_7]), (min(562949953421311, (((-16383 < (arr_2 [i_7] [i_8] [i_9]))))))));
                }
            }
        }
    }
    var_31 = ((((((var_5 != var_3) ? ((var_15 ? -16383 : 16371)) : 1))) ? (~var_12) : -var_14));
    var_32 = var_4;
    #pragma endscop
}
