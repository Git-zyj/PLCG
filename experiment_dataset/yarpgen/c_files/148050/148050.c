/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_18 = (max(var_18, (((!(arr_5 [i_0 - 1] [i_1] [i_2 + 2]))))));
                    var_19 &= -var_14;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = (-32767 - 1);
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (!var_12);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_18 [12] [i_0] [i_0] [i_0] = var_0;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_20 = (max((min(9223372036854775807, 65535)), 0));
                                arr_23 [i_0] [10] [i_0 + 1] [i_0] [i_0] [11] [i_0] = ((-127 - 1) && 1);
                                var_21 = (arr_5 [i_6] [i_6] [i_6]);
                                var_22 = ((((((1 ? 25797 : var_17)) >= ((var_10 ? 15682 : -349212549)))) ? (max(-var_5, 15682)) : ((((max((arr_10 [i_1] [i_0]), var_6)) != ((min(1, 0))))))));
                            }
                        }
                    }
                }
                var_23 += ((((min((max(25797, -25798)), 124))) | (((var_11 && (((-32767 - 1) && (arr_17 [i_0] [7] [i_0] [i_0 + 1]))))))));
            }
        }
    }
    var_24 = (((((25013 + (!-29)))) ? (((~0) ? -21096 : -var_5)) : ((max(var_4, -1451733900)))));
    #pragma endscop
}
