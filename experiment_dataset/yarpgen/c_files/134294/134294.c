/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(max(((min(var_1, var_6))), var_10))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = 8;
        var_15 = (max(var_15, (arr_1 [i_0])));
        var_16 ^= (max(((76 ? (var_12 + 40) : (min(var_5, (arr_2 [i_0]))))), (max(((max((arr_2 [i_0]), var_2))), ((-(arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = ((-1 ? (!var_7) : var_12));
        arr_8 [i_1] = (arr_6 [i_1] [i_1]);
        var_17 = (93 || (var_7 | var_6));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_13 [i_2] = ((+(((1 + 189) ? (arr_9 [i_2] [15]) : 1))));
        var_18 -= (((((-var_9 >> (((arr_12 [i_2] [i_2]) - 8707))))) ? (!2116941509) : ((~(arr_10 [i_2])))));
        var_19 = min(((((arr_10 [i_2]) ? ((-(arr_11 [i_2] [i_2]))) : (arr_9 [i_2] [i_2])))), (max(((min(189, 164))), (min(var_9, (arr_9 [i_2] [i_2]))))));
    }
    var_20 = var_10;

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_16 [i_3] = (arr_15 [1] [i_3]);
        var_21 = (max(var_21, ((((((arr_14 [1] [1]) | ((min(-1, var_12))))) * (max((~93), ((max(256, var_11))))))))));
        arr_17 [i_3] = (((arr_15 [i_3] [i_3]) > (min(var_1, var_0))));
    }
    var_22 = (min(var_3, (!var_10)));
    #pragma endscop
}
