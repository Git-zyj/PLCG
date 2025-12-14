/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [7] = ((((min(-1655343877783701330, -59))) / (((arr_2 [i_1 - 2] [i_1 + 1] [i_1 - 2]) ? (arr_2 [i_1 - 1] [i_1 + 1] [i_1 + 2]) : 49))));
                arr_5 [6] [i_0] [5] = (max(-65, 56));
                arr_6 [i_0] [i_1] = (((1 * 1655343877783701322) ? (((arr_3 [i_1 - 2] [i_1 - 2] [i_1 + 2]) ^ (arr_2 [i_1 - 2] [3] [i_1 - 1]))) : ((((1655343877783701294 / 58) - (((~(arr_1 [i_0])))))))));
            }
        }
    }
    var_18 += (~var_1);
    #pragma endscop
}
