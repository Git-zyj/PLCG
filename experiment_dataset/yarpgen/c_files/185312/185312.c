/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (!21860);
        var_11 = arr_1 [16];
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_12 = (min((max((arr_0 [i_1]), -1295652461)), (((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_13 = (min(var_13, ((!(arr_0 [i_5])))));
                            arr_16 [i_1] [i_1] [i_1] [i_1] [2] = -6147736214060978456;
                            var_14 = (max(var_14, (arr_14 [i_1] [i_1] [i_5] [i_4] [i_5] [i_3])));
                            var_15 &= (arr_13 [i_3] [i_3] [i_3]);
                        }
                        var_16 -= ((((((arr_8 [i_3] [i_3] [16] [i_3]) ? (arr_8 [i_1] [i_2] [i_3] [i_2]) : (arr_11 [i_1] [i_1] [i_3] [i_1] [i_3] [i_2 - 2])))) ? (max(6147736214060978456, 1)) : ((min((arr_11 [i_1] [i_3] [i_3] [i_4] [i_3] [i_2 - 3]), 281852727)))));
                        arr_17 [i_2] [0] [i_1] = (max(37639, 1));
                        arr_18 [0] [i_1] [2] [i_4] = ((max(-65, -6147736214060978456)));
                        var_17 *= (max(((640869703 ? (arr_8 [i_1] [i_1] [i_1] [i_4]) : -2094957706)), (arr_12 [3] [i_2])));
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, var_8));
    var_19 = (max(var_19, var_5));
    #pragma endscop
}
