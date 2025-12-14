/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((~(max(var_16, -var_3)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_1 [i_0]) % var_8))) ? (max(var_1, ((var_1 ? -7475336003408481441 : (arr_2 [i_0]))))) : ((((max(10269, var_10))) ? (var_7 < var_3) : ((var_6 ? (arr_0 [i_0]) : (arr_2 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_8 [i_0] = var_10;
            arr_9 [i_0] = var_19;
        }
        var_21 ^= (arr_5 [14]);
        arr_10 [i_0] = (((max((arr_2 [i_0]), var_17)) - ((((arr_3 [i_0] [i_0]) ? var_2 : (arr_1 [i_0]))))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        arr_13 [i_2] = (arr_7 [i_2]);
        arr_14 [i_2] = (arr_12 [i_2 + 1] [i_2]);
        arr_15 [i_2] [i_2] = (min((max((((17758 >> (var_14 - 11149421549375869671)))), var_10)), ((max(((((arr_1 [i_2]) && (arr_1 [i_2])))), (arr_1 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_22 &= ((arr_16 [i_3]) ^ (((((((arr_17 [10]) + 2147483647)) >> (var_14 - 11149421549375869686))) & ((min(25775, (arr_16 [i_3])))))));
        var_23 = (min(var_23, ((((min((arr_17 [0]), ((var_14 ? (arr_17 [20]) : 217))))) ? -70 : (((2000394409571388870 ? (!var_1) : (((3971867025 <= (arr_16 [i_3])))))))))));
        arr_18 [i_3] [i_3] = (arr_16 [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_23 [i_4] &= var_14;
        arr_24 [i_4] = ((-(var_10 && var_16)));
    }
    #pragma endscop
}
