/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(1427358557, 6651252861039151031));
    var_19 = var_7;
    var_20 = 91;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((((~-6651252861039151002) * (!var_8))));
        arr_4 [i_0] = (((arr_2 [i_0]) ? (min(65531, 2867608739)) : (((((arr_2 [i_0]) ? var_15 : 2867608720))))));
        var_21 ^= ((((((((arr_1 [i_0]) ? var_3 : var_0)) | 91))) - ((var_13 / (arr_1 [i_0 + 3])))));
    }
    #pragma endscop
}
