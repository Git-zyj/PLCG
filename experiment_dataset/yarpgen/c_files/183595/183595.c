/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
            arr_5 [i_0] [i_0] = (0 && (!1));
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = (min(((((((arr_4 [i_0] [i_0]) ? 1 : (arr_6 [i_2] [i_0] [i_2])))) ? ((min((arr_3 [i_0] [i_0] [i_0]), var_3))) : var_3)), ((((!var_1) && 1)))));
            var_15 += (((var_0 ? (min(var_9, 1) : 1))));
            arr_9 [i_0] [i_0] = ((+(((arr_4 [i_0] [0]) ^ 240))));
            var_16 = (min(var_16, (arr_0 [i_0])));
            arr_10 [i_0] [i_0] [i_0] = 1;
        }
        arr_11 [i_0] = ((1 / (arr_3 [i_0] [i_0] [i_0])));
        arr_12 [i_0] = 72057594037796864;
    }
    var_17 = (~var_4);
    #pragma endscop
}
