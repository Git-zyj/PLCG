/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = var_4;
        arr_4 [i_0] = 65;
        arr_5 [14] = (arr_2 [i_0 + 4] [i_0 + 1]);
        arr_6 [8] [i_0 + 4] = ((((!(arr_2 [i_0] [i_0]))) ? 0 : (~-126)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_9 [i_1] = (254 % var_12);
        arr_10 [i_1] = (((arr_1 [i_1]) == (arr_1 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_13 [i_2] = var_10;
        arr_14 [i_2] = 10169;
        arr_15 [i_2] = (6 ? var_3 : ((58841 ? 4407031988755316605 : 213)));
    }
    var_14 = (var_0 <= var_7);
    #pragma endscop
}
