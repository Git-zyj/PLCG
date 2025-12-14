/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (min(var_2, var_5));
    var_13 = (max(198847332, 1));
    var_14 = ((((((var_3 + 9223372036854775807) >> (198847342 - 198847282)))) ? (-29932 >= 0) : var_0));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 |= ((2229266620 >> (var_5 - 57)));
        var_16 = max((((min((arr_1 [i_0] [i_0]), var_2)))), (max(1, 1073741823)));
        var_17 = 1073741821;
        var_18 |= ((((max(4294967277, (arr_0 [i_0] [i_0])))) ? ((((arr_0 [i_0] [i_0]) == 4))) : (var_2 | 250)));
    }
    #pragma endscop
}
