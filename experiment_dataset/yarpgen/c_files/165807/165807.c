/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, (~147)));
                            var_20 = ((-(arr_4 [i_3] [i_1 + 2] [i_2])));
                            var_21 = (((1 <= 127) ? (max((arr_5 [i_0 + 2] [i_0] [2]), (arr_7 [i_0] [i_3]))) : ((((max(var_5, var_13)))))));

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_22 *= ((!((!(arr_7 [i_0] [i_0])))));
                                var_23 = (((-1 >= (arr_1 [i_0]))));
                                var_24 |= (min((arr_2 [i_1] [i_1 - 1]), ((-(arr_2 [i_1] [i_1 + 1])))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                var_25 += (((arr_1 [i_0]) ? var_17 : (arr_4 [i_0] [i_1] [i_2])));
                                var_26 = ((~(arr_10 [i_1 - 1])));
                                var_27 = ((~(arr_10 [i_1 + 1])));
                                arr_15 [i_0] [i_2] [i_3] [i_2] [i_1] [i_0] [i_0] = ((~(-2147483647 - 1)));
                            }
                            for (int i_6 = 1; i_6 < 18;i_6 += 1)
                            {
                                arr_18 [i_0] [i_0] [i_0] [0] [i_2] [i_6] [i_6 + 1] = 140;
                                var_28 -= ((((max(var_6, (arr_11 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? (((arr_11 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1]) ? var_10 : (arr_11 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))) : (max(var_5, var_10))));
                                var_29 = (max(var_29, (((-((((arr_2 [i_1 - 1] [i_6 - 1]) >= (arr_2 [i_1 - 1] [i_6 + 1])))))))));
                            }
                        }
                    }
                }
                var_30 = (((~(arr_17 [i_1 + 2] [5] [i_1 - 1] [i_1 + 1]))));
                var_31 = (((((~(arr_13 [7] [i_0 - 2] [i_1 + 1] [i_1 + 2] [i_1 + 2])))) || ((((arr_13 [i_0] [i_1] [i_0 - 2] [i_1] [i_0]) ? var_3 : (arr_14 [i_0 + 2] [i_1] [1] [i_0 + 2] [i_1]))))));
            }
        }
    }
    var_32 = var_16;
    var_33 = var_14;
    #pragma endscop
}
