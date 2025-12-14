/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((-(arr_1 [i_0])))) & 16187751163189642621);
        arr_4 [i_0] = 0;
        arr_5 [i_0] = ((arr_2 [i_0] [i_0]) % ((((arr_2 [i_0] [i_0]) * (arr_2 [i_0] [i_0])))));
        arr_6 [i_0] [i_0] = ((~((((max((arr_2 [8] [i_0]), var_8)) <= var_5)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_9 [1] = (((arr_2 [i_1] [i_1]) < (arr_2 [i_1] [i_1])));
        arr_10 [i_1] [i_1] = (((arr_8 [i_1] [i_1]) / (arr_0 [i_1])));
        arr_11 [i_1] [i_1] = (arr_1 [1]);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] |= ((((min((45377 > 3968906287383383674), 9223372036854775807))) ? ((max((arr_2 [i_2] [i_2]), (arr_2 [i_2] [i_2])))) : (arr_0 [i_2])));
        arr_15 [i_2] = (max((~var_8), (arr_0 [i_2])));
        arr_16 [i_2] = ((((((~1) + 2147483647)) >> (((arr_12 [0]) - 44828)))));
        arr_17 [i_2] = (max(((((-23 + (arr_1 [i_2]))) - (arr_0 [i_2]))), (((var_10 < ((255 >> (var_4 - 184))))))));
    }
    #pragma endscop
}
