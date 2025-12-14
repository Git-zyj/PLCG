/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = (min(var_21, ((((((((1 != (arr_2 [i_0]))) ? (arr_2 [i_0]) : ((var_6 >> (var_16 + 14156)))))) - 3083587530)))));
        var_22 = ((!((max((arr_1 [i_0]), var_17)))));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    arr_13 [i_1] |= ((((-(!var_6)))) ? ((min(var_19, 1))) : (((var_16 ? (arr_10 [i_3]) : 1))));
                    var_23 = (min(var_23, (((((((1 << (-113 + 137))) >= 1)) ? (((min(59920, (arr_6 [i_1] [i_1]))))) : (+-2957567134987048262))))));
                    var_24 = ((((((((-(arr_4 [i_2] [i_1])))) - var_15))) ? var_4 : var_19));
                }
            }
        }
        var_25 = (((var_19 ? var_5 : (arr_11 [i_1 - 2] [i_1 - 3] [i_1 - 2] [i_1 - 2]))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        var_26 = ((((-var_16 < (((arr_23 [i_1] [i_1] [i_5] [14] [i_6]) ^ var_11)))) ? var_10 : (((var_3 / var_12) ? var_9 : (arr_14 [i_1 - 1] [i_1 + 3])))));
                        var_27 = (arr_14 [i_4] [i_4]);
                    }
                }
            }
        }
        var_28 = ((-((var_10 ? (arr_6 [i_1] [i_1 - 1]) : var_9))));
        var_29 = (((((+((max((arr_6 [i_1] [i_1]), 61920)))))) ? var_8 : ((((max(var_2, var_5))) ? 112 : var_18))));
    }
    var_30 = var_8;
    #pragma endscop
}
