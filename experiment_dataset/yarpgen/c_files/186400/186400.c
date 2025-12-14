/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (+(((~-19686) + ((max(var_7, var_2))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = min(((-(243 | 1))), (var_13 < -4294967295));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (max(1661676161348893252, ((((arr_6 [i_0] [i_0]) <= 23)))));
                    arr_9 [i_2] = (((~1) ? (~23) : (((var_8 < (arr_2 [i_0] [i_1 - 3]))))));
                    var_17 = (-1 & ((var_6 % (arr_1 [i_2] [i_0]))));
                }
            }
        }
        var_18 = (((((-38 % (arr_5 [i_0] [i_0] [i_0])))) ? (max(-1573995754, (arr_5 [i_0] [i_0] [i_0]))) : ((min(-19686, 1)))));
        var_19 = (((~var_8) ? 1841007362 : (((((1 >> (var_1 + 80))))))));
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_20 = (((max(((max(var_7, (arr_11 [i_3] [i_3])))), (((arr_10 [i_3]) | (arr_10 [i_3]))))) + (((-var_9 <= (((arr_10 [i_3]) ? (arr_11 [i_3] [i_3]) : 1)))))));
        var_21 = (max((((arr_10 [i_3 + 2]) ? 1 : (((arr_11 [i_3] [i_3]) + 56)))), ((~(~var_14)))));
    }
    #pragma endscop
}
