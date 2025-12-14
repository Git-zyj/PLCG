/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 -= (max(-113, (((4511898465812329258 || 2687128058) ? (102 && 72) : ((var_7 ? var_6 : -4))))));
    var_19 *= ((min((((var_10 ? 312618952 : var_0)), ((26 ? 6362842722649458557 : 108))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 ^= (((-34 * -1) ? (arr_0 [i_0 + 4]) : (((((1333858223 ? -2778575090820184888 : 67))) ? -26 : (((arr_0 [i_1]) | 127))))));
                var_21 += (((~-86) ^ (~1195192168)));
                var_22 = (min(var_22, ((max((((~(arr_2 [i_0 - 1])))), (min(-99, (((arr_4 [i_0]) ? 0 : 2147483647)))))))));
                var_23 = ((((min((arr_4 [i_0 + 4]), (max((arr_1 [i_0]), -15))))) ? ((((((612208167 ? 51 : 63)) >= (!-102))))) : (((((arr_1 [i_0 + 1]) > (arr_4 [i_1]))) ? (1023170383 >= 3327837610) : (arr_1 [i_1])))));
                var_24 *= (((((((arr_1 [i_0]) ? 2 : 784656085)))) ? 12488496102530750540 : ((min((arr_3 [i_0 + 2] [i_0 + 1] [i_0 + 1]), 1142061711)))));
            }
        }
    }
    #pragma endscop
}
