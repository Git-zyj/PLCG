/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((~(arr_1 [11])));
                var_18 -= -43105;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                {
                    var_19 = (min(var_19, ((((arr_11 [i_2 + 1] [4] [i_2 + 1]) ? (((!(arr_11 [i_2] [6] [i_2 - 1])))) : ((min(64, (arr_12 [3])))))))));
                    var_20 = (arr_16 [i_4] [i_3] [i_3] [i_2]);
                    var_21 = ((~(3497633198097905560 && 17730206400683399157)));
                    var_22 = ((1505094223 ? 3497633198097905540 : 716537673026152438));
                }
            }
        }
    }
    var_23 = var_10;
    #pragma endscop
}
