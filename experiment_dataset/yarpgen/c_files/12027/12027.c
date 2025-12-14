/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 ^= (~-var_1);
                                var_17 = ((((~(arr_14 [7] [i_1] [i_1] [i_1]))) == var_4));
                                var_18 = (arr_7 [i_1] [i_2] [i_3] [i_4]);
                                var_19 = (arr_0 [i_0]);
                                var_20 = (arr_6 [i_1]);
                            }
                        }
                    }
                    var_21 = var_6;

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_22 = var_10;
                        var_23 = var_10;
                        var_24 = ((!((!((!(arr_14 [i_0] [i_2] [i_1] [i_0])))))));
                        var_25 = min(((max(var_4, (arr_7 [i_0] [i_1] [i_2] [i_5])))), ((((var_14 % var_9) || (arr_15 [i_0])))));
                        var_26 = ((!((((min((arr_8 [i_0] [i_1] [i_2]), var_10)) - (arr_8 [i_0] [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_27 = ((!(arr_5 [i_0] [i_6] [i_0])));
                        var_28 = var_12;
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 9;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_29 = (~var_4);
                            var_30 = ((-(((!(arr_10 [i_8]))))));
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_31 = arr_19 [i_1] [i_2] [i_7] [i_9];
                            var_32 = ((!(arr_3 [i_0] [i_1])));
                        }
                        var_33 ^= var_4;
                        var_34 = var_8;
                    }
                }
            }
        }
    }
    var_35 = var_5;
    #pragma endscop
}
