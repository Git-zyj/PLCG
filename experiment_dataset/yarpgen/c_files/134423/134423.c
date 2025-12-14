/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = var_5;
                                var_14 = (min((-9223372036854775807 - 1), 714088632));
                            }
                        }
                    }
                    var_15 *= (max(96, (arr_11 [9])));
                    var_16 = ((!(arr_6 [i_0] [14] [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            {
                arr_18 [i_5] [i_5] [i_6] = (min((arr_14 [i_5] [4]), var_1));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_17 = var_10;
                                arr_26 [i_6] = (((714088607 ? var_0 : 3305344182)));
                            }
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    arr_29 [i_5] [i_6] [i_5] = 714088645;
                    var_18 = var_4;
                    var_19 = ((+((229 + ((var_6 ? (arr_28 [i_5] [i_5]) : (arr_19 [i_10] [i_6 - 1] [i_5])))))));
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                {
                    arr_32 [i_6] [9] [5] [i_6] = ((-714088622 && (((!40) && (arr_21 [i_5] [i_5] [i_5] [i_11])))));
                    var_20 ^= ((((var_8 || (arr_25 [i_5] [4] [12] [i_6 - 1] [10] [i_11]))) ? (((176 && (arr_19 [i_5] [i_6 + 1] [i_6 + 1])))) : ((max(215, var_4)))));
                    var_21 ^= (~-714088595);
                }
            }
        }
    }
    var_22 ^= ((((((var_5 >= 5) - 71))) ? var_10 : (max((max(-370887267, var_1)), ((var_6 ? var_3 : var_4))))));
    var_23 = (714088586 * 999124797);
    #pragma endscop
}
