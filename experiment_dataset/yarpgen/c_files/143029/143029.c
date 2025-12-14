/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = ((((!(arr_8 [i_3] [i_1] [i_2 - 1] [i_3 + 3]))) ? (178 / -8040021363668616679) : ((((!(arr_5 [i_2] [i_2 - 1])))))));
                                arr_13 [1] [i_1] [i_2] [1] [i_2] [i_3] [i_2] = -118;
                                var_14 = ((((~(arr_12 [10] [i_2] [i_3] [i_4]))) >= (arr_9 [i_4] [i_3] [6] [i_1] [i_0])));
                            }
                        }
                    }
                }
                arr_14 [5] [i_1] = (arr_10 [2] [2] [17] [i_1]);
                var_15 = ((+((~(min((arr_7 [i_1] [i_1] [2]), var_4))))));
                var_16 = (~35438);
                arr_15 [i_1] [i_0] = -5446782688443940652;
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
