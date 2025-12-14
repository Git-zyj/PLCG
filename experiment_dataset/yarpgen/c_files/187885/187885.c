/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] [i_3] = ((!(((var_3 ? var_2 : 1)))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] [6] [i_0] = (arr_3 [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_14 = 1;
                        arr_16 [i_0] [i_4] [i_0] [i_4] = (((arr_12 [i_4] [i_4 + 1] [i_4 - 1] [i_4]) << (arr_12 [i_4] [i_4 + 1] [i_4 - 3] [i_4])));
                    }
                    var_15 = (((~(1 - 157))) ^ var_2);

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_16 = 98;
                        arr_19 [i_5] [i_0] [i_2] [i_1] [i_0] [i_0] = ((((arr_18 [i_0] [i_0] [i_1 + 2] [10]) ? 188 : 99)));
                        arr_20 [i_0] [0] [i_0] [0] [i_2] [i_2] = (min((arr_8 [i_0] [i_5] [15] [i_5]), (max(1, (arr_9 [i_1 - 1] [i_2])))));
                    }
                    var_17 = (min(var_17, ((min(((max(((-(arr_4 [i_2] [i_0]))), ((1 ? (arr_5 [i_1 + 2]) : (arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2])))))), (~7193288567269021846))))));
                }
                for (int i_6 = 4; i_6 < 14;i_6 += 1)
                {
                    var_18 ^= ((((((max(var_0, var_1))) ? (1 / var_13) : 1))) ? ((((var_12 ? 0 : 98)) ^ var_8)) : var_1);
                    var_19 = (max(var_19, 1));
                    var_20 ^= ((1 < (((0 & (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    arr_23 [8] [i_1 + 2] [8] [8] = 1;
                }
                var_21 = (max(var_21, ((((arr_3 [i_0] [i_1] [i_1]) && (((var_5 | (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) | 1))))))))));
                var_22 += (min((min((((var_0 == (arr_18 [i_0] [i_0] [i_0] [i_0])))), ((1651211331 ? (arr_7 [i_1 + 1] [i_0] [10] [i_0] [10]) : var_5)))), ((-(((arr_12 [i_0] [13] [i_1] [2]) + 0))))));
                var_23 = (min(var_23, ((((arr_18 [i_0] [i_0] [i_1] [i_1]) ? ((0 << (((arr_15 [i_1 + 1] [i_0] [i_1 + 1]) - 20)))) : ((((arr_5 [i_0]) == ((1 ? (arr_21 [i_1] [i_0] [i_1] [i_0]) : var_5))))))))));
            }
        }
    }
    var_24 = 1;
    var_25 = (1049691396 <= 0);
    #pragma endscop
}
