/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_14;
    var_18 = (((((var_14 ? var_16 : ((max(var_13, 188)))))) ? (((var_6 / var_11) >> (((~56) + 60)))) : (min((var_0 % 1), (~var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_19 = 1;
                    arr_9 [i_1] [i_1] [i_1] = 40304;
                    var_20 = var_15;
                    arr_10 [2] [i_1] [2] = (((max((min((arr_6 [i_0]), 64)), ((min((arr_5 [i_1]), 255)))))) ? ((max((181 >= -1590062516), -90))) : ((-(255 & var_4))));
                }

                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_21 = (max(var_21, 16384));
                    arr_13 [0] [i_0] [i_0] &= 73;
                    var_22 = (((arr_7 [2] [i_1] [i_3]) ? var_2 : (arr_7 [i_0] [i_1] [i_3])));
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, 7233));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_24 ^= (((min((arr_11 [i_1] [i_1] [i_5]), 555891005)) % ((max(((min(-90, 12))), ((-(arr_7 [i_0] [i_5] [i_0]))))))));
                                arr_20 [i_0] [i_1] [i_1] [i_5] [i_6] = (min(11, ((129 ? (max(58303, (arr_15 [i_0] [i_6] [i_4] [i_0]))) : 0))));
                            }
                        }
                    }
                    arr_21 [i_1] [i_4] [i_4] = var_9;
                    var_25 += ((+((max((arr_8 [1] [i_1]), 252)))));
                    arr_22 [i_1] = (((min((arr_12 [i_0] [i_0] [i_1] [i_0]), var_11)) * ((-99 / (arr_12 [i_0] [i_1] [i_1] [7])))));
                }
                arr_23 [i_1] [i_1] = (arr_3 [i_0]);
            }
        }
    }
    #pragma endscop
}
