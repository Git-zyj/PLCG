/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [0] |= ((!((((1 ? var_13 : (arr_1 [8])))))));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = ((((1 ? 48343 : 201))));
            var_17 = (((max(-64, (arr_6 [1] [i_1 + 3] [i_0]))) * (((arr_6 [i_1] [i_1 + 3] [i_1 + 3]) ? (arr_5 [i_0] [i_1 + 3]) : var_12))));
        }
        arr_8 [i_0] = ((((max(((85 ? var_3 : (arr_6 [i_0] [i_0] [i_0]))), ((max((arr_5 [i_0] [i_0]), 224)))))) ? ((-407527837 ? var_10 : (~var_10))) : var_9));
        arr_9 [i_0] = -201;
    }
    var_18 = var_11;
    #pragma endscop
}
