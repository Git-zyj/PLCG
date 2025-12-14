/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = ((-(arr_1 [i_1 + 1] [i_0])));
                    var_16 = (((!8026101957630018331) > (arr_1 [i_0] [i_0])));
                    var_17 = 10420642116079533285;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                arr_11 [i_4] = (min(((((max(8026101957630018331, (arr_9 [i_4] [i_3] [i_4]))) > (arr_7 [i_3 + 1])))), (arr_9 [i_4] [i_3 + 2] [i_3])));
                var_18 = ((((((((~(arr_10 [i_3 - 1] [i_4] [i_4])))) ? (min((arr_7 [i_3]), var_10)) : ((max((arr_9 [i_3] [i_4] [i_4]), var_14)))))) ? (((~(arr_8 [i_3] [i_3 + 1] [i_4])))) : (((((~(arr_10 [i_3] [i_3 + 1] [i_3 + 1])))) ? var_12 : (var_13 & var_14)))));
            }
        }
    }
    var_19 = (max(var_19, (((10420642116079533285 | (var_8 ^ 10420642116079533295))))));
    #pragma endscop
}
