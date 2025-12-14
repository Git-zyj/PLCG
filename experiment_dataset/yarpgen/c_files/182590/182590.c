/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((127 / 1), var_11));
    var_19 = ((var_16 <= (max(var_8, ((min(-28649, var_6)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (((max(1974926689, 0)) > (((arr_4 [i_1] [i_1]) ? (arr_4 [i_2] [i_1]) : -1974926690))));
                    arr_8 [i_1] [i_0] [i_0] [i_1] = ((((min(-1974926677, ((max((arr_2 [i_0]), 127)))))) != (max(((max(203, (arr_0 [i_0])))), ((3525803442129268510 << (arr_1 [i_0])))))));
                    arr_9 [i_0] [i_1] = ((-1487748159 ? -3525803442129268511 : -1974926690));
                    arr_10 [i_0] |= (max(((max((var_7 << var_17), var_13))), (max((((var_15 >> (var_11 + 30387)))), (min((arr_0 [i_1]), var_3))))));
                    var_21 += (((((((min(var_7, 3525803442129268516))) ? ((1 | (arr_3 [i_0] [i_0] [i_0]))) : (((min(var_5, 146))))))) ? ((((((max(var_14, (arr_2 [i_0])))) != ((min((arr_5 [i_0] [i_1] [i_2]), (arr_1 [i_0])))))))) : (min(var_13, ((max(1770353064, 1994180984)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_4] [i_4] = (((max((min(-3525803442129268495, 1994180986)), (((7 ? 23 : (arr_13 [i_3])))))) == (max(((((arr_12 [i_4]) ? var_15 : (arr_0 [i_4])))), ((var_4 ? -3525803442129268510 : (arr_0 [i_3])))))));
                var_22 = (((var_8 - -3525803442129268504) ^ (min((min((arr_6 [i_4] [i_3] [i_3]), -1994180984)), ((max(-224098570, 815993529)))))));
            }
        }
    }
    #pragma endscop
}
