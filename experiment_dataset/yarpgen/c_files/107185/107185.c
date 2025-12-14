/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 += (((arr_0 [i_0] [i_0]) > (min((arr_1 [i_0] [i_0]), ((((arr_1 [i_0] [i_0]) ? 6 : var_8)))))));
        arr_2 [i_0] = 13;
        var_12 = (min(var_12, (!27956)));
        arr_3 [12] &= ((-85 + (min(((((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [i_0]) - 114))))), (arr_0 [i_0] [7])))));
    }
    var_13 = (max(var_13, ((((912724734 && (((var_0 ? var_6 : 0))))) ? var_5 : ((max(-var_7, ((var_0 ? var_4 : 5250090294778358690)))))))));
    #pragma endscop
}
