/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 ? var_10 : -107));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = 8134;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((~(((6915169002830299206 && ((min((arr_5 [i_3]), var_4)))))))))));
                                arr_12 [10] [10] [8] [10] [10] [9] |= (10783738580543634544 | 73);
                                var_16 = (max(var_16, -1377));
                                arr_13 [i_0] [4] [4] [4] [3] [i_0] = ((!(arr_5 [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
