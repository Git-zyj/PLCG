/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [1] [i_3] = ((-((((arr_1 [i_2]) || ((((arr_3 [i_0] [i_1] [i_0]) | 27119))))))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                var_18 = ((+(((((((arr_6 [i_0] [7] [7] [16]) || (arr_8 [i_0] [i_0] [0] [i_4]))))) - var_10))));
                                var_19 = max(((((8395040080758735880 ? (arr_10 [i_0]) : 40367)) - (arr_8 [i_4] [i_3] [1] [i_1]))), (arr_10 [i_0]));
                                var_20 = (max(var_20, (((!((min((((!(arr_0 [i_2])))), (max(40367, (arr_6 [i_4] [i_1] [8] [1])))))))))));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                var_21 = (min(var_21, ((max(((max(((25168 ? 58912 : var_3)), ((max((arr_2 [i_2]), (arr_11 [i_0] [i_1] [16] [14] [i_2]))))))), ((~(arr_4 [i_2] [20] [12] [i_2]))))))));
                                arr_17 [i_0] [i_5] = ((-(arr_4 [i_0] [14] [i_2] [i_2])));
                                var_22 = 21431;
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                var_23 = ((!((max(var_9, (arr_4 [i_0] [5] [5] [5]))))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max(((max((arr_19 [i_0] [i_0] [i_2] [i_3] [i_2]), -21432))), -21432))) ? ((max((!24912), 8336))) : (~54)));
                                arr_21 [i_0] [i_1] [i_1] = (~21431);
                                var_24 = (((max(122, (arr_10 [i_0])))));
                                arr_22 [9] [i_0] = (max(((((((var_17 ? -21432 : (arr_1 [13]))) + 2147483647)) << (((((arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [13]) + 13460)) - 20)))), ((max((arr_14 [i_0] [i_1] [i_2] [i_0]), var_2)))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                            {
                                arr_26 [i_0] [12] [9] [9] [6] [i_0] [2] = (arr_2 [i_7]);
                                arr_27 [17] [i_0] = (arr_23 [i_3]);
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_35 [i_0] [i_0] [i_0] [21] [i_0] [i_0] [i_0] = (arr_32 [i_0] [17] [6] [i_9] [12] [i_9] [12]);
                                arr_36 [i_0] [i_1] [i_8] [i_1] [i_10] |= (arr_3 [i_10] [i_9] [i_10]);
                                arr_37 [i_0] = 31;
                                arr_38 [i_10] [i_10] [i_0] [i_10] [i_10] = ((((arr_6 [i_10] [i_9] [i_8] [i_0]) & 124)));
                            }
                        }
                    }
                    var_25 = -54;
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    var_26 = (min(var_26, ((((((var_15 ? (arr_8 [i_0] [i_0] [1] [1]) : 25168)) % ((max((arr_42 [6] [i_1] [i_11]), var_9)))))))));
                    var_27 = ((!((min((arr_32 [i_0] [4] [i_0] [i_0] [0] [i_0] [i_0]), (arr_6 [3] [i_0] [i_1] [i_11]))))));
                }
                var_28 -= ((70 >> ((((~((max((arr_7 [i_1]), 40365))))) + 40367))));
                arr_43 [i_0] [i_0] [2] = max(-1, (min((arr_25 [i_0] [i_0] [i_0] [2] [6] [1] [10]), 14546405200251328646)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            {
                var_29 = (max(var_29, ((max((((12220 != (~var_0)))), ((~(((arr_32 [i_12] [i_12] [i_12] [i_12] [i_12] [i_13] [i_12]) ? var_3 : 40367)))))))));
                var_30 = (max(var_30, (((((max((((!(arr_29 [i_12])))), ((~(arr_15 [i_13])))))) == -1732396467)))));
                arr_49 [i_13] [i_13] [i_13] = ((((min((arr_12 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]), (arr_19 [i_12] [i_12] [i_12] [i_12] [i_12])))) ? ((-((var_15 ? (arr_48 [i_12]) : 1161095332778722093)))) : (((max(var_0, (arr_48 [12])))))));
            }
        }
    }
    #pragma endscop
}
