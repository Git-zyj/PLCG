/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_2 [i_1] [i_0] [i_0]);
                var_13 += ((((min((arr_0 [i_0] [i_0 - 2]), (arr_3 [i_0 + 1])))) ? (((-1 && ((max(216, 1)))))) : ((((((var_9 << (6153441483467024286 - 6153441483467024270)))) && ((max(12293302590242527316, 62))))))));
            }
        }
    }
    var_14 = ((!((min(var_3, ((min(var_7, var_2))))))));
    var_15 = (max(var_1, var_5));
    var_16 += var_11;
    var_17 = (((1 << (134 - 113))));
    #pragma endscop
}
