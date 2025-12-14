/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [6] = 1073741808;
        arr_4 [i_0] = ((!((min((((38 ? 1 : 1))), var_15)))));
        var_20 = 17032;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_21 = (var_0 + 216);
            arr_9 [6] = (arr_8 [1]);
        }
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_12 [i_2] = var_13;
        var_22 = 2982365549;
        arr_13 [i_2] = (arr_1 [i_2] [i_2]);
    }
    var_23 = var_4;
    #pragma endscop
}
