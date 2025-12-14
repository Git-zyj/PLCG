/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 *= ((~((min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1]))))));
                var_17 = ((((((!16372) ? ((0 ? (arr_0 [i_0]) : 2869235811)) : ((((arr_2 [i_0] [i_0]) ? 48327 : (arr_1 [i_0]))))))) ? ((0 ? 853 : 0)) : (((arr_3 [i_0] [i_0]) * ((((arr_2 [i_0] [i_0]) >= (arr_2 [i_0] [i_0]))))))));
                var_18 = var_14;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_19 = (min(var_19, (arr_2 [i_0] [i_1])));
                    var_20 = (((arr_8 [i_0] [i_0] [i_0] [i_2]) ? (arr_6 [i_0] [i_1] [i_2] [i_0]) : (arr_4 [i_0] [i_0])));
                    arr_9 [i_0] = (arr_2 [i_0] [i_0]);
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_21 = ((((~(arr_6 [i_0] [i_0] [i_1] [i_3]))) % (((min(1, 4096))))));
                    var_22 = (max(var_22, ((((!(((1 ? (arr_5 [i_0] [i_0] [i_3]) : var_3)))))))));
                }
                arr_12 [i_0] = (((((~(arr_6 [i_1] [i_1] [i_0] [i_0])))) ? (min((0 - var_5), (33152 + 6950426665560192877))) : (arr_6 [i_0] [i_0] [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
