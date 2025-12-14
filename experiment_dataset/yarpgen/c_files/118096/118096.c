/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min((arr_1 [i_0] [i_1]), (((arr_2 [i_0]) - ((-17324 - (arr_4 [i_0] [i_1] [i_1])))))));
                var_13 -= (16715425681051623382 || 1731318392657928243);
            }
        }
    }
    var_14 = (min(((((max(var_0, 1731318392657928258)) < (max(var_7, var_11))))), (~849823586636013658)));
    #pragma endscop
}
