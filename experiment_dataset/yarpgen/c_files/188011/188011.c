/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max(((1723130024 ? 1 : var_3), ((1447805508 << (1723130038 - 1723130038)))))));
    var_16 = (max(-var_4, var_10));
    var_17 = ((min((var_3 & 255), var_4)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_18 = (min(2571837278, 2571837258));
                                var_19 = (arr_7 [i_3] [i_2] [i_1]);
                                var_20 = (min((((var_3 / (arr_8 [i_0] [i_0] [i_4])))), -114588061));
                                arr_16 [i_4] [i_2] [i_3] [i_2] [i_1] [i_2] [i_0] = (max((((min(147, (arr_12 [14] [i_1] [i_2] [i_3]))))), var_10));
                            }

                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                            {
                                var_21 = (max(var_21, 127));
                                arr_21 [i_0] [i_3] [i_3] [i_1] [i_5] &= var_4;
                                var_22 &= var_0;
                            }
                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
                            {
                                var_23 ^= -1;
                                arr_25 [i_0] [i_1] [i_2] [i_0] [i_2] = (arr_11 [i_2] [i_2] [i_0] [i_3] [i_6] [i_2]);
                                var_24 = ((!(arr_4 [i_2])));
                            }
                            /* vectorizable */
                            for (int i_7 = 2; i_7 < 21;i_7 += 1) /* same iter space */
                            {
                                var_25 &= (arr_8 [i_7 - 2] [i_7] [i_3]);
                                var_26 *= (~3439);
                            }
                            var_27 = ((-(((!(arr_4 [i_0 - 1]))))));
                        }
                    }
                }
                var_28 |= (min((max((arr_11 [i_1] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_1]), var_2)), -var_14));
            }
        }
    }
    #pragma endscop
}
