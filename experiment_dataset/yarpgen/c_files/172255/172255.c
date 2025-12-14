/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = arr_1 [i_0] [i_0];

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_11 = (max(var_11, (((((((max(var_5, (arr_5 [i_0] [i_1])))) && (arr_4 [i_1 + 3] [i_1 - 2] [8]))) ? ((((arr_3 [i_1 + 3]) ? (((arr_1 [12] [i_1 - 3]) ? var_2 : (arr_4 [14] [i_0] [14]))) : 85))) : ((127 ? ((var_4 ? (arr_2 [4]) : var_8)) : (((max((arr_2 [4]), var_7)))))))))));
            var_12 = (max((((-22 / var_7) / (arr_2 [i_0]))), (((arr_2 [i_0]) ? (min(var_6, 1854002140)) : ((var_1 ? var_2 : 10))))));
            arr_6 [i_0] [i_0] = (min((min(((~(arr_3 [i_0]))), ((var_0 | (arr_3 [i_0]))))), (arr_4 [i_0] [i_0] [i_0])));
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_13 ^= ((~(arr_1 [2] [2])));
            var_14 = (((max(-3, 1475264481)) / 127));
            var_15 ^= var_3;
            var_16 ^= 16383;
            var_17 = (arr_3 [i_0]);
        }
    }
    var_18 = (max(((((min(var_1, var_9))) ? (var_6 + var_8) : var_7)), var_2));
    var_19 = (min((max(var_6, (~var_4))), ((9269 ^ ((max(var_4, var_2)))))));
    var_20 &= (var_0 * var_4);
    #pragma endscop
}
