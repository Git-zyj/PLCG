/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (max((arr_4 [i_0] [0]), ((max((((511 ? var_3 : var_9))), ((-6499135174538233 ? (arr_0 [i_0]) : var_7)))))))));

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_13 = (arr_5 [i_2]);
                    var_14 = (max(var_14, ((max(9223372036854775807, ((min(((min(848, 20))), (min(var_6, (arr_8 [i_0])))))))))));
                    var_15 = (min(var_15, (min((arr_5 [i_0 - 2]), var_10))));
                }

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_11 [8] [8] [i_1] = (((((((arr_2 [i_0]) > 9223372036854775807)))) ? (((9223372036854775807 ? 23 : -7747791010570710140))) : (((arr_5 [i_0]) ? var_6 : (arr_8 [i_1])))));
                    var_16 = (arr_3 [i_0] [i_1] [i_3]);
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_17 += var_6;
                    var_18 = (7747791010570710132 && 8);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_4] [i_5] [i_6] = min((min(((min((arr_10 [i_5] [i_1] [i_1] [8]), 248))), 2097151)), var_6);
                                var_19 = ((((((!var_2) ? (max(var_8, 46)) : var_1))) ? (((var_1 % (arr_3 [i_0 - 2] [i_1] [i_0])))) : ((((((arr_14 [i_1]) << (((arr_2 [i_0]) - 5406830228799979127))))) ? (((((arr_6 [i_1]) >= (arr_1 [i_0]))))) : -7747791010570710135))));
                                var_20 = 5288592450811800112;
                                var_21 = (max(var_21, (-127 - 1)));
                            }
                        }
                    }
                    var_22 = (((32 < -114) > (arr_5 [i_0])));
                    var_23 = (min((arr_16 [i_1] [i_1]), ((((arr_16 [i_1] [i_1]) ? (arr_16 [i_1] [i_1]) : (arr_16 [i_1] [i_1]))))));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_9 = 3; i_9 < 9;i_9 += 1)
                            {
                                arr_29 [i_0] [i_8] [i_1] [i_0] [i_0] = var_5;
                                var_24 &= ((!((((arr_12 [i_1] [i_7]) >> (var_10 + 5337802490155561262))))));
                                var_25 = ((var_6 + (arr_8 [i_0 - 1])));
                            }
                            arr_30 [i_1] [i_1] [i_7] [i_8] = var_7;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
