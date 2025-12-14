/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1 + 2] [i_1 - 1] = (((((min(0, var_6))) ? (arr_4 [i_1 + 2] [i_0 + 1] [i_0 - 1]) : (arr_4 [i_0] [i_0] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_1] = (max(((min((arr_11 [i_1] [i_1]), (arr_0 [i_0 - 2] [i_0])))), (((((65507 ? -8185316442076420547 : 1970203352))) ? (max(-582539005116672321, 8185316442076420547)) : (arr_10 [i_1 + 2] [i_0 - 2] [10] [i_0] [i_0])))));
                            var_19 *= ((((!((min(var_9, var_3))))) ? (min((arr_4 [i_2 - 2] [i_1 + 2] [i_0 + 1]), var_12)) : (arr_3 [i_0])));
                        }
                    }
                }
                var_20 = ((~((11656 ? ((var_16 ? var_16 : 508139940)) : ((var_16 ? var_16 : var_16))))));
                var_21 = ((((arr_2 [i_0 - 2] [i_1]) ? (((((arr_6 [i_1] [i_1]) <= 8185316442076420553)))) : (max(var_2, 34)))));
            }
        }
    }
    #pragma endscop
}
