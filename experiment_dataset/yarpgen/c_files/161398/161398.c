/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = ((((((max(1, 113))))) ? var_7 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] |= (0 * 1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [11] [i_1] [i_1] [i_0] = ((1 - (arr_9 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3])));
                            var_18 ^= (arr_2 [2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1] [i_4] [i_5] [i_0] [i_0] = ((~(min(2729339025063262981, 1))));

                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_19 = (min(var_19, ((max((((max(var_10, 12826)))), -var_7)))));
                                arr_24 [i_0] [i_1] [i_4] [i_4] [i_0] [i_6] [i_6] = var_15;
                                var_20 = (max((((~229) ? ((3527892871121628370 ? var_14 : (arr_14 [i_0] [i_4] [i_6]))) : 56858)), (~8668)));
                            }
                            for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
                            {
                                var_21 = (min(((((((49132 && (arr_3 [i_1] [i_0])))) >> ((((max(229, (arr_6 [i_0] [i_1] [i_1] [i_0])))) - 217))))), (min(var_4, (!-122)))));
                                arr_29 [i_0] = ((var_4 % ((min(((~(arr_15 [i_0] [i_0] [i_0]))), var_10)))));
                            }
                            for (int i_8 = 2; i_8 < 22;i_8 += 1) /* same iter space */
                            {
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((((!(arr_7 [i_0] [i_4] [i_4])))) >> (((~42950) + 42954))))) & (max(var_12, (arr_11 [i_0] [i_0] [i_0] [i_0])))));
                                var_22 = (arr_30 [i_0] [17] [1] [1] [i_0] [1] [17]);
                                var_23 = (max(var_23, ((((((arr_3 [i_0] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_0] [i_1]))) << (((((arr_3 [16] [i_1]) * var_7)) - 915058496)))))));
                            }
                            var_24 = (!-var_11);
                        }
                    }
                }
                arr_33 [i_0] [i_1] [i_1] = (max((min(3527892871121628370, 1)), var_6));
                arr_34 [i_0] [i_0] [i_1] = ((~(arr_28 [i_0] [i_1] [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
