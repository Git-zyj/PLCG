/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((117 ? ((min((max(var_0, var_6)), -var_5))) : var_3));
    var_21 = (((((min(var_17, -18205)))) ? ((var_3 ? var_10 : (~var_2))) : (var_1 <= var_19)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_4;
        arr_3 [i_0] [i_0] = 8709087071514124713;
        arr_4 [i_0] = (48 > -30019);
        arr_5 [i_0] [i_0] = (48831 / 6175494782272898134);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_12 [i_0] &= (8709087071514124713 <= (min((arr_9 [i_0] [i_0] [i_0] [i_0]), (((arr_0 [i_1] [i_2]) ? 8709087071514124684 : (arr_6 [i_1 - 1] [3]))))));
                    arr_13 [i_1] [i_1] [i_0] = (((((-(arr_11 [5] [5] [i_2])) % (((max(-126, (arr_10 [i_0] [i_0] [3])))))))));
                }
            }
        }
    }
    #pragma endscop
}
