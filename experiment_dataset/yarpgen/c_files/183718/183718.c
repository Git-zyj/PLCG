/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~(max(var_13, ((var_10 ? var_11 : -8610447431069310227)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 ^= (max(((((-(arr_3 [i_0] [i_1] [1]))))), ((~(((arr_0 [i_0] [i_0]) & (arr_5 [i_1] [i_1] [i_1] [i_1])))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (!var_13);
                    arr_9 [i_0] [i_0] [i_1] [i_2 + 3] = 0;
                }
            }
        }
    }
    var_16 = ((((((15 ? 4767747634294925835 : var_13)) > var_1)) ? (((~var_13) ? var_1 : var_0)) : ((((((var_0 ? var_7 : -84))) ? (2569880745 + var_10) : 49899)))));
    var_17 = ((var_4 % (max(var_7, var_12))));
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_18 = (min(var_18, (666703852 || 0)));
                    arr_17 [i_4] [i_4] = ((((min(((((arr_11 [8] [i_5]) && (arr_16 [2] [2])))), (arr_15 [i_5] [i_4] [i_4] [i_3])))) ? (arr_15 [i_3] [i_4] [i_5] [i_5]) : ((((arr_14 [i_4] [i_3 + 3]) % var_6)))));
                    arr_18 [i_3] [i_4] [i_5] [i_4] = ((var_9 != (arr_13 [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
