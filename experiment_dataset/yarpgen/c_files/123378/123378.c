/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 -= 1718187287;
        arr_4 [i_0] = (min((max(var_14, (~var_14))), (((((max((arr_1 [i_0]), 1))) ? (~1) : ((max(31, var_2))))))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_7 [i_1] = max((((((arr_1 [i_1]) ? (arr_1 [i_1 + 2]) : (arr_6 [i_1]))))), ((((((arr_3 [i_1]) / var_1))) ? var_15 : (!var_2))));
        var_17 = (max(var_17, (((~((+(max((arr_0 [i_1] [i_1 + 1]), 7965890345165286105)))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_18 = 8822666552613419846;
                        var_19 ^= ((((4294967295 && (arr_2 [i_1 + 2]))) ? ((var_10 ? (arr_8 [i_2]) : (arr_8 [i_1 + 1]))) : (((!((((arr_6 [i_3]) ? 38 : (arr_8 [i_1])))))))));
                        var_20 = ((((max((arr_10 [i_1 + 1]), (arr_10 [i_1 + 1])))) ? ((max((arr_10 [i_1 + 1]), (arr_10 [i_1 + 1])))) : ((min(1, 111)))));
                        var_21 = (arr_1 [i_2]);
                    }
                }
            }
        }
    }
    var_22 = var_13;
    #pragma endscop
}
