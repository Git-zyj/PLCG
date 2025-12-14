/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((((var_4 ? 240 : 25655)) | (~-452)))));
    var_13 = var_0;
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (arr_5 [i_1 - 2] [i_1 - 1] [i_0]);
            var_15 = var_3;
        }
        arr_7 [i_0] = (i_0 % 2 == zero) ? ((((((arr_1 [i_0] [i_0]) ? (arr_3 [i_0]) : -1)) << (!var_10)))) : ((((((((arr_1 [i_0] [i_0]) ? (arr_3 [i_0]) : -1)) + 2147483647)) << (!var_10))));
    }
    #pragma endscop
}
