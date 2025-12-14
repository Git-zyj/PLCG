/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_2 [i_0] [i_0]) ? ((-605788568 ? -24 : (arr_2 [i_0] [i_0]))) : 1066278249));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_2] [i_3] [i_3] [i_0] [i_0] = ((arr_2 [i_2] [i_3]) ? (arr_9 [i_0] [2] [i_0] [i_0] [i_3] [i_0]) : -24);
                        var_14 -= (((arr_9 [10] [i_2 + 3] [i_2 + 3] [6] [i_1] [i_3]) ? (arr_9 [i_1 - 2] [i_2 + 3] [i_1 - 2] [i_1 - 2] [i_0] [i_1 - 2]) : (arr_7 [i_1] [i_2 + 3] [i_1] [i_3])));
                        var_15 ^= (arr_9 [i_1] [i_1 - 2] [4] [i_1] [i_0] [i_1]);
                        arr_11 [i_0] [i_0] [i_0] [1] [i_3] = (arr_2 [i_0] [i_1 + 1]);
                        arr_12 [i_3] [6] [i_2] [i_3] [i_3] = (((arr_9 [i_0] [i_2] [1] [i_2] [i_3] [i_2]) != (arr_9 [i_0] [i_0] [i_1] [i_0] [i_3] [i_1])));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((-(((var_12 <= (arr_5 [i_4] [i_4]))))));
        arr_16 [i_4] = ((-(((!(arr_9 [i_4] [i_4] [i_4] [0] [i_4] [0]))))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_16 = (arr_14 [i_5]);
                    var_17 -= 605788567;
                    var_18 = ((!(((60108 ? -1603644591 : -24)))));
                    var_19 = (((((arr_19 [i_5] [i_6] [i_7]) << 7)) ^ (arr_22 [i_5] [i_6] [i_7] [i_7])));
                }
            }
        }
        var_20 -= (((((-605788568 ? (((arr_0 [i_5] [i_5]) ? -24 : 1)) : (17944253196035442497 || 854340089)))) <= (((((1 ? -605788567 : (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? 10311937296668781585 : ((((arr_22 [4] [i_5] [i_5] [1]) ? (arr_17 [i_5]) : 80)))))));
    }
    var_21 = var_12;
    #pragma endscop
}
