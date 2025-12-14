/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_9 ? 55832 : ((max((var_0 == var_4), var_0)))));
    var_14 = (min(((((!var_10) ? (min(610588945, 16)) : var_5))), var_1));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = (max((((max(3262177199756789734, (arr_1 [i_0] [i_0]))))), var_11));
        arr_5 [i_0] |= (((max((arr_0 [i_0]), (0 == -6510136088971329524)))) ? ((max(var_5, (arr_2 [i_0] [i_0])))) : 2697965427378251087);
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((min((15377594041527092413 && 6510136088971329524), ((-3208333634241238861 && (-2147483647 - 1))))));
        arr_9 [i_1] [i_1] = (((((max((arr_7 [i_1 + 2]), (arr_7 [i_1 - 1]))))) == (((arr_7 [i_1]) ? (arr_0 [i_1]) : ((501568479 ? (arr_7 [i_1]) : (arr_6 [i_1])))))));
    }
    #pragma endscop
}
