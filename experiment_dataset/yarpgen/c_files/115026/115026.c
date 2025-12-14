/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_13;
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((arr_2 [i_1 + 1] [i_0]) ? (((((max(14522973822753466253, (arr_0 [i_0 - 2])))) ? var_4 : (arr_4 [6] [i_1 + 1] [i_0 + 3])))) : (max(((14 ? (arr_2 [i_0] [i_0]) : 18336756514131931430)), ((max(var_7, var_9))))));
                var_16 = ((((((((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_3 [i_0 + 2])))) ? var_2 : (max((arr_1 [11]), 14522973822753466253)))) + (((arr_3 [i_0 + 2]) ? (arr_4 [i_0] [i_0 + 3] [i_0]) : ((241 ? (arr_0 [4]) : (arr_2 [i_0] [i_0])))))));
                var_17 = ((!(max((212 >= 0), (243 <= -104)))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_18 *= var_2;

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_19 = (min(var_19, (arr_8 [i_2] [i_2])));
            var_20 = (max(var_20, ((var_3 ? (((48 ? 2047 : (arr_9 [i_2] [i_3])))) : ((var_2 ? (arr_8 [1] [i_3]) : 1))))));
            var_21 = ((((!(arr_8 [i_3] [i_3]))) ? (arr_9 [i_2] [i_3]) : ((((arr_9 [6] [i_2]) != var_5)))));
            arr_11 [i_2] [13] [i_3] = (((3923770250956085362 + (arr_8 [i_2] [i_3]))));
            var_22 -= ((~(arr_7 [i_2] [i_2])));
        }
        var_23 -= var_11;
    }
    #pragma endscop
}
