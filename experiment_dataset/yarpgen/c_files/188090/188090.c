/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_12 ? (!var_3) : ((83 ? 172 : -16)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 |= (min((max(((var_0 ? (arr_2 [i_0]) : var_12)), (((arr_0 [i_0]) ? (arr_1 [i_0]) : 0)))), (arr_1 [i_0])));
        arr_3 [i_0] = (max((max((arr_0 [i_0]), var_13)), ((((arr_0 [i_0]) != var_10)))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 = ((16102043269028818287 ? 24120 : (arr_6 [i_1] [i_1 + 4])));
            var_21 = var_12;
        }
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            arr_11 [17] [1] [i_3] = (min((((((-16 ? (arr_9 [i_1 + 4] [i_1] [i_3]) : -110))) ? (min(16102043269028818287, 43029)) : 146)), (((arr_8 [i_1 + 2]) ? (arr_7 [i_1 - 1] [i_3 - 2]) : (arr_4 [i_1 + 1])))));
            var_22 = (max(var_22, var_6));
            var_23 *= ((!((((173 ? -9 : 16102043269028818287))))));
        }
        arr_12 [14] = (max(1, var_13));
    }
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        arr_17 [i_4] = (arr_5 [i_4] [i_4]);
        arr_18 [i_4] = ((var_17 ? (arr_7 [10] [i_4]) : (((5270231269578140201 >> (-30021 + 30063))))));
    }
    var_24 = var_12;
    #pragma endscop
}
