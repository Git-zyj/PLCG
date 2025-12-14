/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((min(((var_6 ? 1 : var_11)), ((var_13 ? var_9 : var_9)))), var_5));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = min(((806704387 ? 1 : -29812)), 1);
        arr_4 [i_0] = (arr_1 [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = ((((!(((var_1 ? (arr_0 [i_1]) : (arr_0 [3])))))) ? (min((25165824 % 1), 51246)) : (((((((arr_9 [10]) >= (arr_1 [i_2]))) && (arr_7 [i_0 - 2] [4] [9] [i_0])))))));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_13 [i_3] [i_1] [i_1] [i_0] = (min((min((arr_11 [i_3] [i_1]), ((max(19897, 19880))))), 1));
                        arr_14 [13] [i_1] [9] [i_1] [9] = ((var_0 >> (((((((var_7 ? (arr_2 [i_2]) : var_12))) ? ((max(0, var_4))) : (!var_10))) - 65384))));
                        var_16 = ((-((var_7 ? var_9 : var_6))));
                        var_17 = ((4269801471 < ((((((arr_0 [i_2]) ? 394777743 : (arr_12 [i_0] [i_0] [i_2]))) | (arr_12 [i_3] [i_1] [i_0]))))));
                    }
                    var_18 = -376195204653024881;
                }
            }
        }
        arr_15 [1] = ((((min(-37, (arr_10 [8] [8] [11])))) ? -1 : (arr_6 [i_0])));
        arr_16 [6] = (-64 || 35759);
    }
    var_19 = ((((max(var_8, (max(var_9, var_1))))) ? ((min((max(var_4, -1198069011)), -var_4))) : var_11));
    var_20 = (max(var_10, ((~(min(var_1, 4269801467))))));
    #pragma endscop
}
