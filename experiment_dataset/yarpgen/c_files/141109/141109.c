/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = (min((((0 < (arr_2 [i_0])))), ((-((min((arr_2 [i_0]), 0)))))));
        arr_5 [i_0] [i_0] &= (((((min(3, (!13))))) % (max((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [2]))), (arr_1 [7] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (((arr_6 [i_0] [i_0] [i_0]) ? ((((!(arr_9 [i_0] [i_0] [i_1] [i_2]))) ? (arr_9 [i_0] [i_1] [i_2] [i_1]) : 3)) : (((!((min(3, (arr_6 [i_2] [i_2] [i_2])))))))));
                    var_12 = ((!(((~(arr_1 [i_0] [i_1]))))));
                    var_13 = ((arr_0 [i_1] [i_2]) ? (((arr_0 [i_0] [i_1]) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_2] [i_0]))) : (arr_0 [i_0] [i_2]));
                    var_14 = (max(var_14, -26432));
                }
            }
        }
        arr_11 [i_0] = (min(((max((arr_8 [i_0] [i_0]), 255))), (((arr_7 [i_0] [i_0]) ? (arr_7 [i_0] [i_0]) : (arr_8 [i_0] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = (~127);
        arr_17 [5] = (max((arr_1 [i_3] [i_3]), var_10));
        arr_18 [i_3] = (((arr_10 [i_3] [i_3] [i_3]) & (((!(arr_15 [i_3]))))));
        var_15 = (min(var_15, ((-(min((arr_7 [i_3] [i_3]), ((max((arr_15 [i_3]), (arr_2 [10]))))))))));
    }
    var_16 = (max(253, -var_1));
    var_17 = 252;
    #pragma endscop
}
