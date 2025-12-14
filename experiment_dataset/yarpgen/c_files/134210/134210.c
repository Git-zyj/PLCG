/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        var_19 = (((arr_6 [i_0 + 1] [i_1 + 1] [i_2 - 3]) ? var_8 : var_16));
                        var_20 = (~var_10);
                        var_21 ^= ((((0 ? 3918844293 : 3)) - ((7 ? 737029718 : 1))));
                        var_22 = ((-((var_16 ? (arr_7 [i_0] [i_2] [i_3 - 2]) : (arr_4 [17] [i_1] [i_2])))));
                    }
                }
            }
            var_23 = ((!(arr_4 [i_0 + 1] [i_1 - 1] [i_1 + 1])));
            var_24 &= (15682 ? (arr_4 [i_1 + 1] [i_0 - 1] [i_0 + 2]) : var_14);
            var_25 |= ((var_12 ? var_9 : var_9));
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                {
                    var_26 = (max(var_26, ((((min(var_16, var_8))) ? 4074150054535127931 : (((arr_3 [i_5 - 1] [i_4 + 1] [i_0 - 1]) ? 9223372036853727232 : 1))))));
                    arr_21 [i_0] [4] [16] [10] &= ((!(((1 ? 4 : (!-2545107589371378481))))));
                }
            }
        }
    }
    var_27 = var_12;
    #pragma endscop
}
