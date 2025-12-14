/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((1585366282 ? (((var_8 ? var_13 : var_3))) : (0 * var_8))) * (((var_4 ? 27461 : (min(22513, 4294967295))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] = ((16712 ? (--2709601021) : -0));
                    var_17 = ((((((arr_0 [i_2] [i_2]) * var_3))) ? ((((-(arr_5 [i_0] [i_1] [i_0] [i_0]))) + ((((arr_5 [i_0] [i_0] [i_1] [i_0 + 1]) && (arr_1 [6])))))) : ((((((arr_5 [i_0] [i_0] [2] [i_0]) + (arr_1 [i_0])))) ? (!var_2) : (!4294967293)))));
                    var_18 = ((((max(50, (arr_5 [i_1 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 2])))) ? 38689 : ((16181433230025605842 ? 0 : 14277667240849347477))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 &= (((((2709601001 ? 44 : 32760)) >= (arr_5 [i_1 - 1] [i_1 - 1] [i_0 - 2] [i_3]))));
                                var_20 ^= (arr_8 [12]);
                                var_21 = (((((((-58 ? 14277667240849347477 : (-127 - 1))) * (arr_10 [i_0 - 1] [i_0] [i_0] [i_2] [0] [i_4])))) ? ((((((var_10 ? (arr_10 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_2] [i_3] [i_3])))) ? (arr_5 [i_0] [i_0] [i_1] [i_0]) : (arr_4 [i_1] [i_2] [i_3] [i_2])))) : ((~(arr_2 [i_0 - 1] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, (((-(min((64214 - var_3), -var_2)))))));
    #pragma endscop
}
