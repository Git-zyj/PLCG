/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = ((1774274210 ? ((((((arr_0 [2]) ? -1 : var_6))) ? (arr_0 [i_0]) : 72)) : ((((arr_3 [i_1 - 2]) * (arr_3 [i_1 - 2]))))));
                var_15 *= (max(65527, (~var_7)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            {
                var_16 = (max(var_16, (((((min(var_2, var_5))) ? (((arr_7 [i_3 - 2] [i_3 - 2]) ? (arr_7 [i_3 - 1] [i_3]) : (arr_7 [i_3 + 1] [9]))) : (max(-1699909871, 51)))))));
                arr_10 [i_2] [i_3 - 3] = ((18446744073709551615 || (((1 ? (arr_4 [i_3 - 3] [i_3 - 3]) : (arr_8 [i_3 - 4] [i_3 - 4]))))));
                var_17 ^= (((((((min(67, (arr_4 [i_2] [i_2])))) > (arr_1 [i_2])))) | (!18446744073709551615)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_18 |= (((var_1 ? 1394195293 : (arr_12 [i_5] [i_4]))));
                arr_15 [i_4] [1] = ((((max(((max(16, (arr_12 [i_4] [i_5])))), ((var_2 ? var_13 : 1))))) ? ((var_10 / ((((arr_12 [i_4] [i_5]) * var_13))))) : ((max(((var_6 ? -18230 : (arr_11 [8]))), (1956192630 / var_9))))));
                var_19 = ((-(((!(((-47 ? (arr_12 [i_4] [i_5]) : var_11))))))));
            }
        }
    }
    var_20 = ((((!(((var_12 ? 4095 : var_6)))))));
    #pragma endscop
}
