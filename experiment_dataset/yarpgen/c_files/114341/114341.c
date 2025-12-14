/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((4294967295 ? -441138796 : 1)) & 21305))) > ((var_8 ? var_7 : 14161796217920944579))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            arr_15 [10] [i_2] [i_2] [i_2] [i_0] [i_0] = (arr_2 [i_0]);
                            arr_16 [i_0] [i_0] [i_4] [i_3] [i_4] [i_1] = ((2754779328 > ((((arr_1 [i_0]) | ((max(-27400, (arr_14 [i_0] [i_1] [i_2] [4] [i_0])))))))));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_13 = (arr_7 [i_0] [i_0] [7]);
                            arr_20 [i_0] [i_3] [i_2] [i_0] = ((-(arr_9 [i_0] [i_1] [i_2] [i_3] [9])));
                            var_14 = (min(var_14, ((((arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]) % (arr_12 [i_0] [i_2] [i_0]))))));
                        }
                        var_15 = (arr_18 [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_23 [i_0] [16] = (((((2754779334 ? -86 : 27304))) ? -6352 : ((((-17810 / (arr_14 [i_6] [i_2] [i_1] [i_0] [i_0]))) / (arr_8 [i_1])))));
                        var_16 = (max(var_16, 17809));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [i_0] [i_7] [i_7] [i_7] [i_0] = (58381 <= -17806);
                                arr_29 [i_0] [i_1] [i_2] [i_7] [i_2] &= (arr_12 [i_1] [i_2] [i_1]);
                                var_17 = (min(var_17, 252));
                                var_18 = (((((arr_13 [i_0] [i_8] [i_2] [i_0] [i_8] [i_2] [i_0]) ? (arr_27 [i_0]) : 2754779334))));
                            }
                        }
                    }
                    var_19 = (arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [17]);
                    arr_30 [i_0] = 5896152161050027764;
                }
            }
        }
    }
    var_20 -= ((28 != (max(2754779321, 17810))));
    var_21 = ((var_0 ? ((74 ? var_9 : var_10)) : (((((5 >> (1540187961 - 1540187930)))) ? var_1 : -var_10))));
    var_22 = (max(var_22, var_7));
    #pragma endscop
}
