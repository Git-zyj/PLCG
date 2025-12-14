/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_14 = (~2191376524);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_15 = (((arr_0 [i_0] [i_0]) < 1579760551));
            arr_8 [i_0] [i_0] [i_0] = (((arr_6 [i_0] [i_0] [i_1]) ? (arr_6 [i_1] [i_1] [i_0]) : 2768105977));
            var_16 = var_5;
            var_17 = (max(var_17, ((((arr_4 [i_0]) - var_12)))));
            arr_9 [24] [24] [i_1] |= 49;
        }
        var_18 = ((-(var_6 ^ 185)));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_19 = (min(1659169520, (arr_11 [i_2])));
        var_20 ^= (((arr_1 [i_2] [i_2]) ? ((var_1 ? 4435172457382387862 : 0)) : (arr_3 [i_2])));
        var_21 = (arr_10 [i_2]);
    }
    var_22 = var_7;
    var_23 = var_2;
    var_24 = var_6;
    var_25 *= var_8;
    #pragma endscop
}
