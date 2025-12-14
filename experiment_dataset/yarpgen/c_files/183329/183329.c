/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = 12193900748369372027;
                var_17 = (max((((((var_3 >> (((arr_2 [i_0]) + 9037820976329310584)))) >> 1268479513))), (max(var_9, ((var_15 / (arr_3 [i_1] [i_1] [i_0])))))));
            }
        }
    }
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                {
                    var_19 = (min((arr_10 [i_3]), (((arr_11 [i_4 + 2] [i_4 - 1]) ? (arr_12 [i_3] [i_4 + 2] [i_4 - 1]) : 3026487771))));
                    var_20 = ((-((179 - (min((arr_11 [i_3] [i_4]), (arr_6 [i_3] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [2] [i_4 - 2] [i_3] [i_5] [1] = (arr_9 [i_4] [i_5] [i_6]);
                                var_21 = (arr_10 [i_3]);
                                arr_21 [i_2] [i_2] [i_3] = ((((max((arr_7 [i_3]), (min(var_15, 1390376557))))) % (min(11377028446294671658, ((max((arr_9 [i_2] [i_3] [i_4 + 3]), (arr_19 [i_6] [i_6] [7] [i_5] [i_6]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 |= (((((var_9 ? var_2 : var_9))) || var_10));
    #pragma endscop
}
