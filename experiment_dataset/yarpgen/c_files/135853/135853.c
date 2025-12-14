/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((max(var_0, 212246520)))));
    var_15 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((~((~(arr_4 [i_2] [i_1])))));
                    arr_10 [i_0] [i_0] [i_1] [i_1] = (-2147483647 - 1);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            var_16 = ((~(-127 - 1)));
                            var_17 |= (~-212246521);
                            var_18 = 212246500;
                            var_19 = 0;
                            var_20 &= -212246520;
                        }
                        for (int i_5 = 3; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_1] [i_1] [10] [i_1] [i_2] = (min(1, -100));
                            arr_20 [i_0] [i_1] [i_2] [i_1] [i_5] = ((-((~(arr_12 [i_5])))));
                        }
                        var_21 = (max(1, 212246520));
                        var_22 += ((!(arr_13 [8] [i_1] [i_2] [i_2] [i_3])));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_23 += ((!((((-212246517 ? (arr_8 [i_2] [i_6] [12] [i_6]) : (arr_22 [i_0] [i_1] [i_2] [i_2] [i_6])))))));
                            var_24 = ((((((arr_16 [1] [i_1] [17] [i_1] [i_0]) || (arr_1 [i_0 - 2])))) > 125));
                            var_25 = ((-(var_5 * 0)));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_26 = (((((3225422694 ? 43924 : var_2))) ? ((91 ? 1 : -5)) : (1 <= 0)));
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_1] = -8395637459083392241;
                        }
                        arr_28 [i_1] [i_1] [i_1] [i_2] [i_1] [i_3] = 33554431;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_27 -= (((((-((120 ? var_11 : var_3))))) ? var_6 : (((min(1, (arr_14 [22] [i_2] [i_2])))))));
                        var_28 = (arr_1 [i_0 + 1]);
                        var_29 &= ((!1) <= 1);
                        arr_31 [i_1] = (~(((0 | 100) << ((((~(arr_7 [i_0] [i_0] [i_0]))) + 77)))));
                    }
                    var_30 = (((17860758302184988181 == -79) ? ((-1 % ((max(0, 1))))) : ((((arr_6 [i_0] [i_0]) ? var_5 : -78)))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_31 = ((~(arr_30 [i_0 + 1] [i_0 - 1] [i_0 + 1])));
                        var_32 = (min(var_32, ((((arr_21 [i_0] [i_0] [i_2] [i_9] [i_9]) >> (-110 + 130))))));
                        var_33 = var_1;
                        var_34 = (((((var_11 > (arr_14 [i_0] [i_0] [i_0 + 1])))) > ((1 ? -79 : 1))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
