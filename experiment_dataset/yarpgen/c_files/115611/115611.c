/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (~var_13);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, 911967118737498321));
                    arr_10 [2] [2] [2] [i_1] = 911967118737498327;
                }
            }
        }
        var_22 ^= (max((max(var_4, (arr_8 [8] [i_0]))), (arr_5 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (max(var_6, ((~(arr_1 [i_3] [i_3])))));
        arr_14 [12] = ((~(min((var_8 | 3233042882), var_16))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = ((((((((var_0 ? 3862356533 : var_8))) ? ((var_9 ? (arr_2 [9] [10]) : 911967118737498321)) : (((arr_17 [i_4] [i_4]) / (arr_15 [i_4])))))) ? ((((arr_16 [10]) == (arr_16 [i_4])))) : ((((((arr_6 [i_4] [i_4]) ? 4067996163066099579 : var_5)) != -911967118737498323)))));
        arr_19 [i_4] = (~-911967118737498334);
    }
    var_23 = ((-(var_14 / var_10)));
    #pragma endscop
}
