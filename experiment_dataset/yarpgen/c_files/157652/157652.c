/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 28206;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            arr_11 [i_4] = (--9);
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = -28207;
                        }
                        for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_5] [6] [i_1] [i_1] [i_0] = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_19 |= 32755;
                        }
                        arr_16 [i_1] [i_1] = 28206;
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = 16646144;
                            var_20 = (min(var_20, ((((-((min(0, 28206)))))))));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            arr_27 [i_2] [i_2] |= (min(8983982688504913172, (((3 ? var_10 : (15941 % 28207))))));
                            var_21 += (min((--1540206308760516982), (arr_26 [i_0] [7] [i_2])));
                        }
                        var_22 = (max(var_22, (min(((min((arr_22 [i_0] [i_2] [i_2] [9]), (min(1, (arr_2 [i_0])))))), (min((min(var_0, 9462761385204638443)), (((arr_5 [i_0] [i_0] [i_2] [i_6]) ? (arr_1 [i_2]) : (arr_9 [3] [i_1] [i_2] [i_2] [3] [i_2])))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_23 = (min((min((arr_3 [i_0] [i_9] [i_10]), -953827431)), (((arr_3 [i_9] [i_1] [i_0]) ? (arr_3 [i_0] [i_1] [i_2]) : (arr_3 [i_10] [i_9] [i_0])))));
                                var_24 = -179334917916078109;
                                arr_34 [i_9] [i_9] = (min((min(1, 2084757888100207495)), ((((var_0 ? var_8 : var_0))))));
                                arr_35 [i_0] [i_1] [i_1] [i_9] [i_9] [i_10] = (((~(arr_21 [i_0] [i_1] [i_1] [i_9] [i_10] [i_10] [9]))));
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_25 = (min((min(2649001759663736040, (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]))), (min((arr_21 [i_0] [i_1] [i_1] [i_2] [i_1] [i_2] [i_1]), var_0))));
                        arr_38 [i_2] [i_1] [i_2] [i_11] [i_11] [i_2] = -766635374;
                        arr_39 [i_2] = 27779;
                    }
                }
            }
        }
    }
    #pragma endscop
}
