/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [8] [i_0] [i_2] = ((((min((arr_1 [i_1 - 2] [i_0 - 3]), var_0))) ? var_9 : (((((max(1552844560, -617944214))) != ((-1552844565 ? (arr_3 [i_0 - 2] [6] [i_0 - 2]) : (arr_2 [i_0]))))))));
                    var_11 = ((~(((~-1552844580) ? ((((arr_1 [i_0] [i_1 - 2]) ? -315870988 : var_2))) : ((1552844547 ? 1552844547 : var_8))))));
                    arr_8 [i_0 + 2] [i_1] [i_0 + 2] &= 315870998;
                    arr_9 [i_1] [i_1] [i_1] &= (((min((3126147162939464297 != -1552844565), (~var_7))) ^ (arr_5 [i_0] [i_2] [i_2])));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_12 = ((((280723618 >= (min((arr_3 [i_0] [4] [i_0 + 1]), var_5)))) && (((((max(var_7, (arr_11 [i_0] [i_3])))) ? ((((arr_1 [i_0 - 2] [i_0 - 2]) << (((arr_0 [0] [i_2 - 2]) - 1756733482))))) : (arr_11 [6] [i_0 + 1]))))));
                        arr_14 [i_0] [i_2] [i_3] = (max(((((arr_13 [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2]) ? var_1 : (arr_10 [i_1 + 1] [i_1] [i_1])))), (min(-2248990896456852153, (arr_10 [i_1 - 2] [i_1] [i_1])))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_0] = (((((280723594 / (((arr_3 [i_2] [i_1 + 1] [i_0]) ? (arr_15 [i_0 - 3] [i_1 + 1] [i_2] [i_4]) : var_1))))) ? (arr_15 [i_4] [i_1 - 1] [i_1 - 1] [i_0]) : (arr_13 [i_0 + 3] [i_1 - 1] [i_0] [i_4] [i_2] [8])));
                        var_13 ^= (((((((max(var_10, 16))) ? (((arr_17 [i_0] [i_1 - 1] [i_2] [i_4] [i_0 - 3]) / 25165824)) : var_10))) * (((((1073741824 ? 140 : 3221225472))) / 2046))));
                        var_14 = var_8;
                    }
                }
            }
        }
    }
    var_15 = 2147483647;
    var_16 = ((var_6 ? (min(var_6, (~var_0))) : var_0));
    #pragma endscop
}
