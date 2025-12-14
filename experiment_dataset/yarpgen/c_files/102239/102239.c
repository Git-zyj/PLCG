/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_5 ? var_1 : var_3));
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_21 = (max(var_21, (min(-11309, 28841))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_22 += var_18;
                                var_23 += -28846;
                                arr_12 [11] [i_1] = -28838;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    arr_15 [i_1] [17] = var_10;
                    var_24 = (max(var_24, var_18));
                }

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_25 = (min(var_25, 1));
                    var_26 = (max(var_26, (((var_1 ? (max(-1347916631269684086, var_1)) : (((var_12 ? 28866 : 216))))))));
                }
                arr_19 [i_1] [18] = (((((211 ? 7020762178058431751 : var_18))) ? var_6 : 4294967288));
            }
        }
    }
    var_27 = var_11;
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_28 = ((((min(1, 8))) ? (((var_11 ? 199 : var_15))) : 1284919225569768233));
                        var_29 = (max((((1 ? 1 : 98))), ((14 ? 15427995893122217653 : 32763))));
                        var_30 = var_5;
                    }
                    var_31 = (((max(1, var_15)) ? ((-27431 ? 7015263443241038092 : 3136486618)) : (((min(206, var_9))))));
                    var_32 = 36;
                }
            }
        }
    }
    #pragma endscop
}
