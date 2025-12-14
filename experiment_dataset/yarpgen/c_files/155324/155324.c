/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                            {
                                var_16 = ((var_15 ? ((max(var_2, var_7))) : (((var_8 ? -94 : 1)))));
                                arr_12 [i_3] [i_3] [i_2] [i_0] = ((((14 ? (((88 ? var_10 : 26559))) : (arr_7 [i_0] [i_0] [i_0] [i_0]))) - ((((arr_4 [i_1]) + var_14)))));
                                var_17 = ((((min((min(var_12, var_14)), var_6))) ? var_7 : -4294967290));
                            }
                            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                            {
                                var_18 = (max(var_11, var_13));
                                var_19 = ((+((var_0 ? (48 || var_3) : var_12))));
                            }
                            for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                            {
                                var_20 = 1;
                                arr_17 [i_0] [i_0] = ((~(arr_4 [i_0])));
                                var_21 = var_15;
                            }

                            for (int i_7 = 1; i_7 < 14;i_7 += 1)
                            {
                                var_22 = var_13;
                                var_23 = min((+-2001010539), (max(8566156373397242785, (var_0 * var_10))));
                                var_24 = (((var_8 < -1855320355) ? ((0 ? ((107 ? var_1 : var_2)) : (var_13 + -113))) : (((var_15 != (((max(31, var_4)))))))));
                                var_25 = (max(var_25, (4095 <= var_11)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_26 = (max((max((max(var_0, -1939254260)), var_13)), ((max(var_9, var_2)))));
                            var_27 = ((1 ? (max((arr_6 [i_8 + 2] [i_9 + 1] [i_9 - 1] [i_9]), var_6)) : ((var_3 ? 1 : (arr_6 [i_8 + 4] [12] [i_9 + 3] [i_9 + 1])))));
                            var_28 = (max(var_28, (((((arr_21 [2] [i_9 + 1]) ? ((var_9 ? var_14 : var_14)) : ((26559 ? var_12 : var_1))))))));
                        }
                    }
                }
                var_29 = ((255 || ((max(-1, var_11)))));
                var_30 = ((((min(var_6, (arr_16 [i_0] [i_1])))) ? (((var_14 ? (max(1, var_13)) : 1935307305))) : -3621028570392768403));
            }
        }
    }
    var_31 = ((~(max(var_2, ((var_0 ? var_8 : var_4))))));
    #pragma endscop
}
