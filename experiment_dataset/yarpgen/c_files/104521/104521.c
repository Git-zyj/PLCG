/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1929;
    var_15 = (min(var_11, (min(var_12, -107))));
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (min(((min(1929, (arr_0 [i_0])))), (min((~var_11), ((max((arr_2 [i_0] [i_0]), 63623)))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = (max(var_0, (max(((var_12 ? var_13 : (arr_2 [i_1] [i_0]))), var_13))));
            var_17 = (min(var_17, var_10));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_13 [i_0] [i_0] [i_0] = (min(-266810528, 9497544979569907205));
            var_18 += (!63607);
        }
        var_19 = (min(var_19, (((!((min(1, (min((arr_4 [i_0] [i_0]), 0))))))))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_20 = (min(var_20, (((var_5 ? (!var_8) : ((max((!var_4), var_0))))))));
        var_21 = (max(-1, 3105));
        var_22 = (min(var_22, var_8));
        var_23 = (max(var_23, 1048575));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_24 -= var_9;
        arr_21 [i_4] [i_4] = (arr_20 [i_4]);
        arr_22 [i_4] = min(((min(59824, 932375185))), (min(496, (arr_17 [i_4]))));
    }
    var_25 -= var_8;
    #pragma endscop
}
