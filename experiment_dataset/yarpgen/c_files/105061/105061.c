/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((max(var_0, 18446744073709551615))) && (((var_9 ? var_6 : -79))))));
    var_12 = ((((min(-1, 0))) ? var_3 : ((min(26014, 127)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_1] [i_3] = ((!(-127 - 1)));
                                var_13 = (max(((var_6 & (arr_11 [i_3] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3]))), ((min((arr_11 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3]), var_3)))));
                            }
                        }
                    }
                }
                var_14 = ((((min(((-127 ? 127 : 44)), (arr_10 [i_0] [i_0] [i_0] [16] [i_0] [i_0] [i_0])))) ? var_2 : (((min(18446744073709551594, 5279566058391897522)) * (((((arr_0 [i_0]) == -115))))))));
            }
        }
    }
    #pragma endscop
}
