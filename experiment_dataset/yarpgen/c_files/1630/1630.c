/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= 1;
    var_11 = ((-(min(var_8, -var_9))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 *= (((min(((max(14336, 14324))), ((var_0 ? var_8 : (arr_0 [i_0] [i_0]))))) == ((((((arr_0 [i_0] [i_0]) < 14364)) ? (max((arr_1 [i_0]), -14341)) : ((14364 >> (var_0 - 18330))))))));
        arr_2 [6] = (((((((((arr_0 [i_0] [i_0]) ? 14367 : (arr_0 [i_0] [i_0])))) ? -14339 : (((var_3 ? 14336 : 14350)))))) ? ((var_8 / ((-(arr_0 [12] [i_0]))))) : (((((arr_1 [8]) > -14336))))));
        var_13 = ((arr_0 [i_0] [i_0]) < -14350);
        arr_3 [0] [i_0] &= (arr_0 [i_0] [i_0]);
    }
    var_14 -= (-((var_4 << ((min(var_6, var_1))))));
    #pragma endscop
}
