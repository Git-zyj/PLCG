/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] &= 9086165004607041195;
        var_12 = (max(var_12, (((!(~var_0))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] = (((min((arr_10 [i_3] [i_3] [i_3] [i_3]), 33))));
                    var_13 += (((max(var_10, (~var_4))) & (-5738791526467043690 < 47458)));
                }
            }
        }
        arr_13 [i_1] = (min((max(var_2, (((arr_9 [i_1] [i_1] [i_1]) + (-127 - 1))))), var_2));
        var_14 = (max((max((arr_5 [i_1]), (max(65535, 5738791526467043690)))), 65510));
        arr_14 [18] [18] = ((((max(((222 ? 115 : (arr_7 [17]))), 19))) && ((((-(arr_11 [i_1] [i_1] [i_1] [i_1])))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = ((arr_5 [i_4]) % (arr_3 [i_4]));
        arr_18 [i_4] = (((arr_15 [i_4]) ? (arr_6 [i_4] [i_4] [i_4]) : (arr_15 [i_4])));
    }
    var_15 ^= (var_7 > -81);
    var_16 ^= ((var_9 >= (((var_3 < var_1) ? var_6 : 7))));

    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        var_17 = (arr_10 [i_5] [7] [i_5 + 1] [i_5]);
        var_18 = (((((((arr_9 [i_5 - 1] [i_5 - 2] [i_5]) <= (51 - var_1))))) % -5902299123545882705));
    }
    var_19 = (max(var_7, ((var_7 ? ((var_6 ? 4294967295 : 127)) : (((max(var_10, var_2))))))));
    #pragma endscop
}
