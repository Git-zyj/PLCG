/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((max(((var_10 ? 1 : 1)), ((32145 ? var_4 : 16777215)))), var_3));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_15 |= (((arr_2 [i_0 + 1]) ? (arr_2 [10]) : (arr_0 [i_0 - 1] [i_0 - 1])));
        var_16 = (((arr_0 [i_0 - 1] [i_0 + 1]) ? (arr_0 [i_0 + 1] [i_0 - 1]) : 1));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = var_2;
        arr_6 [i_1] [8] = (((arr_4 [i_1]) - 8424955307742537597));
        arr_7 [i_1] [i_1] = (((arr_1 [1]) > (min(((((arr_1 [15]) <= var_1))), (arr_3 [i_1 + 2])))));
        arr_8 [i_1] = (((((((-197232038 ? (arr_1 [i_1 - 2]) : var_13))) && (arr_4 [12]))) ? (min((arr_4 [i_1 + 1]), 1378682292)) : (8409 || 3)));
    }
    #pragma endscop
}
