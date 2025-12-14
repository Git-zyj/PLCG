/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((max(((((((min(var_8, var_10)))) / 2583952444))), (max(var_7, ((max(var_5, 1218241415))))))))));
    var_13 = 29109;
    var_14 = (((((!var_1) ? var_6 : ((max(36427, 1)))))) ? (max(12, (28757 & 11240275872138636080))) : 36433);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 ^= (arr_8 [i_3 + 1] [i_0]);
                            arr_12 [i_3] [i_1] [i_3] = (((min((((arr_3 [i_3] [i_2] [i_0]) & 36426)), (15 | var_8))) << (var_9 - 1894765435591269674)));
                        }
                    }
                }
                arr_13 [i_1] = (((min((arr_1 [i_0]), 10))) ? ((max(1711014851, 0))) : (max(var_10, var_9)));
                arr_14 [i_0] [15] = (((min(((5117 ? var_5 : var_4)), 0)) + (arr_6 [20] [20] [i_1])));
            }
        }
    }
    #pragma endscop
}
