/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = (((((min(-6923, (min(var_14, var_7)))))) - (min(var_13, (((var_17 ? var_11 : var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = var_0;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_2] [i_0] [i_4 + 2] = var_4;
                                var_21 += (((max(var_5, var_16)) & ((((((arr_9 [i_0] [i_1 + 1] [i_0] [i_3] [i_0] [i_2] [i_0 - 1]) ? var_8 : var_13))) ? (((81 ? (arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_4 - 1]) : var_2))) : (arr_2 [i_0 + 1])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_22 -= (((((-1535083932 < 32219) || var_13)) && var_16));
                                arr_20 [i_0] [i_1 - 2] [i_5] [i_6] [i_5] = min((((var_9 < (arr_11 [i_0] [i_1 + 1] [i_5] [i_6 + 2] [i_7 - 1])))), (((var_11 ? (var_7 == var_1) : 49))));
                                var_23 = (max((arr_17 [i_0] [i_5] [i_5] [i_6 + 1]), (((arr_14 [i_0] [i_1 - 2] [i_6 + 2]) ? (arr_5 [i_0] [i_1 - 1] [i_5] [i_6 + 1]) : var_7))));
                                var_24 = ((((-12 >= (min(var_7, (arr_2 [i_7]))))) ? (((((min(var_4, var_17)) + 9223372036854775807)) >> (13 || var_2))) : (((var_14 + (!119))))));
                                var_25 = ((((var_6 ? ((var_0 ? var_9 : var_10)) : 5)) >= (((1179419413 != -3) ? var_16 : var_9))));
                            }
                        }
                    }
                }
                arr_21 [i_0] [i_0] [i_0] = (!(((~(min(var_15, var_12))))));
            }
        }
    }
    var_26 = var_17;
    var_27 -= var_6;
    #pragma endscop
}
