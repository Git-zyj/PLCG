/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((max(((var_8 ? (arr_3 [i_0]) : var_10)), var_16))) ? var_2 : (((((min(var_4, var_8))) && (((32230 ? var_9 : var_9))))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] = (min((((arr_6 [i_0] [i_1] [i_1] [i_1 - 1]) - var_9)), (var_8 - 5206438938829871142)));
                    arr_9 [i_0] [i_0] = (!var_1);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_20 = var_9;
                    arr_12 [i_0] [i_0] = var_6;
                    var_21 *= (!var_17);
                    var_22 = 12099646588453639690;
                    var_23 *= 2169894182340950165;
                }
            }
        }
    }
    var_24 = (max((max(18446744073709551615, var_17)), ((~(max(11204962003137206153, var_1))))));
    var_25 = var_15;
    var_26 = var_6;
    #pragma endscop
}
