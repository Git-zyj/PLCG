/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_0, 1));
    var_11 ^= (((((~(31532 % 33986)))) ? var_5 : ((242 ? -1849 : 16))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_12 ^= (((2309811706 > 31532) + var_3));
        arr_4 [i_0] = var_9;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = var_5;
        var_13 = (min(var_13, (((var_0 ? ((max((arr_1 [i_1]), 1))) : ((min(1, 126))))))));
        var_14 = (max(var_8, (((arr_1 [i_1]) + (arr_1 [i_1])))));
        arr_9 [1] = -var_0;
    }
    for (int i_2 = 4; i_2 < 22;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = ((-((((((var_0 && (arr_11 [i_2] [i_2]))))) - ((11043 ? 65244 : 3666506453))))));
        arr_13 [i_2] = (13879 || 7731498553805900808);
        var_15 = (((min((((arr_11 [i_2 + 2] [i_2 - 3]) ? (arr_11 [i_2] [i_2 - 2]) : 2794716692)), (arr_10 [i_2] [i_2]))) & (((max(0, (min(31535, 1))))))));
    }
    var_16 &= var_4;
    var_17 = var_2;
    #pragma endscop
}
