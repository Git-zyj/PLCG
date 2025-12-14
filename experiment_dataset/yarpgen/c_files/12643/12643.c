/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((((min(var_6, ((0 ? var_8 : var_0))))) ? (min(var_8, (max(4671293510772359866, -9133479116348296105)))) : var_5));
    var_11 = ((!(((~((max(var_8, var_9))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_2 [i_0]) % (arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    {
                        var_12 ^= (arr_0 [i_0] [i_0]);
                        var_13 ^= (arr_6 [i_0] [0] [i_3 + 1]);

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_14 *= (arr_11 [i_0] [i_0] [i_1] [i_0]);
                            var_15 = (((arr_15 [i_2] [i_3 - 1] [i_2] [i_0]) ? (arr_2 [i_0]) : 13775450562937191718));
                        }
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            var_16 = (((arr_2 [i_5]) ? 1613766332 : (arr_17 [i_3 - 2] [i_3 - 2] [i_3] [i_3] [i_3] [i_3] [i_5 - 2])));
                            var_17 -= arr_3 [i_3] [i_1];
                            var_18 = (min(var_18, (((!(arr_13 [i_5] [i_1]))))));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [8] = (((arr_8 [i_0] [i_1] [i_2] [i_1 - 1]) | (arr_8 [i_0] [i_0] [i_2] [i_1 + 2])));
                            var_19 = (max(var_19, ((((arr_9 [i_0] [i_2] [2] [11]) ? var_8 : ((-(arr_3 [i_0] [1]))))))));
                            var_20 ^= ((!(arr_15 [i_6] [i_6] [i_6 - 1] [i_6])));
                        }
                    }
                }
            }
        }
    }
    var_21 = (((((-(min(var_2, var_1))))) < ((var_3 ^ (((var_8 ? var_1 : var_7)))))));
    #pragma endscop
}
