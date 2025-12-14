/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_10;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [21] [i_1] [i_0] [10] = ((((((arr_3 [i_0]) ? (arr_3 [i_2]) : (arr_3 [14])))) ? (arr_3 [i_3]) : ((min(var_5, (!var_1))))));
                        var_11 = max((min((((arr_4 [i_3] [i_0] [i_0]) ? (arr_8 [1] [i_1] [1]) : (arr_3 [i_0]))), (arr_10 [13] [14] [i_2] [i_2] [i_2] [i_2]))), var_4);
                        arr_12 [7] [i_0] [3] [7] [i_0] [3] = (min(var_2, 29113));
                        var_12 = ((!((max(var_8, (arr_0 [i_0]))))));
                        var_13 += ((45 ? (((((arr_6 [i_0] [i_0] [i_2]) >= (min(1, (arr_5 [9]))))))) : (arr_5 [13])));
                    }
                }
            }
        }
        var_14 = (max(var_14, ((((((min((-9223372036854775807 - 1), (arr_1 [i_0]))))) ? 5760009699807830526 : ((min((arr_6 [i_0] [i_0] [i_0]), (arr_3 [i_0])))))))));
        var_15 = (min(((min(var_0, 29113))), (((~var_7) ? 0 : ((var_6 & (arr_1 [i_0])))))));
        arr_13 [i_0] = (-107 & 0);
    }
    var_16 = (min(var_4, ((((~169) <= (var_3 / var_1))))));
    #pragma endscop
}
