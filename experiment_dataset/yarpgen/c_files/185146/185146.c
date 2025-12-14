/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_0] = (min(-2147483638, ((-(arr_3 [i_0] [i_0] [8])))));
            arr_5 [0] &= (max((!var_10), (arr_0 [8])));
        }
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            var_18 = (arr_6 [i_2 + 3] [i_2 - 3] [14]);
            arr_10 [i_2] [i_2] [i_0] = min(((((!(-2147483647 - 1))) ? (~2147483624) : (-2147483647 - 1))), 2147483647);
            arr_11 [i_0] [i_0] [i_0] = var_12;
        }
        arr_12 [i_0] [i_0] = var_9;
        var_19 ^= (-2147483647 - 1);
    }
    var_20 = (max(var_2, var_10));
    #pragma endscop
}
