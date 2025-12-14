/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(((var_17 ? 3386052839 : var_14)), var_17))) ? (((-((min(var_7, 240)))))) : var_18));
    var_21 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_22 = (max(var_22, ((~(((arr_0 [i_0 - 1] [i_0]) ? (arr_4 [i_0 - 1] [i_1 - 1] [i_1 - 1]) : (((min((arr_1 [2]), -103))))))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_10 [i_0 - 1] [i_0] [i_2] = var_17;
                    var_23 ^= ((~(min((((281474439839744 ? -32739 : var_11))), (min((arr_8 [i_0] [i_1 + 1] [i_2] [i_2]), 14249))))));
                    var_24 = var_0;
                    var_25 = (max(var_25, var_3));
                }
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    var_26 *= -32739;
                    arr_13 [i_0] [i_0] [i_3] [i_3] = (((((-var_15 == ((((arr_4 [i_3] [i_3] [i_3]) ? var_14 : var_13)))))) <= (min(var_17, -var_9))));
                }
                var_27 = (max(var_27, var_8));
                var_28 = min(32739, (((32754 == ((1 ? 0 : var_18))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] = 69;
                            var_29 = (min(((max(29501, (26140 / 111)))), (min(var_13, 18446462599269711881))));
                            var_30 = (max(var_7, (arr_2 [i_0] [i_1 - 1])));
                            var_31 = (min(((-(max(-25192, (arr_16 [i_0] [i_1 - 1] [i_0] [i_4] [i_0]))))), ((62662 ? ((min(41185, (arr_1 [i_0])))) : 1))));
                        }
                    }
                }
            }
        }
    }
    var_32 = (((((1 < ((var_11 ? var_7 : var_12))))) | 59744));
    #pragma endscop
}
