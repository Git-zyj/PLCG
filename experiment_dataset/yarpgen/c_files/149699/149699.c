/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(((5 ? -20 : 19)))));
    var_11 = (min(-109, var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((-34 ? 2080768 : 8));
                    arr_9 [i_0] [i_1] [10] = (min((((arr_6 [15] [i_2] [i_2 - 4]) ? 126 : (arr_6 [i_2] [i_2 - 2] [i_2 - 2]))), ((max((arr_6 [i_2] [i_2] [i_2 - 1]), (arr_6 [i_2] [i_2] [i_2 + 1]))))));
                    arr_10 [i_0] [i_0] [i_2 - 1] = var_8;
                    arr_11 [i_2] [i_2] [i_2] |= (((min((max(var_9, -109)), (var_2 - var_9)))) ? (max((arr_4 [i_2 + 2] [i_2 - 2] [i_2]), ((min(var_6, var_5))))) : ((min(((min(var_6, var_4))), (~var_3)))));
                }
            }
        }
    }
    #pragma endscop
}
