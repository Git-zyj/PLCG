/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((max(var_4, var_11)) & var_1)) == var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(arr_0 [i_0] [i_0])));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = (arr_4 [i_1]);
        arr_7 [15] = ((65522 / (((((max(var_12, 96)))) - 0))));
        arr_8 [i_1] [i_1] = ((-var_13 ? ((-(arr_1 [i_1] [i_1]))) : (arr_4 [i_1])));
        arr_9 [i_1] [i_1] = 97;
        arr_10 [i_1] = (max((((!((max(16812, var_12)))))), var_0));
    }
    #pragma endscop
}
