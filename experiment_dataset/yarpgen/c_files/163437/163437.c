/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 -= (13 % 13);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                            var_12 = (min(var_12, ((min(((min((arr_4 [i_3 + 1] [i_3 + 2] [i_3 + 2]), (arr_4 [i_3] [i_3] [i_3 + 1])))), (((((arr_10 [i_1] [i_1] [i_2] [i_3]) > var_2)) ? (((min(var_4, var_7)))) : (arr_2 [i_1] [i_0]))))))));
                            var_13 = (min(var_13, ((min(((max((arr_10 [i_3 - 1] [i_3 + 3] [i_3] [i_3 - 1]), var_5))), (min((arr_10 [i_2] [i_3 - 1] [i_3 + 2] [i_3 + 3]), 4002833787498074042)))))));
                        }
                    }
                }
                var_14 = (((((1285228151 ? 120 : var_8))) ? var_2 : (((max(1, 27708))))));
            }
        }
    }
    #pragma endscop
}
