/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = (min(var_18, ((max(((min(((var_9 >> (var_9 - 79))), 0))), ((((min(var_14, 2147483647))) & var_11)))))));
    var_19 = (min(((var_2 ? (((max(var_5, 200)))) : var_15)), var_5));

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_20 = (min(var_20, -56));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_21 = (((((63 ? 1 : 1)) | -68)));
            var_22 = ((!(((var_3 ? (arr_3 [i_1] [i_0 - 1]) : (arr_1 [i_0] [i_0]))))));
        }
        arr_5 [i_0] [i_0] = ((((min(var_11, 170))) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0 - 2] [i_0 - 4]) : var_15)) : (arr_0 [i_0])));
        arr_6 [i_0] [i_0] = ((((((var_4 ? 28867 : var_3)) ? (((arr_2 [i_0] [8]) >> (((arr_1 [i_0 - 2] [12]) + 4895167656865069793)))) : (~var_6)))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_9 [i_2] = ((((min(var_9, (arr_1 [i_2] [i_2])))) ? (((arr_1 [i_2] [i_2]) ? (arr_1 [i_2] [i_2]) : 16819011590698647058)) : var_15));
        var_23 = (arr_0 [i_2]);
        arr_10 [14] = 0;
    }
    #pragma endscop
}
