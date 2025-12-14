/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = (max((((4 ? (arr_0 [i_1] [i_2]) : (arr_0 [i_0] [i_1])))), (arr_1 [i_0])));
                    var_22 -= 11789981930109268001;
                }
            }
        }
    }
    var_23 = (min(((((max(254, 30))) + (23119 / -1190771336))), 4));
    #pragma endscop
}
