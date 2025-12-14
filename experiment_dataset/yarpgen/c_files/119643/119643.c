/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!65535);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_18 = ((((((((-(arr_1 [4]))) >= (!var_11))))) % (max((var_12 / var_1), (arr_2 [i_1 + 1] [i_1])))));

            /* vectorizable */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                var_19 = (max(var_19, (((((1 ? 65535 : 1)) >= 1)))));
                var_20 ^= (arr_0 [i_1 - 2]);
            }
        }
    }
    var_21 = (max(var_21, (((~(max((var_3 & var_6), var_13)))))));
    #pragma endscop
}
