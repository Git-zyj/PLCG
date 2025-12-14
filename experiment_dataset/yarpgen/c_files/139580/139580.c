/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_7 >= (!var_15)));
    var_18 = (min(var_18, ((max(var_16, (!-var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] = (arr_5 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] = var_10;
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_0] [i_4] &= ((((min((max((arr_13 [i_3] [i_3]), var_6)), ((((arr_5 [i_0] [i_0]) ? var_4 : (arr_2 [i_0]))))))) ? (((((((((arr_12 [i_3] [i_3] [i_2]) || (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]))))) != (arr_9 [i_2] [i_2] [i_3]))))) : var_9));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, (((-(max(0, -1417872076218568314)))))));
                    arr_19 [i_5] = (max((max(var_6, 13088296997726695243)), ((~(min((arr_1 [i_5]), (arr_17 [i_5] [i_1] [i_5])))))));
                    var_20 |= (((arr_17 [i_1] [i_1] [i_5]) < (43809 == 13088296997726695259)));
                    arr_20 [i_0] [i_5] = (+((-((var_16 ? (arr_13 [i_0] [i_5]) : (arr_16 [i_5] [i_1]))))));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_21 *= (arr_22 [i_0] [i_1] [i_6]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_27 [i_8] [i_8] [i_8] [i_8] [i_8] = (arr_25 [i_8] [i_6] [i_6] [i_1] [i_0]);
                                arr_28 [i_8] [i_1] [i_1] [i_7] [i_8] = max(4162962166, (arr_24 [i_1]));
                                arr_29 [i_8] [i_1] [i_6] [i_7] [i_8] = (~(max((arr_22 [i_0] [i_1] [i_0]), (arr_17 [i_8] [i_1] [i_8]))));
                                arr_30 [i_8] = (min(((13088296997726695232 << (1285168089521881237 - 1285168089521881183))), (arr_8 [i_8])));
                            }
                        }
                    }
                }
                var_22 = (min(var_22, ((min((max(7157531767944597644, 5358447075982856373)), ((((arr_10 [i_0] [i_1] [i_0] [i_1]) ? var_9 : -var_13))))))));
            }
        }
    }
    #pragma endscop
}
