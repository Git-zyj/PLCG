/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            var_13 = (arr_0 [i_0]);
                            var_14 = (min(var_14, 1044880034));
                            var_15 = ((155 ? 142 : (arr_3 [22] [i_2 + 3])));
                            var_16 &= ((((arr_4 [i_0] [i_0] [21]) ? 154 : 99)));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_17 = (arr_11 [22] [22] [14] [i_3]);
                            var_18 -= (arr_9 [i_2] [17]);
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            arr_14 [8] [20] [8] [i_3] [11] [i_0] [0] = var_7;
                            arr_15 [i_0] = ((100 ? (arr_0 [i_0]) : (arr_7 [i_6] [11] [8] [i_1] [22])));
                            var_19 = (arr_4 [i_0] [11] [i_2 + 3]);
                            arr_16 [i_0] [i_0] [i_0] [16] [i_6] [i_0] [i_0] = ((3052768988 ? (arr_5 [3] [i_0] [i_2 - 3] [5]) : 169));
                        }
                        var_20 = (min(var_20, (((158 ? (arr_12 [i_0] [i_1] [i_2 - 3]) : 101)))));
                        arr_17 [i_0] [i_1] [i_1] [i_2] [i_0] [i_3] = (arr_5 [11] [i_0] [i_0] [i_2 - 2]);
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        arr_21 [i_7] [i_1] [i_2] [20] &= arr_3 [12] [12];
                        var_21 = -1198772490;
                        arr_22 [i_0] [i_0] [i_0] [8] = (((-2147483647 - 1) / 122));
                    }
                    var_22 = (!-114);
                }
            }
        }
    }
    var_23 = ((var_2 - (((249 ? 131 : 99)))));
    var_24 -= var_11;
    var_25 = -var_8;

    for (int i_8 = 2; i_8 < 24;i_8 += 1)
    {
        var_26 = ((!((min((arr_23 [i_8]), -91)))));
        arr_26 [i_8] = (((arr_24 [i_8]) || ((max((arr_25 [i_8]), (arr_25 [i_8]))))));
        var_27 = (((arr_25 [i_8]) ? ((-(arr_25 [i_8]))) : 123));
        arr_27 [i_8] = ((-(!1)));
    }
    #pragma endscop
}
