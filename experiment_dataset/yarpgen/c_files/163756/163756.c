/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_5 ? var_10 : (63 || 73))) + 9223372036854775807)) >> (var_10 + 3386338063762581172)));
    var_21 = (max(var_21, (((-201 ? ((((1 <= var_4) ? var_1 : 183))) : (((((var_18 ? var_0 : var_1))) ? (~1) : var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_22 = (min((max(var_0, 189)), var_17));
                var_23 = (~16508790049038837544);
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_24 = ((((-(!78))) != (((77 ^ 1453077755) ? 1 : -1109342479))));
        arr_7 [6] [i_2] = (((!((min(118, (arr_5 [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {
                    var_25 = (max(-295082647, (arr_11 [i_2] [i_3] [i_4])));
                    var_26 = (((~((~(arr_12 [i_2]))))));
                    var_27 = (max(var_27, ((min((((max(-1, 976717682)) - (arr_10 [9] [9]))), ((max(var_4, ((max(var_8, (arr_4 [7] [i_3 + 2]))))))))))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_28 ^= (((((max(1, var_7))) ? (max((arr_17 [i_5] [i_5]), 9223372036854775808)) : ((max(var_9, (arr_4 [i_5] [i_5])))))));
        arr_18 [12] = 221;
        arr_19 [i_5] = ((((((~204) ^ ((max(199, (arr_3 [i_5]))))))) ? ((min(((max(1, (arr_17 [i_5] [i_5])))), (min(1, (arr_0 [i_5])))))) : ((((2975261814 ? 1 : (arr_3 [i_5]))) | (arr_2 [i_5])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        var_29 = (((((!(arr_21 [i_6])))) & (arr_20 [i_6 + 1] [i_6 + 1])));
        arr_22 [i_6] [i_6] &= (16383 + 78);
    }
    #pragma endscop
}
