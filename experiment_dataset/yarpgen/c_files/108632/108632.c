/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!(-1 & var_1))) ? ((max(var_9, (min(224, -636905871))))) : (min(224, 4339953561060800289)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (min(((-1465489719 ? -4054790311226275969 : 0)), (min((min(4878235233393336941, 31)), (((15141639551299044325 ? 224 : (arr_1 [7]))))))));
                var_15 = (min(var_15, ((((((((14106790512648751339 / (arr_2 [14])))) ? (var_5 && var_2) : (182 != 99)))) ? (max(((min(229, (-2147483647 - 1)))), (min((arr_5 [2] [2]), 663719312)))) : -1805390598))));
                var_16 = (max(var_16, ((max(var_9, ((2016 ? 1 : ((var_1 ? 48160 : (arr_0 [i_1]))))))))));
                var_17 = ((((((18 ? 1 : (arr_0 [9])))) <= -3605268453438169386)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_2] [i_1] [2] [i_2] [i_2] = ((~(((min(var_1, 5))))));
                            var_18 = ((~(min(((min((arr_6 [12] [11] [14] [11]), (arr_1 [i_2])))), var_10))));
                            var_19 = (min(var_19, 74735308));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
