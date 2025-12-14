/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= 16383;
    var_17 = var_13;
    var_18 = var_7;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 += (min(((((((arr_1 [i_2]) ? (arr_3 [i_0]) : (arr_3 [i_0])))) ? (arr_1 [i_0]) : (((arr_7 [i_2] [i_2] [i_2]) ? (arr_4 [1] [i_2]) : (arr_2 [i_0]))))), ((max((((arr_3 [i_0]) ? -663478826 : (arr_3 [i_0]))), 663454631)))));
                    var_20 += ((((max(-var_13, (-9223372036854775807 - 1)))) ? (min(1, 562400197607424)) : (((((arr_5 [i_1] [i_1 - 3] [6]) != (arr_6 [i_1] [i_1 - 2])))))));
                    var_21 = var_13;
                    var_22 = (max((((((arr_6 [i_0] [i_2]) <= (arr_2 [i_0]))))), 236));
                }
            }
        }
        var_23 |= (min(((max(1, 786036779))), (min(4128768, 243))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_24 = (arr_6 [i_3] [i_3]);
        var_25 = ((-28481 ? (arr_7 [7] [i_3] [i_3]) : (arr_10 [i_3])));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_26 = var_12;
        var_27 = (max(var_27, ((max(((((arr_7 [i_4] [i_4] [i_4]) ^ 1))), var_8)))));
    }
    #pragma endscop
}
