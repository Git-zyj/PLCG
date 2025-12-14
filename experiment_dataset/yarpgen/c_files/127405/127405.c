/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (var_8 ^ (((max(var_12, var_3)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 |= (var_8 / var_2);
        var_16 |= (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 = (max(var_17, (((((var_13 ? (arr_3 [i_0] [i_0]) : (max(13, (arr_1 [i_1] [i_0]))))) > (arr_0 [i_0] [i_1]))))));
            arr_4 [i_0] [i_0] [i_0] = 1;
        }
        var_18 = (arr_2 [i_0] [1] [i_0]);
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_19 = ((((((var_1 == 212) != (((var_11 + 2147483647) >> (var_13 - 35336)))))) >= (arr_6 [i_2] [i_2])));
        var_20 = (((arr_5 [i_2] [i_2]) && var_12));
        arr_7 [i_2] = var_3;
        arr_8 [i_2] = (((((var_12 <= (arr_6 [i_2] [i_2])))) >> var_7));
    }
    var_21 = var_7;
    var_22 = (~var_3);
    var_23 += min((((((max(var_0, 44))) < var_9))), (((((var_11 ? var_1 : 0))) ? ((var_12 ? var_10 : var_6)) : var_0)));
    #pragma endscop
}
