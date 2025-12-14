/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((~(((arr_0 [i_0]) ^ (arr_0 [i_0])))));
        var_19 = (max(var_19, (((((min((max(184582144, 127)), (arr_0 [i_0])))) < (max(((((arr_0 [8]) & -1))), (arr_1 [i_0]))))))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_20 = (arr_4 [i_1]);
            arr_5 [i_0] [10] [i_1] = (arr_0 [i_0]);
        }
        arr_6 [i_0] = (min((min((arr_0 [i_0]), (arr_1 [i_0]))), (min((arr_1 [i_0]), (arr_3 [i_0] [2] [i_0])))));
    }
    var_21 = ((((-(min(var_3, var_16)))) + ((min(var_8, var_0)))));
    #pragma endscop
}
