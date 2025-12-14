/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0 + 1] [i_0 + 1]);
        arr_4 [i_0] = (~-1323652960);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = (arr_1 [i_1] [i_1]);
        arr_8 [i_1] = ((1323652946 ? 1323652936 : 1323652946));
        var_10 += (((arr_1 [i_1] [i_1]) >= var_3));
        var_11 = (arr_1 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (((arr_0 [i_2 - 1] [i_2 - 1]) ? -1323652973 : 1236804654));
        arr_12 [i_2 - 1] [i_2] = ((var_4 == (244 >= -1323652973)));
        var_12 = ((arr_2 [i_2 - 1]) ? (arr_2 [i_2 - 1]) : var_1);
        var_13 = (((arr_5 [i_2 - 1]) != var_3));
    }
    var_14 = (min(var_2, 482474151));
    var_15 &= (min(482474150, 7946));
    #pragma endscop
}
