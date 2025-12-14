/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_5 ? var_9 : (((((var_3 ? var_1 : var_10))) ? var_7 : (!var_8)))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_13 = ((((-4655194717654880122 ? (4655194717654880139 || -7005564059807408132) : -4655194717654880132)) < 63781));
            var_14 = ((-4655194717654880139 ? (((((max(139, -7995330644761127450))) ? (arr_2 [i_0]) : 11))) : 4473053952421934796));
        }
        var_15 = (arr_3 [i_0] [i_0 - 3]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_16 = (min(var_16, (((((((arr_4 [i_2]) + 201))) ? var_4 : (arr_4 [i_2]))))));
        var_17 = (min(var_17, (arr_5 [i_2])));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_10 [i_3] = (((((var_4 && (arr_9 [i_3] [i_3]))) ? ((((4655194717654880122 == (arr_4 [i_3]))))) : (min(var_4, (arr_8 [i_3]))))));
        var_18 = (4655194717654880122 - var_11);
    }
    #pragma endscop
}
