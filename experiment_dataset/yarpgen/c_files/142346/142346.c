/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (arr_4 [i_1] [i_1]);
                var_16 = (min(var_16, var_7));
                var_17 = (max(var_17, (((~((88 ? (((1 >> (-30 + 36)))) : (max(-273061560, 13814843419495576405)))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 *= (((arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2]) >= ((max(1, (min(var_6, (arr_3 [i_2] [i_1]))))))));
                                var_19 = var_12;
                            }
                        }
                    }
                }
                arr_15 [i_1] = (((var_9 + (arr_7 [i_0 + 1] [i_1] [i_0] [i_0]))));
            }
        }
    }
    var_20 = (((!var_5) ? ((min(var_12, (((var_9 << (10561911036159252314 - 10561911036159252314))))))) : (((!3662347617) ? var_1 : var_15))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            {

                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_27 [i_5] [i_7] = (arr_20 [i_5] [i_8] [i_9]);
                                arr_28 [i_5] [i_6] [i_7] [i_9] [i_5] [i_6] [i_7] = ((~(((arr_22 [i_9] [i_5] [i_6 + 3] [i_5]) ? 64 : (arr_22 [i_5] [i_5] [i_5] [3])))));
                                var_21 = ((!(25 >> 1)));
                            }
                        }
                    }
                    arr_29 [19] [19] [i_7] = -29717;
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    arr_34 [i_5] [i_5] [i_5] = ((((((arr_4 [i_5] [i_6]) ? 14241 : (arr_30 [i_5] [i_5] [i_5] [14])))) ? 3662347617 : ((((arr_25 [i_6 + 2] [i_6 - 3] [i_6] [i_6 + 2] [i_6 - 2]) ? (arr_25 [i_6 + 2] [i_6 - 3] [i_6 - 2] [i_6 + 2] [i_6 - 2]) : (arr_25 [i_6 + 2] [i_6 - 3] [i_6 - 2] [i_6 + 2] [i_6 - 2]))))));
                    var_22 = 10561911036159252314;
                }
                var_23 = 121;
            }
        }
    }
    var_24 = (min(var_24, var_2));
    #pragma endscop
}
