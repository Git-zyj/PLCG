/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (max((arr_0 [i_0] [14]), (((!(((var_3 ? 1400247778 : var_2))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (arr_5 [i_0] [i_0] [i_2]);
                    arr_9 [i_2] = (((arr_2 [i_0]) + ((((max(var_2, (arr_5 [i_2] [i_2] [i_2])))) ? (max((arr_2 [i_0]), var_0)) : (var_4 ^ 9223372036854775789)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_1] [i_0] = (((!1400247771) || 1400247778));
                        arr_14 [i_0] [i_1] [i_2] [i_2] = (((arr_7 [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_3] [i_2] [5]) : var_1));
                        var_12 -= ((arr_1 [i_0]) > var_6);
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-1400247771 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])));
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_0] = (((var_5 / var_1) ? 1 : (arr_12 [i_0] [i_0] [i_2] [i_1])));
                }
            }
        }
    }
    var_13 = (min((-4033367819 / var_4), ((max((var_2 % var_1), (var_2 <= 1))))));
    var_14 = var_0;

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_15 = (max(1, 1400247767));
        var_16 = (((-114306197 && -1400247767) ? ((min((arr_6 [i_4] [i_4] [i_4] [i_4]), (arr_3 [i_4])))) : ((-(arr_7 [i_4] [i_4] [i_4])))));
        arr_20 [i_4] = (max(-15852, ((((arr_4 [i_4] [i_4] [i_4] [i_4]) > (arr_18 [i_4]))))));
    }
    #pragma endscop
}
