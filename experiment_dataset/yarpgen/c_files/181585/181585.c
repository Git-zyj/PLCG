/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = (arr_2 [i_0]);
    }
    var_13 = (((max(1050023568, ((min(var_9, var_9))))) != var_4));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                arr_19 [i_1] [i_1] [i_1] [i_4] = (((arr_11 [i_1] [i_3] [i_3] [i_1]) ? (arr_13 [i_2] [i_2] [i_3] [i_3] [i_3] [i_3]) : ((((var_6 <= (arr_2 [9])))))));
                                arr_20 [8] [i_4] [i_3] [i_2] [i_1] [i_1] = ((59 ? (arr_4 [i_1]) : 4294967295));
                            }
                            arr_21 [i_4] [i_1] [10] [i_1] = (min(3244943727, 1307470962));
                            var_14 = (min(var_14, (!508)));
                        }
                    }
                }
                arr_22 [i_2] [i_1] [i_1] |= (arr_6 [i_1]);
                arr_23 [i_1] [i_1] [i_1] = 3245652692;
            }
        }
    }
    #pragma endscop
}
