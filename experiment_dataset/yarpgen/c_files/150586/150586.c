/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = (arr_5 [i_0] [i_0] [i_0]);
                arr_6 [i_0] [i_1] &= ((((((arr_4 [i_1]) | ((872230408 ? 1040589318 : (arr_1 [i_1])))))) ? (max((min(var_1, 4294967269)), (arr_1 [i_0]))) : (((min((arr_4 [i_0]), var_4))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2] [i_2] = (min((arr_11 [i_3 + 1]), var_9));
                arr_14 [i_2] [i_3 + 1] = (arr_10 [i_3 + 1] [i_3 + 1]);
                arr_15 [i_3] = ((((((((arr_10 [i_2] [1]) & 4294967272)) == (((max(-26687, 63632))))))) / ((((((~(arr_4 [i_2])))) || 26)))));

                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    arr_18 [i_2] [i_2] = (arr_17 [i_2] [i_2] [i_2]);
                    var_11 = (arr_4 [16]);
                    var_12 = (((((((~(arr_11 [i_4])))) ? (arr_3 [i_4 + 1] [i_4 - 1] [i_4 + 1]) : ((var_9 ? (arr_10 [i_2] [i_2]) : var_5)))) | var_2));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_23 [i_2] = (((((arr_20 [i_5] [i_2]) || ((min((arr_4 [i_2]), 1489398086))))) ? var_3 : (((arr_8 [i_3 - 1] [i_3]) / (arr_8 [i_3 + 1] [i_3 + 1])))));
                    var_13 = ((-((max(-127723487, 4294967270)))));
                    var_14 |= min((((arr_12 [i_3 + 1] [10] [i_5]) ? var_6 : (arr_12 [i_3 - 1] [i_3 - 1] [i_5]))), (-1 + 1981020855));
                }
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_15 = (((var_3 ? (arr_4 [i_6 - 1]) : (arr_16 [i_2] [i_6 - 1] [i_3 - 1] [17]))));
                                arr_32 [i_2] [i_3 - 1] [i_6] [i_7] [10] = ((~(max(((~(arr_27 [i_2] [i_6] [i_6]))), (~22)))));
                                var_16 = (var_2 << (((max(((var_1 ? (arr_1 [i_3]) : 30)), ((((arr_30 [i_2] [i_2] [11]) - var_3))))) - 2258206692)));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_39 [i_6] [i_6] [i_6] = var_4;
                            arr_40 [i_6] [i_3 + 1] [i_3] [i_3] [9] = 4294967295;
                            var_17 = -230547379;
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_18 += var_3;
                            var_19 &= (-(arr_17 [i_3 + 1] [i_3 + 1] [i_3 - 1]));
                            var_20 = (max(var_20, var_3));
                            arr_44 [i_2] [i_3 - 1] [i_6] [i_6] [i_6] = ((+(((arr_5 [i_2] [i_9] [i_11]) ? var_2 : (arr_1 [i_11])))));
                            var_21 = (min(var_21, ((((arr_26 [i_3 - 1] [i_3] [i_3 + 1] [i_3]) >= (arr_26 [i_3] [i_3] [i_3 + 1] [i_3 + 1]))))));
                        }
                        var_22 *= ((((((arr_22 [i_2] [i_2] [i_2]) / (arr_19 [i_2] [i_3] [i_2] [i_9])))) * (arr_41 [i_3] [i_3] [i_6 - 1] [i_9] [i_3 + 1])));

                        for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_23 = (max(var_23, 3244366938));
                            var_24 = ((((~(arr_42 [i_2] [i_2] [4] [i_9] [4])))) ? (arr_35 [i_6] [i_9] [i_2] [i_2] [i_6]) : ((var_0 ? 25826 : -194821957)));
                        }
                        for (int i_13 = 1; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            arr_51 [i_2] [i_6] [i_2] [i_9] [i_13] = 206767772;
                            var_25 = (min(var_25, ((((((4294967265 ? var_6 : (arr_1 [i_9])))) ? 194821952 : 839172317)))));
                            arr_52 [i_6] = (arr_30 [i_2] [i_2] [i_9]);
                        }
                        arr_53 [i_6] [i_3 - 1] [i_6 - 1] [i_9] = (-6404 + 1);
                    }
                    arr_54 [i_2] [i_3] [i_6] = (max(((((min(var_5, (arr_3 [i_2] [i_2] [1])))) ? var_5 : var_4)), 3364024916273601279));
                    arr_55 [i_2] [i_2] [i_6] [i_6 - 1] = (~(min((((arr_29 [i_2] [i_2]) ? var_4 : 3455794978)), 1)));
                }
            }
        }
    }
    #pragma endscop
}
