/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_1] [i_2] = (max(((min((arr_2 [i_1]), (arr_3 [i_0 + 1] [i_1])))), (221 & 161)));
                    arr_9 [i_0] [i_1] [i_1] = (max(46621, 46621));
                    arr_10 [i_1] [i_1] = var_8;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                arr_16 [i_3] [9] [i_3] = (min((18913 & 28415), (arr_12 [i_4])));
                arr_17 [i_3] [i_4] [i_3] = (~var_3);
                arr_18 [i_4] [i_3] [i_3] = ((+((var_17 ? (arr_15 [i_3] [i_4] [i_4]) : (arr_15 [i_3] [i_3] [i_3])))));
            }
        }
    }
    var_19 = (((max(161, 0)) < var_15));

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = ((16379 <= (arr_4 [i_5])));
        arr_23 [i_5] [i_5] = (((arr_1 [i_5]) ? (((-1 <= 94) << 14)) : (max(((41 << (179 - 177))), (arr_2 [i_5])))));
        arr_24 [i_5] = (((98 == 227) && ((max(((min(2, 234))), (((arr_5 [i_5] [i_5] [i_5] [i_5]) ? var_12 : (arr_5 [i_5] [i_5] [i_5] [i_5]))))))));
        arr_25 [i_5] = var_3;
    }
    for (int i_6 = 4; i_6 < 16;i_6 += 1)
    {
        arr_28 [i_6] = (((max((arr_27 [i_6 + 1]), (~8192))) < (((!((max(var_18, (arr_3 [i_6] [i_6])))))))));
        arr_29 [i_6 - 1] = (max((min(((max(67, (arr_27 [i_6])))), ((18896 + (arr_5 [i_6] [i_6] [i_6] [i_6]))))), ((min(74, 54734)))));
    }
    #pragma endscop
}
