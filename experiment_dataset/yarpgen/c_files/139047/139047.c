/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_6 [1] [i_1] [i_0] = (arr_4 [i_0] [i_0] [i_0] [i_0]);
                    arr_7 [0] &= (max(((((max((arr_3 [10]), (arr_4 [i_2] [i_2] [i_1] [i_0])))) ? (arr_0 [i_1] [6]) : ((max((arr_4 [4] [i_1] [i_2 + 1] [i_2]), (arr_0 [i_0] [1])))))), (min((!var_3), ((-1 ? var_5 : (arr_0 [i_0] [4])))))));
                    arr_8 [i_0] [3] [i_0] = min((((24271 ? ((((arr_3 [i_0]) < (arr_4 [i_0] [i_0] [i_1] [i_2 + 1])))) : -6))), var_10);
                }
            }
        }
    }
    var_12 = ((var_10 ? ((((0 && var_10) || var_9))) : (var_0 && var_4)));
    #pragma endscop
}
