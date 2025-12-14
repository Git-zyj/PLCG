/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_8 / (((var_11 ? (max(529909750, var_11)) : 98)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (min(var_3, (((arr_0 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))));
        var_17 = (arr_3 [i_0] [i_0]);

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_1] [i_0] = ((((-500511551 ? (((arr_3 [i_0] [i_1]) ? (arr_2 [i_0] [i_1]) : var_6)) : ((((arr_1 [i_0]) >= 43551))))) + -3133));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_18 = (max(var_18, -8064));
                            var_19 = ((max((arr_11 [i_3] [i_1] [i_3 - 1] [i_3 - 1]), (((500511551 < (-9223372036854775807 - 1)))))));
                        }
                    }
                }
            }
            arr_15 [i_0] [i_0] = var_11;
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            var_20 ^= (((((((((var_9 && (arr_12 [i_5 - 1] [i_0] [i_5 - 1] [i_0] [i_0] [i_0]))))) < (arr_17 [i_0] [i_5] [i_0])))) & 74467410));
            arr_19 [i_0] = (max((((arr_17 [i_0] [i_5] [i_0]) >> (-3765057546 - 529909687))), -43559));

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_23 [i_0] [i_0] [i_0] [i_6] = var_8;
                var_21 = (((arr_0 [i_5 - 1]) ? ((max((arr_0 [i_5 - 1]), (arr_0 [i_5 + 1])))) : (arr_0 [i_5 - 1])));
            }
            for (int i_7 = 4; i_7 < 14;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_22 = (max(var_22, var_15));
                            var_23 &= (min((min(var_3, (min((arr_3 [i_7] [i_9]), (arr_27 [i_0] [i_5 - 1] [i_7] [i_8] [i_9] [i_8]))))), ((((((arr_1 [i_7 - 2]) && 119)) && (!var_12))))));
                        }
                    }
                }
                var_24 ^= (arr_14 [i_0] [i_5 - 1] [i_5 + 1] [i_7]);
                var_25 = var_12;
            }
            /* vectorizable */
            for (int i_10 = 4; i_10 < 14;i_10 += 1) /* same iter space */
            {
                var_26 = (max(var_26, var_13));
                var_27 = (arr_5 [i_0]);
            }
        }
        arr_37 [i_0] = ((-(max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_5))));
    }
    #pragma endscop
}
