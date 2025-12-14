/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((min(-104, 65520)) ? 111 : 104))));
    var_12 = ((-((max(103, var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_3] [i_2] [i_1] [i_0 + 1] = -105;
                        var_13 -= (~-104);

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_13 [i_4] [i_4] = ((!(arr_7 [i_2] [i_2 - 1] [i_2] [i_2] [i_2])));
                            var_14 = (((var_9 % var_5) ? 104 : ((var_3 % (arr_4 [i_0 + 2] [i_1] [i_2])))));
                            arr_14 [i_1] [i_2 - 1] [i_3] = (((arr_5 [i_0] [i_1] [i_2 + 1] [i_3]) ? 60 : -73));
                            var_15 = ((!(arr_1 [i_2 - 1] [i_1])));
                        }
                        for (int i_5 = 3; i_5 < 24;i_5 += 1)
                        {
                            var_16 = (!-2);
                            arr_19 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_3 - 2] [i_5] = var_9;
                        }
                    }
                    for (int i_6 = 2; i_6 < 24;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [i_0] [i_7] [i_7] [i_7] = (((181 <= 83) - (var_7 | var_0)));
                            var_17 = (min(var_17, ((((((arr_6 [i_0] [i_0] [i_6 + 1] [i_7]) == (arr_20 [i_0] [i_0] [i_2] [i_0] [i_6 - 1] [i_7]))) ? (arr_21 [i_0]) : (arr_12 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0]))))));
                        }
                        for (int i_8 = 3; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_1] [i_0] [i_1] [i_0] [i_8] [i_8 - 1] = (((arr_6 [i_0 + 1] [i_8 - 3] [i_8 - 3] [i_6 - 2]) ? (arr_6 [i_0 - 1] [i_8 - 3] [i_2] [i_6 + 1]) : var_7));
                            arr_28 [i_1] = ((~(arr_0 [i_0 - 1] [i_2 + 1])));
                        }
                        for (int i_9 = 3; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_18 = 175;
                            arr_32 [i_9] [i_9] [i_2] [i_6 - 1] [i_2] = ((var_10 + (((-56 == (arr_16 [i_2]))))));
                            arr_33 [i_0] [i_9] = 112;
                        }
                        arr_34 [i_6] [i_1] = (~(31 != 29517));
                        var_19 = -var_8;
                        var_20 = (max(var_20, (((!(arr_15 [i_6] [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                var_21 = (((-256247261 & (arr_6 [i_11] [i_11] [i_11] [i_11]))) / (((65507 ? var_1 : 17))));
                                var_22 -= arr_8 [i_0] [i_0] [i_0] [i_0] [i_0];
                                arr_39 [i_0] [i_0] [i_2 - 1] [i_10] [i_11] = ((-((1772049634 ? (arr_6 [i_0 + 1] [i_1] [i_1] [i_10]) : 18446744073709551599))));
                            }
                        }
                    }
                }
                arr_40 [i_0] [i_1] [i_0] = (max((min(((min(var_6, var_9))), (~var_8))), ((min((!1624671259), 114)))));
            }
        }
    }
    #pragma endscop
}
