/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((((((~(arr_1 [i_0])))) ? (~var_10) : (arr_1 [i_0]))));
        arr_3 [i_0] [8] = ((((var_1 ? (arr_0 [i_0]) : ((1 ? var_9 : 65523))))) || (arr_1 [2]));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_15 = ((min(15, 12)));
        arr_6 [i_1 + 1] = ((+(((var_1 / var_7) / (max(var_0, (arr_4 [i_1])))))));
        arr_7 [i_1] = (((arr_5 [i_1]) && var_4));
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (arr_1 [i_2]);
        arr_13 [i_2] = (min((min(-2074034780, 65523)), (arr_4 [1])));
        var_16 = (min(((var_12 ? 6 : (arr_4 [i_2]))), (((arr_5 [i_2]) ? (arr_5 [i_2]) : (arr_5 [i_2])))));
        var_17 = -1664006683;
        arr_14 [i_2] = (((min((!9004164776008074367), ((var_3 ? 10 : 6231))))) ? ((((!((min((arr_1 [i_2]), 10))))))) : (((arr_5 [i_2]) ? -var_3 : (~15943741300241542658))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_18 = (max((((15943741300241542658 ? 1 : 1540228215))), (max((arr_8 [i_3]), 3370166988669951381))));
        var_19 = (min(-731469808453402187, ((min((((arr_16 [i_3]) ? (arr_4 [i_3]) : var_13)), (~var_7))))));
        var_20 = ((!((max((arr_16 [i_3]), ((-38 ? 4 : 12)))))));
    }
    #pragma endscop
}
