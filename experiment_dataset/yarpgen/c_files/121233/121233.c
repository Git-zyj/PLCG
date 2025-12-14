/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = 15578351;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_19 &= (((arr_6 [4] [i_1]) % (arr_6 [i_0 + 1] [i_0 + 1])));
                        var_20 = ((var_8 && ((((arr_10 [i_0] [i_3] [i_3] [i_0] [i_1] [i_3]) ^ (arr_7 [i_2]))))));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_15 [i_3] = (i_3 % 2 == 0) ? ((((((!(arr_10 [i_0 + 1] [i_3] [i_1] [i_3 + 1] [i_4] [i_0])))) % (((arr_12 [i_0 + 1] [i_3 + 1] [i_2] [i_3 + 1] [i_4] [i_0 + 1]) << (((arr_10 [i_0 + 1] [i_3] [i_3] [i_3] [i_0 + 2] [i_0]) - 18904))))))) : ((((((!(arr_10 [i_0 + 1] [i_3] [i_1] [i_3 + 1] [i_4] [i_0])))) % (((arr_12 [i_0 + 1] [i_3 + 1] [i_2] [i_3 + 1] [i_4] [i_0 + 1]) << (((((arr_10 [i_0 + 1] [i_3] [i_3] [i_3] [i_0 + 2] [i_0]) - 18904)) + 43892)))))));
                            var_21 = (((((arr_5 [i_0 + 1]) % (arr_2 [i_0]))) > (((((4933575332343648388 ? (arr_12 [i_0] [i_0] [1] [i_0] [i_0 + 2] [i_0]) : (arr_1 [i_3])))) ? 127 : (!var_17)))));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_3] [i_5] = 19254;
                            var_22 = (((arr_6 [i_0 - 1] [i_2]) ? (arr_6 [i_0 - 1] [i_3]) : (min((arr_6 [i_0 - 1] [i_0 - 1]), (arr_6 [i_0 - 1] [i_0])))));
                        }
                    }
                }
            }
        }
        var_23 = (((arr_1 [i_0]) ? (arr_17 [i_0 - 1]) : ((~(arr_14 [i_0] [i_0] [i_0 - 1] [i_0] [i_0])))));
    }
    var_24 = (max(var_24, (((var_2 + ((-var_11 - ((var_0 ? var_18 : var_1)))))))));
    var_25 = ((((max(-var_16, ((-2093526608 ? 2093526614 : var_9))))) ? (((var_3 >> (993479750033614221 - 993479750033614211)))) : (((!var_18) ? var_16 : var_8))));
    #pragma endscop
}
