/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (arr_1 [i_0 + 1] [i_2 + 1])));
                    arr_6 [i_0] [i_0] = ((var_10 == (arr_4 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = min((((((arr_0 [i_0]) >> (((arr_2 [i_1] [11]) - 11245)))) | ((((arr_11 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0]) <= (arr_11 [i_0] [i_1] [i_2] [i_3] [10] [i_4])))))), (-1779691009 & 1779690996));
                                arr_13 [3] = (((arr_8 [i_1] [i_2 - 1] [i_2 - 1] [i_3]) & (arr_7 [i_1] [i_1] [i_2 + 1] [i_2] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            {
                var_17 = -1918361744;
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_18 = arr_23 [i_6 + 1] [i_6] [i_6 + 2] [i_9];
                                arr_26 [i_5] [i_5] [i_5] = (arr_14 [i_5] [i_8]);
                            }
                        }
                    }
                }
                var_19 = (min(-1437483549, -1437483546));
                var_20 += var_3;
            }
        }
    }
    var_21 = (min(var_21, (((min(6742938100400255410, 1779691009))))));
    var_22 = 1779691020;
    #pragma endscop
}
