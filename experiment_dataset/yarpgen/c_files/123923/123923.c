/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((228 ? 30066 : 3424959544)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((-(min(((63 ? -63 : var_2)), (arr_0 [i_0] [i_0])))));
        var_12 = ((+(min((arr_0 [i_0] [i_0]), (arr_1 [i_0])))));
        var_13 = (max(var_13, -7732932222465873429));
        arr_4 [3] = (((61429 < (max(var_9, 3551798287)))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((((-(arr_6 [i_1 - 1] [i_1 - 1])))) ? ((((arr_6 [i_1 - 1] [i_1 - 1]) || (arr_6 [i_1 + 2] [i_1 - 1])))) : (((0 == (arr_6 [i_1 + 1] [i_1 + 2]))))));
        arr_9 [i_1] = (+-2408007004);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_14 = (min(var_14, ((((arr_10 [i_1 + 2] [i_2] [i_3]) || var_8)))));
                    arr_15 [i_2] [i_1] [i_1] [i_1] = (((-38 ? 248 : var_8)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                {
                    arr_22 [i_1] [i_4] [i_1] = (max((arr_21 [i_1] [i_1] [i_1] [i_1]), -55));
                    var_15 = (min(var_15, (arr_5 [i_4])));
                    var_16 = (max(var_16, (((((var_0 ? (arr_5 [i_4]) : var_1))) ? (((13399422237432494408 ? (arr_13 [i_1 - 1] [i_4]) : 28262))) : (((min(96, var_2)) & (arr_21 [i_1 - 1] [i_5 + 3] [i_5] [15])))))));
                    arr_23 [i_1] [i_4] [i_1] [i_5 + 2] = (min((((var_9 ? (arr_5 [i_1]) : var_5))), (arr_18 [i_1] [i_1] [i_1])));
                    arr_24 [i_1] [i_1] = (((~(~var_0))));
                }
            }
        }
    }
    var_17 = (min(var_17, ((((((!(((0 ? 96 : var_7)))))) << (((~247) + 276)))))));
    #pragma endscop
}
