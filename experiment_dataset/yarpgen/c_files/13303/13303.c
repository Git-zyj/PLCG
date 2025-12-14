/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(((!(~148))))));
    var_14 = 11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = ((!(((-((~(arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4]))))))));
                                var_15 = ((!((!(!var_0)))));
                                var_16 = (((!(~5160292719549844727))));
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] [i_4] = ((-((((!(arr_12 [16] [i_3] [4] [i_1] [i_0])))))));
                                arr_15 [8] [i_4] [i_3] [i_2] [i_0] [i_0] [i_0] |= ((!(((-(!var_6))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_17 |= 566330719;
                        arr_20 [i_0] [i_1] [i_2] [i_0] [i_5] = (~((~(~var_4))));
                        var_18 ^= ((~(((!(!var_7))))));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_19 = ((!((!(((~(arr_19 [i_0] [i_1] [i_0] [11]))))))));
                            var_20 = (min(var_20, (((~(~32742))))));
                        }
                        var_21 ^= (~((~((~(arr_7 [i_1] [i_1] [i_0]))))));
                        var_22 = (((~(((!(arr_10 [i_6] [i_1])))))));
                        var_23 ^= (!566330719);
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_24 *= ((~(((!(!242))))));
                        arr_28 [i_0] [12] [5] [i_0] = (!(!var_8));

                        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                        {
                            var_25 = ((-((-((-(arr_27 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                            var_26 = ((!(~139)));
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                        {
                            var_27 = (((!(!var_12))));
                            var_28 = ((!(~-var_10)));
                            var_29 = ((-(~-3728636560)));
                            arr_34 [i_1] [i_0] [i_8] [i_10] = ((!(!var_6)));
                        }
                        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                        {
                            var_30 -= ((!(((~(((!(arr_8 [21])))))))));
                            var_31 ^= 2102722218;
                        }
                        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                        {
                            var_32 = (-((~(!5457458296556691652))));
                            arr_42 [i_1] [i_0] = (!var_12);
                        }
                    }
                    arr_43 [i_0] [i_1] [i_1] = ((!(((-((~(arr_16 [i_0] [i_0] [11] [i_0] [i_0]))))))));
                    var_33 = var_3;
                    var_34 -= ((!(((~(~240))))));
                }
            }
        }
    }
    #pragma endscop
}
