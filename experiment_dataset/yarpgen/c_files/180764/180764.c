/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_19 = (min(var_19, ((((((9223372036854775807 | (arr_9 [i_0] [i_1] [i_0])))) ? 248 : 898953780)))));
                        arr_10 [i_3] [i_3] = (arr_2 [i_0] [i_2] [i_3]);
                        var_20 += var_5;
                    }
                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        var_21 = var_7;

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_17 [i_0] [i_2] [i_2] [i_4] [i_0] [i_2] = 30;
                            var_22 = ((~(arr_9 [i_4 - 3] [i_4 - 2] [i_4 + 3])));
                            arr_18 [i_0] [i_0] [i_1] [i_1] [i_2] [i_4] [i_5] &= ((-((var_3 + (arr_7 [i_0] [i_0] [i_0])))));
                            arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] = (((arr_3 [i_2] [i_2]) ? (arr_1 [i_0]) : var_9));
                            arr_20 [i_5] [i_4] [i_2] [i_1] [i_0] = ((var_15 ? 10869645460984763628 : ((138 ? -49 : 6511596787742440902))));
                        }
                    }
                    var_23 = ((898953780 ? 3174 : (arr_9 [i_2] [i_0] [i_1])));
                }

                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    arr_25 [i_1] [i_1] [i_1] [i_1] = 28594;
                    arr_26 [i_0] [i_0] [i_0] = ((!((-31 == (arr_7 [i_0] [i_0] [i_0])))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    arr_30 [i_1] = ((9223372036854775807 ? (arr_24 [i_0] [i_1] [i_0]) : ((var_5 ? 1068 : (arr_24 [20] [20] [i_7])))));
                    arr_31 [i_1] [i_0] [i_1] = ((var_1 ? var_6 : var_8));
                }
            }
        }
    }

    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        var_24 *= var_14;
        var_25 *= 3396013507;
        arr_35 [i_8] = var_15;
    }
    var_26 = (max(var_26, (((((((!var_9) ? (var_12 && var_3) : (var_1 && var_12)))) == var_3)))));
    var_27 = (max(var_0, ((max(var_15, (max(var_12, var_4)))))));
    #pragma endscop
}
