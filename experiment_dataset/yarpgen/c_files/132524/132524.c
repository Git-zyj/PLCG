/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(min((61892822 | var_7), var_13))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 -= 49052;
                var_19 = min((((arr_0 [i_0]) || ((((arr_1 [i_0]) & 16483))))), (arr_1 [i_1]));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = (arr_1 [i_2]);
                    arr_9 [i_0] [i_0] [i_2] = ((((~(arr_2 [i_0 - 1] [i_0]))) << (((((arr_4 [i_0 + 2]) ? (arr_4 [i_0 + 2]) : (arr_3 [i_0 - 1] [i_2]))) + 144))));
                    arr_10 [i_0 + 1] [i_0] [i_2] = (~54);
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_21 = (max((arr_4 [i_1]), (((var_6 * 4282819723) * 2479669643453893517))));
                    var_22 = (min((((max((arr_6 [i_0 + 2] [i_0]), 1163094587240714709)))), (1 / -1175264186870974917)));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    var_23 ^= (((arr_5 [i_0 - 1] [i_0 + 2] [i_4]) && 43312));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_0 + 1] [i_0] = ((-((var_15 ? (arr_14 [i_0] [i_4] [i_4] [i_0 + 1]) : var_3))));
                        var_24 = (((arr_16 [i_0 + 1] [i_0 + 2] [i_4] [2] [8]) || (((var_4 << (((arr_3 [i_1] [i_4]) - 92)))))));
                        var_25 = (min(var_25, (arr_8 [i_5] [i_1] [i_4] [i_0 + 1])));
                    }
                    arr_18 [i_0] [i_1] [i_4] = 1175264186870974917;
                }
            }
        }
    }
    #pragma endscop
}
