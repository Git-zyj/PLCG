/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_8 << (var_1 * var_9)));
    var_15 = ((var_10 ? (min(193, ((var_2 ? 28356 : -4692)))) : (((!-28361) ? ((53597 ? var_5 : var_3)) : -230))));
    var_16 = 9827720012080034654;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_17 = (((((4713113887884330779 ? -5822256549536471992 : -2564225662327012816))) ? (((arr_0 [i_0 - 1] [i_0 + 2]) ? 100 : (arr_0 [i_0 + 1] [i_0 + 1]))) : (((((min((arr_0 [i_0 + 2] [0]), 1))) && ((max((arr_2 [i_0]), 1))))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_18 = (((arr_0 [i_0 - 2] [i_0 - 2]) >> (!32329)));
            arr_5 [6] &= ((!((!(arr_1 [10])))));
            var_19 = (arr_0 [i_0] [i_0]);
        }
        arr_6 [i_0] = (max((arr_3 [i_0] [i_0] [i_0]), (max(var_13, ((14945 * (arr_0 [i_0] [4])))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_20 |= (min(247, var_7));
                        arr_17 [i_2] [i_2] [i_2] [i_3] [i_4] [i_5] = (min((((~(((arr_10 [i_2]) ^ 5468))))), (max((max(-394409559, 1171785028112492860)), (arr_15 [i_3])))));
                    }
                }
            }
        }
        var_21 = (min(var_21, (((((((var_0 ? 1 : 48709))) ? (arr_13 [i_2]) : (((!(arr_8 [i_2] [i_2]))))))))));
        var_22 = (min(var_22, var_13));
    }
    var_23 = (var_9 * var_10);
    #pragma endscop
}
