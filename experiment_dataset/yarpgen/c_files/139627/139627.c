/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(((min((max(165886810, 165886826)), var_5))), 5207584249444176881);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (arr_2 [i_0] [i_1 + 4]);
                    var_20 = (i_0 % 2 == zero) ? (((~(((arr_2 [i_0] [i_1 + 4]) >> (((arr_2 [i_0] [i_1 + 3]) - 9276458122073050233))))))) : (((~(((arr_2 [i_0] [i_1 + 4]) >> (((((arr_2 [i_0] [i_1 + 3]) - 9276458122073050233)) - 11466824106531251004)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_21 = ((((min((((arr_13 [i_3] [i_4] [16]) ? 1 : var_2)), ((min(var_7, (arr_11 [i_3] [i_3]))))))) ? ((max(var_11, ((~(arr_9 [i_3])))))) : (((arr_9 [i_3]) - (min(7881299347898368, 107))))));
                    var_22 = (arr_12 [i_3] [i_4 + 1] [i_5]);
                    var_23 = ((((-1190136428 > (((~(arr_10 [i_3] [i_4])))))) ? var_0 : (arr_13 [i_3] [i_4 - 1] [i_4 + 1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 4; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                var_24 = min(8271211847911178599, (((!((min((arr_20 [i_7]), (arr_5 [i_7]))))))));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_25 = var_17;
                                var_26 = (((arr_0 [i_9] [i_7]) <= ((2206160204 ? (min(169, var_12)) : (((15456698920501166911 ? 0 : (arr_15 [i_9]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
