/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((~(~var_4))), ((((var_2 ^ var_2) ? ((var_3 ? var_0 : var_1)) : (min(var_6, var_1)))))));
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((243238227 ? ((562949952372736 ? 572010778269771715 : (((-(arr_2 [i_0 + 1])))))) : (arr_8 [i_0] [i_3] [i_0] [i_0] [i_3]))))));
                            arr_10 [i_0] [i_0] = (max((arr_3 [i_0] [i_3 + 3]), ((((arr_3 [i_0] [i_3 + 3]) <= var_2)))));
                            var_14 = (((((var_5 ? (arr_1 [i_2] [i_2]) : (arr_1 [i_1] [i_2])))) ? (((!(arr_8 [i_3 - 2] [i_0] [i_2] [i_0] [i_0])))) : ((((arr_1 [i_1] [i_2]) == 44234)))));
                            arr_11 [i_0] [i_0] [i_2] [i_2] [i_2] = var_4;
                        }
                    }
                }
                arr_12 [i_0] [i_0 - 3] = (~(((var_3 + -50) ? (((~(arr_9 [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 2])))) : (max(-7653421031535398446, var_0)))));
            }
        }
    }
    var_15 &= ((var_3 ? var_5 : (max(((var_10 ? -572010778269771715 : 572010778269771712)), ((var_1 ? var_9 : var_4))))));
    #pragma endscop
}
