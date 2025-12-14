/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_1 [i_1 + 2]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = ((~(max(6121455234787686238, 32344))));
                                arr_12 [i_2] [19] [1] [1] [1] [1] [i_2] = ((~((((max(493080802, (arr_2 [i_0 - 3] [i_2]))) <= var_0)))));
                                var_17 -= ((((max(0, var_1))) >= ((-(-3233327011626985112 != -107)))));
                                var_18 = (min(var_18, (((((!(arr_10 [i_0 - 2] [i_1 + 2] [i_2] [i_2] [i_4]))) ? var_7 : ((max((((var_15 - (arr_6 [i_0 - 1] [i_0])))), (max(-3233327011626985117, (arr_6 [i_3] [i_4 - 2])))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 ^= ((((4 - (-2147483647 - 1))) >> (((max(((-3271100885083768176 ? var_10 : -652278292)), (~var_14))) - 16131180078300918676))));
    var_20 = (-1266806673 - var_7);
    var_21 += (max(((((max(var_15, var_2))) ^ var_2)), ((min(var_13, (var_15 - var_14))))));
    var_22 = var_11;
    #pragma endscop
}
