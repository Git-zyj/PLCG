/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_13));
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [12] = arr_0 [i_0];

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_17 = (max(var_17, (arr_5 [i_1 - 1] [i_1] [i_1 - 2])));

            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                var_18 = (max(var_18, var_10));
                var_19 = (min(var_19, var_13));
                arr_8 [i_1] [i_2 - 1] = var_7;
            }
            for (int i_3 = 4; i_3 < 16;i_3 += 1)
            {
                var_20 = (max(var_20, var_5));
                var_21 = (min(var_21, (arr_10 [i_0] [i_1 - 2] [i_3 - 3])));
                var_22 = (min(var_22, (arr_11 [i_1 - 2] [i_3 - 3] [i_1 - 2])));
            }
        }
    }
    #pragma endscop
}
