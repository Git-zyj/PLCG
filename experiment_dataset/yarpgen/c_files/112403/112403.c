/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -596711412;

    for (int i_0 = 3; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_1] [0] = (((((596711407 || 222) ? (arr_1 [i_0 - 3] [i_2 - 1]) : (((var_3 > (arr_2 [i_1])))))) | (1231137566 + 247)));
                    arr_8 [i_2] [i_1] [9] = (((max(var_10, (arr_6 [i_0] [i_1]))) ^ (arr_5 [i_1] [i_2 + 1] [i_0 - 3] [i_0])));
                    arr_9 [i_0 - 3] [i_1] = 1921082344;
                    var_20 ^= (!16711680);
                }
            }
        }
        var_21 |= ((~(((arr_5 [20] [i_0] [i_0 + 1] [i_0 - 2]) ? (arr_5 [16] [i_0] [i_0 - 1] [i_0 - 2]) : 3))));
    }
    for (int i_3 = 3; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((-(arr_1 [i_3 - 2] [i_3 - 2])));
        var_22 -= (((((((0 ? (arr_12 [3]) : (arr_12 [i_3])))) ? (arr_2 [6]) : (arr_3 [i_3] [i_3] [i_3]))) >> (2123146993 - 2123146978)));
    }
    for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [i_4] = (min(((((arr_5 [16] [i_4 - 1] [i_4 + 1] [i_4]) >> (((arr_5 [8] [i_4] [i_4 - 1] [i_4]) - 19))))), (arr_0 [i_4])));
        arr_19 [i_4] [i_4] = var_7;
        var_23 = (max(var_23, ((max(((15 / (arr_15 [i_4 - 2]))), (max(((12 ? (arr_5 [8] [i_4] [i_4] [i_4 - 1]) : var_11)), (45231 / 15))))))));
        arr_20 [i_4] [i_4] = ((var_14 & ((-(max((arr_0 [i_4]), (arr_0 [i_4])))))));
        arr_21 [i_4] [i_4] = (arr_3 [i_4] [i_4 + 1] [i_4]);
    }
    var_24 = var_3;
    #pragma endscop
}
