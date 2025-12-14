/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_5;
    var_16 = (min(((var_13 ? (var_0 / 11043264041044501300) : -12288)), -var_4));
    var_17 = ((((var_0 ? (var_11 - 1338) : -12285)) <= 65525));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_18 = 0;
            var_19 = (max(var_19, var_5));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 = var_5;
            var_21 = (arr_3 [i_2] [i_2]);
            var_22 = var_11;
            var_23 = (arr_1 [i_2]);
            arr_8 [i_2] [i_2] = ((((var_9 % (arr_7 [i_0 - 2] [i_0 + 1]))) > 432318465));
        }
        arr_9 [i_0 + 1] = (arr_5 [i_0]);
    }
    var_24 = var_3;
    #pragma endscop
}
