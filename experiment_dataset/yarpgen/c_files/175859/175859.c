/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_14 -= ((+(max(var_6, (((arr_3 [0]) ? var_8 : var_0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((max((max((((arr_7 [i_0] [i_1] [i_3] [0]) ? var_10 : (arr_11 [i_0] [i_0] [i_0] [1] [i_0] [i_0]))), ((min((arr_5 [i_0]), var_3))))), (((arr_10 [i_4 + 1] [i_4 - 3] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4]) + (arr_10 [i_4 - 2] [i_4 - 2] [11] [i_4 + 2] [i_4 - 2] [2]))))))));
                                var_16 += (min(((min((arr_11 [i_4 + 2] [i_4] [i_4] [i_4 - 2] [i_4 + 2] [8]), 0))), ((((max((arr_10 [i_0] [i_1] [i_2] [4] [i_4 - 1] [i_0]), 1))) | ((min(var_0, var_3)))))));
                            }
                        }
                    }
                    var_17 = (min(var_17, (arr_7 [i_0] [i_0] [i_2] [1])));
                }
                var_18 = (min(var_18, ((min(((min((arr_8 [2] [i_1] [i_1] [i_0]), var_8))), ((65524 ? (arr_3 [12]) : (arr_3 [1]))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_19 ^= ((((min(((((arr_9 [i_0] [i_1] [i_5] [0]) == var_9))), (~var_0)))) ? (((arr_8 [i_6 - 1] [i_6] [4] [i_6 - 1]) ? (arr_8 [i_6 - 1] [i_5] [i_0] [i_0]) : var_4)) : (arr_14 [i_0] [9] [i_0])));

                            for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                            {
                                var_20 = (min(var_20, (((~(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                                var_21 = (min(var_21, (((((max((((arr_9 [i_5] [i_5] [i_5] [i_5]) ? var_3 : 1)), (arr_3 [4])))) ? ((min((!var_9), (arr_13 [i_1] [14])))) : ((+((max((arr_4 [i_1] [i_6 - 1]), (arr_19 [i_0] [i_0] [i_5] [i_0] [i_7])))))))))));
                                var_22 ^= (min(((var_0 % (arr_3 [10]))), var_4));
                                var_23 = (max(var_23, (((((-((min(0, 1))))) - var_3)))));
                                var_24 += (!((((arr_12 [0] [i_5]) | ((max((arr_16 [i_0]), var_0)))))));
                            }
                            /* vectorizable */
                            for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                            {
                                var_25 = (max(var_25, (((~(((arr_7 [i_5] [i_5] [4] [2]) ? (arr_3 [1]) : var_6)))))));
                                var_26 *= var_1;
                                var_27 = (max(var_27, var_1));
                                var_28 += arr_13 [i_0] [i_0];
                            }
                            /* vectorizable */
                            for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
                            {
                                var_29 = (max(var_29, ((((arr_14 [i_6 - 1] [i_6 - 1] [i_1]) ? 0 : var_11)))));
                                var_30 += ((35 ? (arr_4 [i_5] [i_9]) : (arr_7 [i_6 - 1] [i_9 - 1] [i_9 + 1] [1])));
                                var_31 = (max(var_31, ((((((arr_15 [i_0] [i_6] [8]) < var_9)) ? (((arr_18 [10] [i_6 - 1] [i_5] [i_1] [10]) ? (arr_20 [1] [i_1] [i_1] [i_6] [i_9 + 2]) : var_11)) : ((0 ? (arr_0 [4]) : 31784)))))));
                            }
                        }
                    }
                }
                var_32 = (max(var_32, (((1 + ((min(1, 65535))))))));
            }
        }
    }
    var_33 += var_11;
    var_34 = (max(var_34, var_4));
    var_35 -= ((((-((min(127, 0))))) + (max(67, ((var_2 >> (91 - 71)))))));
    #pragma endscop
}
