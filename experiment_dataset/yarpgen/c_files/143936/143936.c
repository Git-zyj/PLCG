/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (var_14 ^ var_1)));
    var_16 = var_6;
    var_17 = ((-4756105522616730978 ? 680607984 : var_14));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_18 = (((((680607984 ? var_7 : 31)) <= var_2)));
        arr_4 [i_0] = (!61657);
        var_19 = (((min(-680607968, (arr_3 [i_0 + 1])))) ? ((max(1787995925, 680607969))) : (((max(var_10, var_12)) + (arr_1 [i_0 + 1] [i_0]))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_8 [i_1] = ((var_9 ? ((var_1 ? (arr_3 [i_0]) : (arr_7 [i_0 - 1]))) : (-2147483647 - 1)));
            var_20 = (max(var_20, ((((((var_10 << (var_1 - 124)))) ? -2147483643 : (arr_6 [i_0 + 1] [i_1]))))));
            var_21 = (~-680607984);
            var_22 = (max(var_22, ((((743913626 & var_3) >> (100 - 69))))));
            var_23 = (max(var_23, (arr_5 [i_0] [i_0 + 1])));
        }
        var_24 = ((~(((~var_0) | (max(91, (arr_2 [i_0] [16])))))));
    }
    var_25 |= (max(((max(109, 3943293556023337345))), (max(var_6, 12))));
    #pragma endscop
}
