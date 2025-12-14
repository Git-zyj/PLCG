/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (arr_7 [i_0] [i_1] [i_2])));
                    var_18 *= (arr_7 [i_0 - 1] [i_0 - 1] [16]);
                }
            }
        }
        var_19 = (max(var_19, ((max(((((((arr_2 [i_0]) % (arr_5 [i_0 + 2] [i_0])))) ? ((-(arr_2 [i_0 + 2]))) : (((arr_6 [i_0 - 1]) & (arr_6 [i_0]))))), (arr_6 [i_0]))))));
        var_20 *= ((+((((((arr_3 [10] [10]) ? (arr_6 [i_0]) : (arr_7 [i_0] [12] [i_0])))) ? (arr_4 [i_0 - 1] [i_0 - 1] [i_0]) : (((arr_2 [i_0]) - (arr_5 [i_0 + 1] [8])))))));
    }
    var_21 = (min(var_21, (((((((((var_12 ? var_7 : var_2))) ^ ((var_11 ? var_1 : var_8))))) ? ((((max(var_12, var_16))) ? ((var_10 ? var_4 : var_13)) : (var_12 - var_0))) : var_14)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                var_22 -= (((((((!(arr_4 [i_3] [i_3] [i_4])))))) ? (((!((((arr_9 [i_4]) ? (arr_9 [i_4]) : (arr_5 [i_3] [i_3]))))))) : (arr_1 [12] [i_4])));
                var_23 = (max(var_23, (((((((((arr_6 [0]) ^ (arr_4 [i_4] [19] [i_3])))) || (arr_5 [i_3] [i_4]))) ? ((((((arr_9 [i_4]) - (arr_1 [i_3] [i_4])))) ? ((-(arr_1 [i_3] [i_4]))) : ((((arr_3 [i_3] [i_4]) < (arr_10 [i_4] [14])))))) : ((((((arr_0 [2]) ? (arr_2 [i_4]) : (arr_0 [i_3]))) <= (arr_2 [i_4])))))))));
                var_24 = (min(var_24, ((((((~(arr_9 [i_3])))) || ((((arr_0 [i_3]) | (arr_8 [i_4])))))))));
                var_25 = (max(var_25, (arr_12 [i_3])));
            }
        }
    }
    var_26 = var_8;
    #pragma endscop
}
