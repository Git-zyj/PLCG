/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((((((arr_1 [i_1]) ? (arr_3 [i_1] [i_1] [i_0]) : -8297439453186544134))) ? (((arr_1 [i_0]) ? 1 : var_6)) : var_7));
                arr_5 [14] [i_1] [i_1] = (max((arr_2 [i_0] [i_0] [i_0]), (((arr_1 [i_0]) ? ((var_10 ? 865129231 : (arr_0 [i_1] [i_1]))) : (arr_2 [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_13 = var_6;
    var_14 = ((var_8 ? (min(((max(var_4, 1))), (min(var_12, var_12)))) : (max(var_12, var_7))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_13 [i_2] [5] [i_2] = var_10;
                    arr_14 [i_4] = var_2;
                    arr_15 [i_2] [i_3] [i_3] [i_4] = (((((arr_9 [i_3] [i_3] [i_2]) ? -48406512 : (arr_11 [i_4] [i_3] [i_2] [i_2])))) ? ((((((-2397643767767818323 ? var_1 : (arr_9 [i_2] [i_3] [0])))) ? ((var_8 ? 39099 : -3856340926297649382)) : (((min((arr_9 [i_4] [i_2] [i_2]), (arr_9 [i_2] [5] [i_4])))))))) : (max((((arr_7 [i_4]) ? var_2 : (arr_7 [4]))), -25418839391851113)));
                    var_15 = (((arr_10 [i_4] [i_2]) ? ((((arr_10 [i_3] [i_4]) ? -116 : 1395697706))) : ((var_5 ? (arr_10 [i_2] [i_2]) : (arr_7 [i_3])))));
                    arr_16 [i_2] = ((((((((-3856340926297649383 ? 16251806303879242722 : var_1))) ? var_9 : (min(var_8, 1395697710))))) ? (((arr_10 [i_2] [i_4]) ? var_10 : var_9)) : (arr_8 [i_2] [i_4])));
                }
            }
        }
    }
    #pragma endscop
}
