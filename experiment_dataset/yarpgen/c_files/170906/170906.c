/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((14843710953152078335 ? 524287 : 0));
                    arr_10 [i_0] [i_0] [1] [i_1] = (max((arr_7 [1] [1] [i_2]), (arr_8 [i_0] [i_0] [i_0])));
                    var_13 -= (!1);
                    arr_11 [i_1] = ((((((-127 - 1) ? ((((arr_1 [i_0]) ? (arr_8 [i_2] [i_1] [5]) : 1))) : (arr_4 [i_0] [i_1] [i_1])))) && ((!((min((arr_2 [6] [i_1 - 1]), (arr_4 [i_0] [i_1 + 1] [9]))))))));
                }
            }
        }
    }
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                var_15 = (max(var_15, var_4));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_16 = (arr_20 [i_3] [i_4] [i_3]);
                    var_17 += 84;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_18 = (!945019627892801227);
                                var_19 = (!524269);
                                var_20 = ((!3) && ((((arr_15 [i_7]) ? (arr_18 [i_3]) : 11324166023811978820))));
                                var_21 = (((arr_24 [i_4] [i_6] [i_7 + 1] [8] [i_7] [i_7 + 2]) ? (arr_24 [1] [1] [i_5] [i_7] [i_7 - 1] [i_7 - 1]) : -1));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_29 [i_5] [i_8] &= ((-1 ? 1878695892 : 1));
                        arr_30 [i_3] [i_4] [i_3] [i_8] [i_3] [i_8] = (arr_25 [i_8] [i_8] [i_5] [i_4] [i_4] [i_4] [i_3]);
                        arr_31 [i_3] [i_3] [i_3] [i_5] &= (((arr_16 [i_4] [i_4]) + (arr_25 [i_3] [1] [i_5] [i_8] [i_5] [i_4] [i_4])));
                        var_22 = (arr_25 [i_8] [3] [i_4] [i_4] [i_3] [i_3] [i_3]);
                    }
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    var_23 &= ((4294442997 ? (max(((-11030 ? 8 : 1107456399)), (arr_13 [i_3] [i_3]))) : 1));
                    arr_34 [i_3] [i_4] [i_9] [i_4] = ((((((1 >> 0) ^ 16164327967264409746))) ? (max(((-(arr_19 [15] [1] [i_9] [i_4]))), ((min(134217727, (arr_27 [i_3] [i_4] [i_9] [i_9] [i_4] [i_4])))))) : ((((-2 + 2147483647) << (arr_27 [i_3] [3] [i_9] [i_3] [i_3] [i_4]))))));
                }
                var_24 += ((-((var_10 % (-127 - 1)))));
            }
        }
    }
    #pragma endscop
}
