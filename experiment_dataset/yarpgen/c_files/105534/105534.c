/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (arr_1 [i_0])));
        arr_3 [20] = ((((min((((1 ? (arr_0 [5]) : (arr_0 [i_0])))), var_10))) ? (((((max((arr_1 [i_0]), (arr_1 [i_0]))) || ((max(-13, (arr_0 [i_0])))))))) : ((((((arr_0 [i_0]) ? (arr_1 [i_0]) : 16667745160514421284))) ? (((13771552855374209895 ? (arr_0 [i_0]) : 62441))) : -3997493229245641486))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((!(((var_1 ? var_8 : 581859093)))))) * (!3103)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_15 [5] [i_4] [i_3] [i_3] [11] [i_1] = max(((((arr_1 [i_1]) ? 786789247913962929 : (arr_1 [i_3])))), ((~((var_0 ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : var_0)))));
                        arr_16 [18] [i_2] [i_3] [i_4] = ((!(arr_14 [i_1] [i_2] [i_3] [i_4])));
                    }
                }
            }
        }
    }
    var_11 = (min(var_9, ((var_9 ? (1855503167281400858 >> 1) : (((var_7 ? -7844572812944823944 : var_0)))))));
    #pragma endscop
}
