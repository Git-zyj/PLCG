/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = (min(((((0 && 29113) && (arr_1 [i_0])))), (arr_1 [i_0])));
        arr_3 [i_0 + 1] [i_0] = ((((min(((((arr_1 [i_0]) && -1))), (arr_1 [i_0])))) ? ((max((arr_1 [i_0]), 0))) : (arr_0 [i_0 - 1])));
        var_21 = var_19;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                arr_9 [i_0] [i_2] = (((13966 + 5525814973756794613) - var_8));
                var_22 = (max(var_22, (~51570)));
                var_23 = (~-1);
                var_24 = 51570;
            }
            var_25 = (((arr_7 [i_0 - 1] [i_0 + 1] [i_1] [i_1]) ? var_11 : (arr_7 [i_0 - 1] [i_0 + 1] [i_1] [i_1])));
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    var_26 = (((arr_10 [i_5 - 1]) ? (max(12920929099952757006, ((min((arr_13 [i_3] [i_4]), (arr_19 [i_3] [i_4] [i_5 - 1])))))) : ((((!(arr_16 [i_5 - 1] [i_4] [i_5 - 1] [i_3])))))));
                    arr_20 [i_4] = ((((arr_12 [i_3] [i_3]) ? ((1 << (arr_11 [i_3]))) : (arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
                    arr_21 [i_3] [i_4] [i_5 - 1] = (((((max(4294967289, -45))) ? var_15 : (((((arr_13 [i_4] [i_5 - 1]) > (arr_15 [i_3] [i_4] [i_5 - 1]))))))));
                    var_27 = ((((arr_17 [i_3] [i_5 - 1] [i_5 - 1]) && (arr_17 [i_3] [i_4] [i_5 - 1]))));
                    var_28 = (15 < var_19);
                }
            }
        }
    }
    #pragma endscop
}
