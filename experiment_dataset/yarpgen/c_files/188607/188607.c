/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_8 ? (((((var_11 ? var_1 : var_3))) ? (((-6678519131817152173 ? var_13 : var_7))) : ((var_10 ? 6678519131817152178 : 13399570754263716110)))) : (!var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_15 = (arr_10 [i_0] [i_2] [i_0]);
                        var_16 = (max(var_16, (arr_0 [i_0] [i_2])));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_17 = 185;
                        var_18 = (max(var_18, ((((~(((arr_1 [i_4]) ? 140737488355327 : (arr_1 [i_4])))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 -= ((((!(arr_17 [i_0] [i_0] [i_2] [i_2] [i_5] [i_6])))));
                                var_20 += (((((~(arr_7 [i_2] [i_2] [i_1] [i_2])))) ? (arr_3 [i_5]) : 115));
                                var_21 = ((+(min((~var_7), (((!(arr_5 [i_0] [i_1]))))))));
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_6] = (((~-6678519131817152144) <= (((var_7 ? var_13 : (arr_13 [i_0] [i_1] [i_0] [i_5] [i_0]))))));
                            }
                        }
                    }
                    var_22 = -6678519131817152185;

                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        var_23 += (((~var_3) && ((!(arr_11 [i_0] [i_0] [i_0])))));
                        arr_22 [i_0] [i_0] [i_0] [i_0] = var_13;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
                        {
                            var_24 = (max(var_4, 250));
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = -var_3;
                        }
                        for (int i_10 = 3; i_10 < 9;i_10 += 1) /* same iter space */
                        {
                            var_25 = ((118 / ((var_10 ? var_0 : 4294950912))));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((arr_24 [i_10 - 3] [i_0] [i_10 - 1] [i_0] [i_10]) ? (var_2 - var_9) : (((arr_29 [i_1]) ? (arr_29 [i_0]) : var_13))))) ? (((((~var_11) <= ((((!(arr_14 [i_0] [i_0] [i_0] [i_0]))))))))) : (((var_8 ? -6678519131817152144 : 63)))));
                            var_26 = ((!(((((4 ? 127 : var_12))) && 238))));
                        }
                        for (int i_11 = 1; i_11 < 9;i_11 += 1)
                        {
                            var_27 = ((15 ? ((((!(-9223372036854775807 - 1))))) : var_12));
                            arr_34 [i_0] [i_0] = ((arr_9 [i_0] [i_0]) ? (((arr_9 [i_0] [i_0]) ? (arr_9 [i_0] [i_1]) : var_12)) : ((((arr_9 [i_2] [i_11 - 1]) | (arr_9 [i_1] [i_1])))));
                        }
                        for (int i_12 = 3; i_12 < 8;i_12 += 1)
                        {
                            var_28 -= ((((!(arr_3 [i_12 + 1]))) ? (((arr_3 [i_12 - 2]) ? (arr_15 [i_12 + 1] [i_12] [i_12 - 3] [i_1] [i_0]) : (arr_15 [i_12 + 1] [i_12] [i_12 - 2] [i_8] [i_0]))) : (((arr_15 [i_12 - 1] [i_12] [i_12 - 2] [i_12] [i_12]) ? var_8 : (arr_15 [i_12 + 2] [i_12] [i_12 - 1] [i_8] [i_2])))));
                            arr_38 [i_12] [i_0] [i_2] [i_2] [i_0] [i_0] = (max(((17135019463002199498 ? (-127 - 1) : (min((arr_26 [i_12] [i_12 + 1] [i_12] [i_0]), (arr_27 [i_0] [i_1] [i_2] [i_2] [i_8] [i_2]))))), (~var_0)));
                        }

                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            var_29 = (arr_11 [i_0] [i_1] [i_8]);
                            var_30 = ((((var_13 / (arr_9 [i_8] [i_0]))) != (((-(arr_16 [i_0] [i_1] [i_2] [i_8] [i_13] [i_13]))))));
                        }
                        var_31 = (max(var_31, (!var_6)));
                    }
                }
            }
        }
    }
    var_32 = 55;
    #pragma endscop
}
