/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (min(var_16, ((max(var_12, (min(45095, var_0)))))));
        arr_2 [i_0] = (((((max((max(18297, var_9)), var_8)))) - var_4));
        arr_3 [i_0] = 55;
        var_17 = (((((!(var_11 & var_3)))) + -15669));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [8] [i_1] = (((20441 / 18722) * ((((-61 / -60430538) * 47239)))));
        arr_7 [0] [i_1] &= 0;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_11 [4] [i_2] = 2441490385;
        var_18 += (min((1 == var_11), 1));
        var_19 += var_14;
    }
    var_20 = ((max((19380 - 1259943758), -60430538)));
    var_21 = (~var_9);
    #pragma endscop
}
