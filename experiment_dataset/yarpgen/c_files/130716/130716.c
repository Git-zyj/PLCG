/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max((min(3715354863475744409, var_1)), -0))) ? (((((var_9 ? var_3 : var_5))) ? (var_2 | var_2) : var_0)) : ((((((min(-19, -27)))) < var_5)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((~((-(arr_0 [i_0]))))), (((~(arr_1 [i_0]))))));
        var_12 = (((((~(arr_1 [i_0])))) ? (((((92 ? -7699416434354494024 : var_5))) ? ((var_10 ? (arr_1 [i_0]) : 0)) : (-71 < var_3))) : (((((((var_6 < (arr_0 [i_0]))))) < (((arr_0 [i_0]) / var_10)))))));
    }
    var_13 = ((~(max(var_4, var_0))));
    var_14 = ((((((max(var_1, var_6))) || (!var_9))) ? -92 : var_0));
    var_15 |= ((-var_10 ? var_9 : (((var_10 / var_7) ? var_10 : var_5))));
    #pragma endscop
}
