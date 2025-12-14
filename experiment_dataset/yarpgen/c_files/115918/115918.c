/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 662454261119391176;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = 1;
                var_16 = min((arr_3 [i_1 + 2]), (((arr_3 [i_1 + 2]) & (arr_2 [i_1 + 3]))));
                var_17 += (2147483647 ^ 2147483647);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] = (min(-69, (arr_5 [i_0] [i_3 + 1] [i_3] [i_3])));
                                arr_12 [5] [i_2] [i_0] = (((min((arr_9 [i_0] [11] [i_1] [8] [i_3] [i_4]), var_7))) ? (min(1, 36028796884746240)) : (arr_9 [i_0] [i_1 - 1] [i_2] [i_2] [i_3 - 1] [i_4]));
                            }
                        }
                    }
                }
                var_18 += ((-23603 ? 4279576789 : 8761367667042687803));
            }
        }
    }
    #pragma endscop
}
