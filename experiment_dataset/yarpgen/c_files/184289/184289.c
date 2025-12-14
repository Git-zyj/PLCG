/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (+(((!((((-1 + 9223372036854775807) >> (3758096384 - 3758096347))))))));
    var_12 |= (var_3 ? (max(var_9, (var_6 || 4294967295))) : var_1);

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_13 *= (-17 ? (((((arr_1 [i_0 - 1] [i_0 + 1]) && (arr_1 [i_0 + 2] [i_0 + 1]))))) : ((((((arr_1 [i_0 - 1] [i_0 + 1]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) - (var_10 | 2147481600))));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            arr_4 [16] [16] = (((((~(arr_0 [i_0] [i_1])))) * (~10)));
            var_14 = 2147481600;
            arr_5 [i_0] = ((+(((arr_2 [i_0 + 1] [i_1 + 1]) << (((arr_2 [i_0 - 1] [i_1 - 1]) - 3798177642))))));
        }
        var_15 = (arr_1 [i_0] [i_0 + 1]);
        arr_6 [i_0] = (((max(((~(arr_1 [i_0] [i_0]))), (arr_1 [i_0 - 1] [i_0 - 1]))) << (((((min((-2147483647 - 1), (arr_1 [i_0 + 2] [i_0 + 1]))) - -2147483627)) + 27))));
    }
    #pragma endscop
}
