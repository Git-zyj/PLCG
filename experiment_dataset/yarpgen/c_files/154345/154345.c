/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_12 [i_0 - 3] [i_1 - 2] [i_2 + 2] [i_3] [i_1] = (((arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1]) != (arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 2])));
                            var_15 += (((arr_1 [i_3 - 3]) ? (((!(arr_10 [i_4] [i_1] [i_2 + 1] [i_3 - 2] [i_4])))) : 41045));
                            arr_13 [i_4] [i_1] [i_2 - 1] [i_1] [i_0 - 3] = 41045;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_17 [i_1] [i_3 - 2] [i_2 - 1] [i_1] = ((!(arr_3 [i_0 - 2] [i_1 + 2])));
                            var_16 = (max(var_16, (((((-(arr_11 [i_0 - 3] [i_1 - 1]))) & (arr_8 [i_0 - 3] [i_1 + 1] [i_2 + 2] [i_3 - 1]))))));
                        }
                        var_17 = (((8960853574707956149 == 40481) + (((!11520) ? var_4 : (arr_0 [i_0 - 3])))));
                    }
                    for (int i_6 = 3; i_6 < 23;i_6 += 1)
                    {
                        arr_22 [i_0 + 1] [i_1] [i_2 + 2] [i_6 + 1] = ((((((862634934 < (arr_3 [i_2 + 2] [i_6 + 1]))))) ? ((max((arr_2 [i_0 - 3] [i_6 - 1]), (arr_7 [i_0 + 1] [i_2 + 2] [i_6 - 2])))) : (max((arr_16 [i_0 - 2] [i_1 + 2] [i_1] [i_1] [i_2 + 2] [i_6 - 3]), (arr_0 [i_0 - 3])))));
                        var_18 = (~var_2);
                        var_19 = (max(var_19, ((((((((arr_9 [i_2 - 1] [i_1 - 2]) - (arr_19 [i_1 - 2] [i_2 - 1] [i_6 - 2]))) + 2147483647)) >> var_12)))));
                        var_20 *= (max(-38461, (((arr_18 [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_6 + 1]) & (arr_15 [16])))));
                        var_21 = 12253268276668546047;
                    }
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        var_22 = (i_1 % 2 == 0) ? ((max(((((((-1 + 2147483647) >> (((arr_23 [i_1] [i_2 - 1] [i_1 + 1] [i_1]) - 18653))))) > (arr_5 [i_1]))), (((arr_4 [i_0 - 3] [i_2 + 1] [i_7 - 1]) > (-23 < 51206159592817560)))))) : ((max(((((((-1 + 2147483647) >> (((((arr_23 [i_1] [i_2 - 1] [i_1 + 1] [i_1]) - 18653)) - 17924))))) > (arr_5 [i_1]))), (((arr_4 [i_0 - 3] [i_2 + 1] [i_7 - 1]) > (-23 < 51206159592817560))))));
                        arr_27 [i_1] = -23;
                    }
                    arr_28 [i_1] [i_1 - 2] [i_1 + 2] [i_1] = -39;
                    var_23 = (-(((arr_14 [i_2 + 3] [i_1 + 2] [i_0 - 2]) - ((((!(arr_16 [i_0 - 1] [i_1] [i_2] [i_1] [i_2] [i_1 - 2]))))))));
                    var_24 = (max(var_24, var_13));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            {
                arr_33 [12] &= ((((((!(arr_25 [i_8 - 1]))) > ((max(35511, (arr_19 [i_8 + 2] [i_8] [i_9 + 1]))))))));
                arr_34 [i_8 - 2] [i_8 + 1] [i_8] = ((((4095 <= (arr_21 [i_8])))) | 40288);
            }
        }
    }
    #pragma endscop
}
