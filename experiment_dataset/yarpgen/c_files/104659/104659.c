/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = -8;
                    var_16 -= (((~((~(arr_5 [i_1] [i_2]))))));
                }
            }
        }
        var_17 = ((!((!(arr_2 [i_0])))));
        var_18 = ((~(((arr_4 [16]) ? 1792 : (arr_4 [0])))));
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [i_3] = ((((((arr_1 [i_3] [i_3]) ? (arr_2 [i_3]) : (~88)))) && 46));
        var_19 += var_15;
        arr_12 [i_3] = arr_7 [i_3] [i_3] [3];
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_20 += (((!((((arr_7 [i_4] [i_4] [i_3]) ? var_13 : (arr_5 [i_3] [i_5])))))));
                        var_21 += -var_11;
                    }
                }
            }
        }
    }
    #pragma endscop
}
