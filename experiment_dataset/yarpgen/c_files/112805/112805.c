/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~29745);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 ^= (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (max((35770 | 29737), ((((arr_2 [i_0]) == (((arr_3 [i_0] [3] [7]) ? var_7 : (arr_2 [1]))))))));
            arr_5 [i_1] [i_0] [i_0] = (~33112);
            var_20 = (((((~(arr_3 [i_0] [i_0] [i_0])))) | (((arr_0 [i_0] [i_1]) & var_13))));
        }
    }
    var_21 |= var_17;
    var_22 = var_5;
    #pragma endscop
}
