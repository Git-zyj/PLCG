/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_16;
    var_18 ^= ((var_12 ? (!9022055461654991060) : 218));
    var_19 += 218;
    var_20 = ((~(~var_3)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((((!(arr_4 [i_1 + 4] [i_1 + 3] [i_1])))));
                var_21 += ((((~var_15) ? (max(var_6, (arr_1 [i_0] [i_0]))) : (((var_14 ? (arr_4 [i_0] [4] [i_0]) : var_5))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_22 *= ((+(min((((arr_1 [i_0] [i_1]) ? 60352 : 46781)), (arr_0 [i_0 + 1])))));
                    var_23 = ((((var_1 <= (arr_4 [i_0 - 2] [i_0 + 1] [i_1]))) ? (((((min((arr_7 [i_1] [i_1]), var_14)) == (max(var_16, var_14)))))) : ((4294967294 ? 60352 : (~4303541839433603753)))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_24 = ((((((arr_9 [1] [i_1] [i_3]) ? var_12 : var_15))) ? ((-((max(var_0, var_3))))) : var_15));
                    var_25 = (max((~var_4), 60329));
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_26 += (((!69) ? (((((5184 ? var_8 : var_13))) ? 2565531830 : -var_0)) : ((((arr_13 [i_1 - 1] [i_1] [i_5] [i_1 - 2]) ? (arr_18 [i_0 + 1] [i_0] [i_4] [2] [i_1] [i_1] [i_1 - 2]) : (arr_18 [i_0 - 2] [i_0 - 2] [i_0] [4] [i_1 + 1] [i_1] [i_1 + 4]))))));
                                var_27 -= (arr_4 [i_1] [i_1] [i_5]);
                            }
                        }
                    }
                    var_28 = ((((((arr_9 [i_1 + 3] [i_1 + 3] [i_1 + 3]) ? var_15 : (arr_6 [i_1] [i_1] [i_1 + 3])))) ? ((7826716349258160459 ? 0 : (((0 ? 1 : 1))))) : (arr_4 [3] [6] [i_1])));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    arr_22 [i_0 + 1] [i_1] = (((((((arr_21 [7] [i_1] [i_1] [i_7]) & var_2))) ? var_4 : -var_8)));
                    arr_23 [i_1] [1] [i_7] = ((!(((~(arr_3 [i_0 - 1] [i_0 - 1] [i_0]))))));
                }
                arr_24 [5] [i_1] = (arr_14 [i_1] [i_1]);

                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_29 ^= var_3;
                    var_30 = (((((((max(var_6, (arr_21 [i_0] [i_0] [i_1] [i_8])))) ? (~var_7) : (~var_15)))) ? (~var_0) : (((!var_14) ? ((~(arr_6 [i_1] [8] [i_8]))) : (var_6 + var_4)))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            {
                                var_31 = (max(var_6, (~65535)));
                                var_32 = (((3024114080 ? 1 : 24856)));
                            }
                        }
                    }
                    var_33 &= (!-var_5);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            {
                                var_34 *= var_3;
                                arr_36 [i_1] [i_1] [i_1] [i_11] [i_11] = (((((-(arr_7 [i_1] [i_0 - 2])))) ? ((var_15 ? var_9 : var_8)) : var_3));
                                var_35 = (~-1);
                                arr_37 [6] [i_1] [5] [i_11] [i_12] [i_11] = (var_7 - 609967075);
                                var_36 = ((((!(((var_4 ? var_7 : (arr_28 [1] [1] [i_8] [i_1]))))))));
                            }
                        }
                    }
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_37 -= (!(((var_4 ? (arr_13 [i_0] [i_0 - 1] [i_0] [i_1 + 4]) : (arr_19 [i_0 - 2] [i_1 - 2] [i_1 + 4])))));
                    var_38 += ((~(arr_15 [i_0] [i_0] [i_0 - 1] [i_0] [i_13] [0])));
                    var_39 = (((-((var_7 ? var_15 : var_9)))));
                }
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    var_40 = (((!(((var_2 ? var_11 : 27466))))));
                    var_41 *= ((var_14 ? (arr_1 [i_0 - 1] [i_1 - 3]) : (arr_13 [i_0 - 1] [i_1 - 3] [i_0] [i_1 - 1])));
                    var_42 = 63735;
                }
            }
        }
    }
    #pragma endscop
}
